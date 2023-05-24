#!/bin/bash



read -p "Enter a number: " num

reversed=0



while [ $num -gt 0 ]

do

	remainder=$((num%10))

	reversed=$((reversed*10 + remainder))

	num=$((num/10))

done



echo "Reversed number is: $reversed"
