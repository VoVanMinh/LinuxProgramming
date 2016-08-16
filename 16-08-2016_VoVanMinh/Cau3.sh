#!/bin/sh
n=0;
for i in `seq 0 1510`
   do
	if [ `expr $i \% 2` -eq 1 ]
	   then
		n=$(($n + $i))
	fi	
   done
echo "-----Tong cac so le tu 0 den 1510 la $n!" 
