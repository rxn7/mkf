all: 
	gcc mkf.c -o mkf

install:
	make
	sudo cp ./mkf /usr/bin/
