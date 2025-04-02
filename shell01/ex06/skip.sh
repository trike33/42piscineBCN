#!/bin/sh
/usr/bin/ls -l | awk 'NR==1 || NR%2==1'
