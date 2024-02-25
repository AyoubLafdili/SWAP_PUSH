#!/bin/bash

#echo "NOTE : ALWAYS ABSOLUTE PATH"
# echo "Enter your src:"
# read SRC
# echo "Enter your dest:"
# read DEST
echo "CONTENT OF LIBFT DIR:"
echo ""
ls /Users/alafdili/libft
echo ""
echo "Your file name:"
read FILE_NAME
echo ""
if test -f /Users/alafdili/libft/$FILE_NAME ; then
	echo "moving $FILE_NAME ..."
	mv /Users/alafdili/libft/$FILE_NAME /Users/alafdili/push_swap
else
	echo ""
	echo "file $FILE_NAME not exist"
fi
