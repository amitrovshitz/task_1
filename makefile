CC = gcc
FLAGS = -Wall -g
AR = ar

all:mains maindloop maindrec loopd loops recursived recursives  

loops:libclassloops.a
libclassloops.a:advancedClassificationLoop.o basicClassification.o
	$(AR) rcs libclassloops.a advancedClassificationLoop.o basicClassification.o 

recursives:libclassrec.a 
libclassrec.a:advancedClassificationRecursion.o basicClassification.o 
	$(AR) rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o 

recursived:libclassrec.so 
libclassrec.so:advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o 

loopd:libclassloops.so 
libclassloops.so:advancedClassificationLoop.o basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 

mains: main.o libclassrec.a 
	$(CC) main.o ./libclassrec.a -o mains
maindloop:main.o libclassloops.so
	$(CC) main.o ./libclassloops.so -o maindloop
maindrec:main.o libclassrec.so
	$(CC) main.o ./libclassrec.so -o maindrec

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c 
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c 
	$(CC) $(FLAGS) -fPIC -c basicClassification.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 
clean: 
	rm -f *.o  *.a *.so mains maindloop maindrec
.PHONY:all clean 