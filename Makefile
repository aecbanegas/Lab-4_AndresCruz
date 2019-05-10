main:	main.o
	g++  main.o -o main

main.o:	Lab4_AndresCruz.cpp
	g++ -c Lab4_AndresCruz.cpp
