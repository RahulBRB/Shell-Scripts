#!/bin/bash



read -p "Enter a number: " num

for (( i=1; i<=num; i++ ))

do 

	for (( k=num-i; k>=1; k-- ))

	do

		echo -n " "

	done

for (( j=0; j<i; j++ ))

do

	echo -n "*"

done

echo

done

