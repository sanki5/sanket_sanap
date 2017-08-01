#case::1

#Normal select loop


select name in a b c d 

do

echo "$name selected"

done



#case 2::

#nested loop (select and case loop )


select name in a b c d

do
  case $name in 
	a)
		echo "a selected";;

	b)
                echo "b selected";;

 	c)
                echo "c selected";;

	d)
                echo "d selected";;
  esac
done



