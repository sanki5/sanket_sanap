#This unix shell script is just to know all about reading input from user in multiple ways.

#case 1 :: Normal way to read input from user :

echo "Enter the input from user ??"
read val_1
echo "Your entered input values is $val_1"

#case 2 :: Read multiple inputs from user :

echo "Enter the three input which you want ?"
read val_1 val_2 val_3
echo "Entered values are $val_1"
echo "Entered values are $val_2"
echo "Entered values are $val_3"


#case 3 ::Accept input on same line :

read -p "Entere input ?" val_1
#here in above case the -p will take input on same line.
echo "you have enter $val_1"

#case 4 ::Enter hidden input:
# here you will enter the input but it will not visible to user but when your fetch input value it will display entered input 

read -sp "enter input(password type) "  val_1
echo "your entered password is $val_1"

#case 5::"Array of input ":

echo "Enter  the value array of two element ?"
read -a val_array
echo "entered array elements :${val_array[0]},${val_array[1]}"

#case 6::Take input when variable is not declared.

echo "enter the input value(variable is not declared )"
read
echo "your input is $REPLY"
# when input variable is not declared then reply is built varibale which stored the value





