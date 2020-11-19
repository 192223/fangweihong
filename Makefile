#这是Makefile
testCal:LianBiao.c testLianBiao.c
	gcc LianBiao.c testLianBiao.c -o testLianBiao
clean:
	rm testLianBiao
