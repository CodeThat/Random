#!/bin/bash
RESULT=`ps auwwwx | grep $1 | grep -v grep | grep -v $0 | awk '{print $2}'`

for PID in $RESULT
do
    kill -9 $PID
done
