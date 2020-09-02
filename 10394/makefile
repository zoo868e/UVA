CC:=gcc
exe:=a.o
obj=main.o
CFLAG:= -lm -Wall -ansi -g

all:$(obj)
	$(CC) -o $(exe) $(obj) $(CFLAG)

.PHONY: clean

clean:
	rm -rf $(obj) $(exe)
