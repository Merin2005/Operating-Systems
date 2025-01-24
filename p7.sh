echo "Enter the First Number:"
read a
echo "Enter the Second Number:"
read b
echo "Menu"
echo "1.Addition 2.Subtraction 3.Multiplication 4.Division"
echo "Enter the choice"
read op
case $op in
1)rs=$(($a+$b))
echo "Sum = "$rs;;
2)rs=$(($a-$b))
echo "Difference = "$rs;;
3)rs=$(($a*$b))
echo "Product = "$rs;;
4)rs=$(($a/$b))
echo "Quotient = "$rs;;
*)echo "Invalid Choice";;
esac
