#type::1


#function declaration 

function fun1(){

  val_1=$1
  val_2=$2
c=$( expr  $val_1 + $val_2 )
 
echo "hey hello"
echo "$c"

}


fun1 5 5



#type::2

echo "output for second function"

#function declaration

fun1(){

  val_1=$1
  val_2=$2
c=$( expr  $val_1 + $val_2 )

echo "hey hello"
echo "$c"

}


fun1 5 5









