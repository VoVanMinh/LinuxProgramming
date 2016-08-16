#!/bin/bash

echo -n "Nhap vao duong dan (Vi du /home/vovanminh/): "
read d

if [ ! -d $d ]
   then 
	echo "-----Duong dan khong ton tai!"
	exit 0;
fi

echo "-----Cac thu muc con trong $d:"
for i in $( ls $d/ )
do
	if [ -d $d/$i ]
	   then
		echo "/$i"
	fi
done
