all: 
	gcc main.c -o mkf

install:
	make
	sudo cp ./mkf /usr/bin/
