all: 
	gcc mkf.c -o mkf -std=gnu99

install:
	make
	sudo cp ./mkf /usr/bin/
