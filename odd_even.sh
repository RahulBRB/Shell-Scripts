#!/bin/bash

#Program to check number is ODD or EVEN



echo Enter a number:

read num

if [ $((num%2)) -eq 0 ]

then echo Number is EVEN

else

echo Number is ODD

fi

