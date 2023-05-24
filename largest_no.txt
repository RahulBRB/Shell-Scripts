#!/bin/bash



#find largest among three numbers



echo Enter 3 numbers

read -p "Enter first number:"  a

read -p "Enter second number:" b

read -p "Enter third number:" c



echo Largest numbers is:

if [ $a -gt $b ] && [ $a -gt $c ]

then echo $a

elif [ $b -gt $a ] && [ $b -gt $c ]

then echo $b

else

	echo $c

fi

