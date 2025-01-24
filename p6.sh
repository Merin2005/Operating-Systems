echo "Enter the Limit:"
read n
echo "Fibonacci Series"
x=0
y=1
for((i=0;i<=n;i++))
do 
echo $x
f=$(($x+$y))
x=$y
y=$f
done
