#!/bin/bash



read -p "Enter your marks: " marks



if [ $marks -ge 85 ]; then

	echo "Your grade: O"

elif [ $marks -ge 75 ] && [ $marks -lt 85 ]; then

	echo "Your grade: A+"

elif [ $marks -ge 65 ] && [ $marks -lt 75 ]; then

	echo "Your grade: A"

elif [ $marks -ge 55 ] && [ $marks -lt 65 ]; then

	echo "Your grade: B+"

elif [ $marks -ge 50 ] && [ $marks -lt 55 ]; then

	echo "Your grade: B"

elif [ $marks -ge 40 ] && [ $marks -lt 50 ]; then

	echo "Your grade: C"

elif [ $marks -ge 35 ] && [ $marks -lt 40 ];then

	echo "Your grade: D"

else

	echo "Your grade: F."

fi
