BIN = ANSI
OBJS = ANSI.o

$(BIN) : $(OBJS)


.PHONY : clean
clean :
	rm $(BIN) $(OBJS)

