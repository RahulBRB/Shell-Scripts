#!/bin/bash



read -p "Enter the number of elements: " n

echo "Enter elements inside the array: "

for (( i=0; i<n; i++ ))

do

	read arr[$i]

done



for (( i=0; i<n-1; i++ ))

do

	for (( j=0; j<n-i-1; j++ ))

	do

		if [ ${arr[$j]} -gt ${arr[$((j+1))]} ]; then

			temp=${arr[$j]}

			arr[$j]=${arr[$((j+1))]}

			arr[$((j+1))]=$temp

		fi

	done

done



echo "Sorted Array: "

for (( i=0; i<n; i++ ))

do

	echo ${arr[$i]}

done

