#!/usr/bin/python
import os
var=0
while var<10000:
    var+=1
    temp='{0:04}'.format(var)  
    result=os.system('./hackme '+temp)
    if result==0:
	print "Found : "+temp
	break
