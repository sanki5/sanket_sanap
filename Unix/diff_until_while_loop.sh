#basic operation of UNTIL LOOP

n=1

until [ $n -gt 10 ]

#here until loop condtion is not true ,so till that point loop will execute .so in below example loop execute till condtion is false

do

echo "$n"
((n++))


done



#Difference between UNTIL AND WHILE LOOP



b=1

while [ $b -gt 10 ]

#here while ececute for true condition only .so in below example while not return anything because condtion is not true 

do

echo "$b"
((b++))


done



 
