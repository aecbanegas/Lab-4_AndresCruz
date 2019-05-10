main.exe: Lab4_AndresCruz.o
	g++ Lab4_AndresCruz.o -o main.exe

Lab4_AndresCruz.o:	Lab4_AndresCruz.cpp
	g++ -c Lab4_AndresCruz.cpp
