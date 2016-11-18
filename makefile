execute: execute.c
	gcc execute.c -o execute

run: execute
	./execute

clean:
	-rm execute
	-rm *~
