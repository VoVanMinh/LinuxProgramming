#!/bin/sh
echo "What time would you like to listen to music? Morning/Afternoon/Evening"
read input
case $input in "Morning" | "morning" | "m" | "M" )
	echo "-----It is morning!"
	;;

    "Afternoon" | "afternoon" | "a" | "A" )
	echo "-----It is afternoon!"
	;;
    "Evening" | "evening" | "e" | "E" )
	echo "-----It is evening!"
	;;
    * )
	echo "-----Oh, no!"
	exit 0;
	;;
esac
exit 0;

