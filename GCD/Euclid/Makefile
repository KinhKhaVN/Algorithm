FLAGS = -gl -O1 -Co -CO

all: main.exe

main.exe: main.pas
	fpc $(FLAGS) main.pas 

run:
	./main.exe

clean:
	rm *.o main.exe
