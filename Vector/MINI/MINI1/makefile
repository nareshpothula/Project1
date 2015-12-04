outfile: main.o  mac.o inc.o comments.o addfiles.o
	cc  main.o  inc.o mac.o  addfiles.o  comments.o  -o outfile
main.o :main.c
	cc -c main.c -o main.o
inc.o :inc.c
	cc -c inc.c -o inc.o
addfiles.o :addfiles.c
	cc -c addfiles.c -o addfiles.o
comments.o :comments.c
	cc -c comments.c -o comments.o
mac.o: mac.c
	cc -c mac.c -o mac.o
