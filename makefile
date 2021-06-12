all:compile link

compile:
	g++ -c src/*.cpp
link:
	g++ main.o -o bin/GamblingIsFun.exe 