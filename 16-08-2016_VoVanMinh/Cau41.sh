#!/bin/sh

pw_regex="[a-z]+[A-Z]+[0-9]+[*#@]+";
pw_input="abc";

while ! echo "$pw_input" | grep -Eq "$pw_regex";
do
		echo "Nhap mat khau gom chu hoa, chu thuong, so va ki tu dac biet: "
		read pw_input
done

echo "-----Mat khau cua ban la: $pw_input"
