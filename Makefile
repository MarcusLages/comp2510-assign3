CC = gcc
CFLAGS = -Wall
CFILES = a3.c patient-list.c test-patients.c
OBJFILES =  a3.o patient-list.o test-patients.o
TARGET = a3

all : $(TARGET)

$(TARGET) : $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) -o $(TARGET)

patient-list.o : patient-list.c
	$(CC) patient-list.c -c

test-patients.o : test-patients.c
	$(CC) test-patients.c -c

a3.o : a3.c
	$(CC) a3.c -c

clean:
	rm -f $(TARGET) $(OBJFILES)