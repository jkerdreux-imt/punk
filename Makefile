
all:punk.so

punk.so:main.c
	gcc -fPIC -g -c -Wall main.c 
	gcc -shared -Wl,-soname,punk.so  -o punk.so main.o

test:
	export LD_PRELOAD=./punk.so;date

clean:
	rm -f *~
	rm -f ./punk.so
