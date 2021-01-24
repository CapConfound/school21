build:	
		gcc -D BUFFER_SIZE=32 -o app *.c 

berror:
		gcc -Wall -Wextra -Werror -D BUFFER_SIZE=2 -o app *.c 

run:
		./app text.txt

all:	build run

extras: berror run

errun:
		./app "invalid filename"

f:	
		rm -rf app
		rm -rf a.out