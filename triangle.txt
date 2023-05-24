#!/bin/bash



echo "Enter the sides of a triangle"

read -p "Enter the 1st side: " side1

read -p "Enter the 2nd side: " side2

read -p "Enter the 3rd side: " side3



if [ $side1 -gt 0 ] && [ $side2 -gt 0 ] && [ $side3 -gt 0 ]; then

	if [ $((side1+side2)) -gt $side3 ] && [ $((side2+side3)) -gt $side1 ] && [ $((side3+side1)) -gt $side2 ]; then

		echo "It's a VALID TRIANGLE!"

	else

		echo "It's NOT a triangle"

	fi

else

	echo "Invalid lengths of sides enterned. Try again!"

fi

