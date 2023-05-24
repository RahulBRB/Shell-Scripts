#!/bin/bash



read -p "Enter the number of elements in Array: " n

echo "Enter the elements inside array: "

for ((i=0;i<n;i++))

do

	read arr[$i]

done



read -p "Enter the target element: " target

found=false

for ((i=0;i<n;i++))

do

	if [ ${arr[$i]} -eq $target ]; then

		found=true;

		echo "$target found at index $i"

		break

	fi

done



if [ "$found" = false ]; then

	echo "$target not found inside the array."

fi

