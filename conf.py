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
			if (line.find('X10_NPLACES=') != -1):
                     		line = 'X10_NPLACES=' + userchoice + '\n'
			configEntry += line

               open('./Makefile', 'w').write(str(configEntry))

def main(item):
	
	if (len(item) > 0):
		print 'Special mode'
	
	configEntry = ''
	userchoice = ''

	info = commands.getoutput('uname -a');
	splitinfo = info.split(' ')

	print('------- ScaleGraph Test Environment Configuration Wizard -------')

	if((splitinfo[1][0:2] == 'sc') or (splitinfo[1][0:2] == 'st') or (splitinfo[1][0:2] == 'sd')):
		print("Using Lab Cluster.")
		userchoice = raw_input('Enter machine(s) to use : ').lower().strip()
		if (len(userchoice)!=0):
			machinesList = userchoice.split(',')

			for record in machinesList:
				configEntry += record + '\n'	
			open('./machines.txt', 'w').write(str(configEntry))

		updateNPlaces()
	elif (splitinfo[1][0:2] == 't2'):
		print("Using Tsubame 2.0")
		tsubameStatus = commands.getoutput('t2stat -n').strip()

                if (len(tsubameStatus) == 0):
			print ('Error : No nodes have been allocated. Please allocate them using \'alloc\' command')
			print ('Example : /data0/t2gsuzumuralab/apps/utils/bin/allocnode -q S -g t2gsuzumuralab -c 2 -n 4')		
		else:
			#print (tsubameStatus)
			spinfo = tsubameStatus.split('\n')
			line = ''
			for l in spinfo:
				#if ( (l.find('+') != -1) and (l.find('*') != -1) and (l.find('/') != -1)):
				if ( (l.find('*') != -1) and (l.find('/') != -1)):
					line += l.strip()
			#line = spinfo[len(spinfo) - 1].strip()
			lastloc = line.rfind('/')
			print line
			print lastloc
			counter = 0
			prevcount = 0
			hlist = []
			while (lastloc != counter):
				counter = line.find('/')
				if counter == -1:
					break
				
				hlist.append(line[prevcount:counter])
				line = line[counter+1:]
				prevcount = line.find('t')

				if prevcount == -1:
					break
			configEntry = ''
			for item in hlist:
				configEntry += item + '\n'
			open('./machines.txt', 'w').write(str(configEntry))
			
			updateNPlaces()
			configEntry = ''
			for line in open('./Makefile'):
				if (line.find('X10_HOME = ') != -1):
							line = 'X10_HOME = /data0/t2gsuzumuralab/scalegraph/x10-runtimes/x10build/x10-2.2.2-fulloptimized-withgc-mpi/x10.dist\n'
				if (line.find('APP_DIR=') != -1):
							line = 'APP_DIR=' + os.path.dirname(os.path.abspath(__file__)) + '\n'
				if (line.find('X10_NTHREADS=') != -1):
							os.system(line)		
							print(line)					
	   			configEntry += line

			open('./Makefile', 'w').write(str(configEntry))
main(sys.argv[1:])

