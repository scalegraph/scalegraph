##########################################################
##
## Period  : Dec 2011
##
## program : orted.py
##
## Purpose : This script is used to clean up the environment
##           after an unexpected exit.
##           
##
#########################################################

import sys
import commands
import socket

def removeProcesses(hostList, processName):
	for host in hostList:
		result = commands.getoutput('ssh ' + host + ' killall ' + processName)	
		print 'result :|' + str(result) + '|'
	print 'Completed removing uncleaned Test Processes.'

def main(item):
	hList=[]
	for line in open('./machines.txt'):
		if line != '\n':
			hList.append(line.strip());

	removeProcesses(hList, 'Testscalegraph')	

main(sys.argv[1:])
