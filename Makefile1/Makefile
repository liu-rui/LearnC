#第一个makefile例子
#目标：通过makefile编译main.c文件
# make ： 编译生成可执行文件test
# make clear  : 删除test文件

CC:=gcc
RM:=rm -fR

test:main.o
	$(CC) main.o -o test
main.o:main.s
	$(CC) -c main.s -o main.o
main.s:main.i
	$(CC) -S main.i -o main.s
main.i:main.c
	$(CC) -E main.c -o main.i
clear:
	$(RM) main.i main.s main.o test