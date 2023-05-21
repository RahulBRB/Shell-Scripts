#!/bin/bash
#Simple lottery script for fun

echo Enter a number between 0 to 10
read userInput
num=$(($RANDOM%11))
if [ $userInput -eq $num ];
echo You won
else
echo You lost, the number was $num
fi
