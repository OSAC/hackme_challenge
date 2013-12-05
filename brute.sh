#for i in `seq 0  10`
#for i in eval{1 2..10}
for i in `seq 1000 10000`
do
	./hackme $i
	if [ $? -eq 0 ]
	then
		echo $i;
		break;
	fi
done
