#!/bin/bash



#Check factorial of a number



read -p "Enter a number: " num

factorial=1

counter=1



while [ $counter -le $num ]

do

	factorial=$((factorial * counter))

	counter=$((counter + 1))

done

echo Factorial of $num is $factorial
