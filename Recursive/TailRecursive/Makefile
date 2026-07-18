
FLAGS = -O1 -Co -CO

all: main.exe

main.exe: main.pas
	fpc main.pas $(FLAGS)

run:
	./main.exe

clean:
	rm *.o main.exe
