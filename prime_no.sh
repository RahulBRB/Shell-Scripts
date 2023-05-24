#!/bin/bash



read -p "Enter a number: " num

isPrime=true



if [ $num -eq 0 ] || [ $num -eq 1 ]; then

	isPrime=false

else

	for (( i=2; i<=num/2; i++))

	do

		if [ $((num%i)) -eq 0 ]; then

			isPrime=false

			break

		fi

	done

fi



if [ "$isPrime" = true ]; then

	echo "$num is PRIME"

else

	echo "$num is NOT prime"

fi
