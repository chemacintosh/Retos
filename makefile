build: main

main: main.o reto3.o
  g++ -g -o main main.o reto3.o

main.o: main.cpp reto3.h
  g++ -c -g main.cpp

reto3.o: reto3.cpp reto3.h
  g++ -c -g reto3.cpp

clean:
  -rm main.o reto3.o main reto3.zip
 
zip:
  zip reto3.zip main.cpp reto3.cpp reto3.h
  
