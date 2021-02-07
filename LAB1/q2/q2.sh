#A shell script to take date as input and give day as output
echo "Enter the date in the format YYYY-MM-DD"
read d
echo "Day is:"
date -d "$d" +%A

#A shell script to input two numbers and perform arithmentic operation, comparison operations.
echo ""
echo "Enter first number"
read x
echo "Enter second number"
read y
(( sum =x+y ))
echo ""
echo "Results of Arithmetic operations"
echo "The result of addition=$sum"
(( diff =x-y ))
echo "The result of subtraction=$diff"
(( product =x*y ))
echo "The result of product=$product"
(( div =x/y ))
echo "The result of division=$div"
(( pow1 =x**y ))
echo "The result of x raised to the power of y=$pow1"
(( pow2 =y**x ))
echo "The result of y raised to the power of x=$pow2"
echo ""
echo "Results of comparison operations"
if [ $x == $y ]
then
   echo "x is equal to y"
elif [ $x != $y ]
then
   echo "x is not equal to y"
	if [ $x > $y ]
	then
   		echo "x is greater than y"
	else
   		echo "x is less than y"
	fi
fi