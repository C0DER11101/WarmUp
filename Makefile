obj=problem1.o

exe: $(obj)
	gcc $(obj) -o exe

$(obj): problem1.c
	gcc -c problem1.c

.PHONY: clean

clean:
	-rm $(obj) exe
