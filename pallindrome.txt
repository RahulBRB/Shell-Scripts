#!/bin/bash



read -p "Enter a number: " num

temp=$num

reversed=0



while [ $temp -gt 0 ]

do

	remainder=$((temp%10))

	reversed=$((reversed*10 + remainder))

	temp=$((temp/10))

done



if [ $reversed -eq $num ]; then

	echo "$num is a PALLINDROME number!"

else

	echo "$num is NOT a Pallindrome number!"

fi

