#!/bin/sh
echo -n "Nhap vao mot so: "
read n;
if [ $n -eq 0 ]
	then 
		echo -n "-----So khong chan khong le\n" 
elif [ `expr $n \% 2` -eq 0 ]
	then 
		echo -n "-----Day la so chan!\n"
else
	echo -n "-----Day la so le!\n"
fi

