obj=problem4.o
#obj=problem3.o
#obj=problem2.o
#obj=problem1.o

exe: $(obj)
	gcc $(obj) -o exe

$(obj): problem4.c
	gcc -c problem4.c

#$(obj): problem3.c\
	gcc -c problem3.c

#$(obj): problem2.c\
	gcc -c problem2.c

#$(obj): problem1.c\
	gcc -c problem1.c

.PHONY: clean

clean:
	-rm $(obj) exe
