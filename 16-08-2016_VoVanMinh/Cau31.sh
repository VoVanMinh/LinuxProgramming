#!/bin/sh
ktLe()
{
	if [ `expr $1 \% 2` -eq 1 ]
	   then	
		return 1;
	else
		return 0;
	fi
}

n=0;
for i in `seq 0 1510`
do
	ktLe $i
	temp=$?
	if [ $temp -eq 1 ]
	   then
		n=$(($n + $i))
	fi	
   done
echo "-----Tong cac so le tu 0 den 1510 la $n!" 
