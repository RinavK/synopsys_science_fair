#!/bin/sh
lscpu | grep Core > cores.txt
free | grep Mem > ram.txt
cat speed.txt cores.txt ram.txt > info.txt
#ssh master xvfb-run -a spotify
#{
#read;
#${REPLY}
#}
