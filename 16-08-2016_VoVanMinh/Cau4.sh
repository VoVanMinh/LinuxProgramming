#!/bin/sh
pw="matkhau"
mk="mk"
while [ $mk != $pw ]
do
	echo -n "Nhap vao mat khau: "
	read mk
done
echo "-----Mat khau la: $pw"
