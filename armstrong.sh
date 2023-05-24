#!/bin/bash



read -p "Enter a number: " num

temp=$num

sum=0



while [ $temp -gt 0 ]

do 

	digit=$((temp%10))

	sum=$((sum+digit*digit*digit))

	temp=$((temp/10))

done



if [ $sum -eq $num ]; then

	echo "Number $num is ARMSTRONG!"

else

	echo "$num is NOT armstrong!"

fi

