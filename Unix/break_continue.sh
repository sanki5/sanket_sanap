#case 1:: basic Break statement:

echo "outpot for case 1::"

for (( i=0;i<10;i=i+1 ))

do

if [ $i -eq 3  ]

  then
      break
#working of break statement ::whenever condition will get true then break simply break the flow of execution.so next execution will not take place.
fi
echo $i

done




#case 2:: basic Continue statement:

echo "output for case 2::"

for (( i=0;i<10;i=i+1 ))

do

if [ $i -eq 3 -o $i -eq 6 ]

  then
      continue

#working of continue statement ::whenever condition will get true then continue will simply skip  the value of execution for  that condition 
         .and next flow for exectuion will continued.
fi


echo $i

done

