build: main

main: main.o reto2.o
  g++ -g -o main main.o reto2.o

main.o: main.cpp reto2.h
  g++ -c -g main.cpp

reto2.o: reto2.cpp reto2.h
  g++ -c -g reto2.cpp

clean:
  -rm main.o reto2.o main.exe main
