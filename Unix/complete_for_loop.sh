#There are many ways to write syntax for for loop .few of them are listed below::


#type=1 ::


echo "output for type=1"

# below syntax is useful when you have variable n and having small range. 

for n in 1 2 3 4 5

do 

 echo $n

done

#type=2::


echo "output for type=2"

# below syntax is useful when you have variable n and having large range range.

for n in {1..10}

do

 echo $n

done

#type=3::

echo "output for type=3"


# below syntax is useful when you have variable n and having large range range and wanted elements in multiple of something.

for n in {1..10..2}

do

 echo $n

done




#type=4::

echo "output for type=4"




for ((i=0;i<10;i=i+2))

do

 echo $i

done


#type=5

echo "oyuput for type=5"

for n in ls pwd date

#if you want to use multiple command in  for loop then use this type of loop

do 

echo "==================$n=============="
$n

done


















