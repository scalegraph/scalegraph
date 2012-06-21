##########################################################
##
## Period  : Jan 2012
##
## program : conf.py
##
## Purpose : This script is used to set configuration
##           information of the test environment.
##           This is only for testing. Not for production.
##           
##
#########################################################

import os
import sys
import commands
import socket

class bcolors:
		WARNING = '\033[91m'
		ENDC= '\033[0m'

def getSettings(confname):
	results = {}
	for line in open('./settings/' + confname + '.conf'):
		strArr = line.split('=')
		strArr[0] = strArr[0].strip()
		strArr[1] = strArr[1].strip()
		
		results[strArr[0]] = strArr[1]
		
	return results

def updateNThreads(numThreads, staticstatus, steals):
	print 'Now updating your bashrc..'
	found = False
	found2 = False
	found3 = False	
	
	result = False
	result2 = False
	result3 = False		
	bashrcConts = ''
	for line in open(os.environ["HOME"] + '/.bashrc'):
		if((line[0] != '#') and (line.find('X10_NTHREADS') != -1)):
			spinfo = line.split('=')
			if(spinfo[1].strip() != numThreads):
				result = True #Need tp update the ssh environment variables
				bashrcConts += '\nexport X10_NTHREADS=' + numThreads + '\n'
				continue
			found = True
		if((line[0] != '#') and (line.find('X10_STATIC_THREADS') != -1)):
			spinfo = line.split('=')
			if(spinfo[1].strip() != staticstatus):
				result2 = True #Need tp update the ssh environment variables
				bashrcConts += '\nexport X10_STATIC_THREADS=' + staticstatus + '\n'
				continue
			found2 = True
		if((line[0] != '#') and (line.find('X10_NO_STEALS') != -1)):
			spinfo = line.split('=')
			if(spinfo[1].strip() != steals):
				result3 = True #Need tp update the ssh environment variables
				bashrcConts += '\nexport X10_NO_STEALS=' + steals + '\n'
				continue
			found3 = True					
		bashrcConts += line
		
	if((not result) and (not found)):
		result = True
		bashrcConts += '\nexport X10_NTHREADS=' + numThreads + '\n'
	if((not result2) and (not found2)):
		result2 = True
		bashrcConts += '\nexport X10_STATIC_THREADS=' + staticstatus + '\n'
	if((not result3) and (not found3)):
		result3 = True
		bashrcConts += '\nexport X10_NO_STEALS=' + steals + '\n'		
	
	open(os.environ["HOME"] + '/.bashrc', 'w+').write(str(bashrcConts))
	
	return (result or result2 or result3)

def updateNPlaces():
	while(True):
		userchoice = raw_input('Enter number of places : ').lower().strip()

                if (len(userchoice) == 0):
                        break
                try:
                	val = int(userchoice)

                        if val == 0:
                           print('Error : Incorrect value. Please enter a non-zero integer.')
                           continue
                        break
                except ValueError:
                        print('Error : Incorrect value. Please enter a non-zero integer.')
                        continue

	if (len(userchoice)!=0):
               configEntry = ''

               for line in open('./Makefile'):
			if (line.find('X10_NPLACES = ') != -1):
                     		line = 'X10_NPLACES = ' + userchoice + '\n'
			configEntry += line

               open('./Makefile', 'w').write(str(configEntry))
               
def updateLocalSettings(envname):
		configEntry = ''
		
		#Get the distionary of settings
		settingsDict = getSettings(envname); 
		
		settingKs = list(settingsDict.keys())
		envNeedUpdate = False
		nthreads = ''
		steals = ''
		staticstatus = '';
		
		for key in settingKs:
			if(key.find('X10_NTHREADS') != -1):
				nthreads = settingsDict[key]
			if(key.find('X10_STATIC_THREADS') != -1):
				staticstatus = settingsDict[key]
			if(key.find('X10_NO_STEALS') != -1):
				steals = settingsDict[key]				
								
		envNeedUpdate = updateNThreads(nthreads, staticstatus, steals)
			
		if(envNeedUpdate):
			print bcolors.WARNING + 'Please reload the ssh environment variables to reflect X10_NTHREADS. \nRun the following command on your shell before running experiments.' + bcolors.ENDC
			print '\nsource ~/.bashrc' 
		
		for line in open('./Makefile'):
			if (line[0] == '#'):
				configEntry += line
				continue;
			treated = False
			for key in settingKs:
				if (key.find('APP_DIR') != -1):
					if (line.find('' + key + ' = ') != -1):
						line = 'APP_DIR = ' + os.path.dirname(os.path.abspath(__file__)) + '\n'
						configEntry += line
						treated = True
						continue
				elif (line.find('' + key + ' = ') != -1):
					line = '' + key + ' = ' + settingsDict[key] + '\n'
					configEntry += line
					treated = True
					continue
			if (not treated):
				configEntry += line

		open('./Makefile', 'w').write(str(configEntry))

def printUsage():
	print 'Configuration script of ScaleGraph Test'
	print 'Usage :'
	print '1) Just run the conf.py'
	print '2) python conf.py -hosts <comma separated host list>'

def main(item):
	hostsFlag = False;
	hostList = [];
	if (len(item) > 0):
		if item[0] == '-hosts':
			hostsFlag = True;
			hostList = item[1].split(',')
		else:
		    printUsage()
		    return
	
	configEntry = ''
	userchoice = ''

	info = commands.getoutput('uname -a');
	splitinfo = info.split(' ')

	print('------- ScaleGraph Test Environment Configuration Wizard -------')

	if((splitinfo[1][0:2] == 'sc') or (splitinfo[1][0:2] == 'st') or (splitinfo[1][0:2] == 'sd')):
		print("Using Lab Cluster.")
		userchoice = raw_input('Enter machine(s) to use (E.g. sa01,sa02) : ').lower().strip()
		if (len(userchoice)!=0):
			machinesList = userchoice.split(',')

			for record in machinesList:
				configEntry += record + '\n'	
			open('./machines.txt', 'w+').write(str(configEntry))
		updateNPlaces()
		updateLocalSettings('labcluster')
	elif (splitinfo[1][0:2] == 't2'):
		print("Using Tsubame 2.0")
		if not hostsFlag:
			tsubameStatus = commands.getoutput('t2stat -n').strip()
			
			if (len(tsubameStatus) == 0):
				     print ('Error : No nodes have been allocated. Please allocate them using \'alloc\' command')
				     print ('Example : /work0/t2gsuzumuralab/apps/utils/bin/allocnode -q S -g t2gsuzumuralab -c 2 -n 4')		
				     return
			else:
				spinfo = tsubameStatus.split('\n')
				line = ''
				for l in spinfo:
					if ( (l.find('*') != -1) and (l.find('/') != -1)):
						line += l.strip()
				lastloc = line.rfind('/')
				print line
				print lastloc
				counter = 0
				prevcount = 0

				while (lastloc != counter):
					counter = line.find('/')
					if counter == -1:
						break
					
					hostList.append(line[prevcount:counter])
					line = line[counter+1:]
					prevcount = line.find('t')
	
					if prevcount == -1:
						break
		updateNPlaces()
		updateLocalSettings('tsubame')
		configEntry = ''
		for item in hostList:
			configEntry += item + '\n'
		open('./machines.txt', 'w+').write(str(configEntry))

main(sys.argv[1:])

