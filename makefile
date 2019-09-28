CC=g++
LIB_PATH=lib
SRC_PATH=src
INCLUDE_PATH=path
DIR=src

.PHONY: build

build: $(LIB_PATH)/cos.o $(LIB_PATH)/div.o $(LIB_PATH)/exp.o \
		$(LIB_PATH)/function.o $(LIB_PATH)/ln.o $(LIB_PATH)/mul.o \
		$(LIB_PATH)/one_operand.o $(LIB_PATH)/pow.o $(LIB_PATH)/sec.o \
		$(LIB_PATH)/sin.o $(LIB_PATH)/sub.o $(LIB_PATH)/sum.o $(LIB_PATH)/tan.o\
		$(LIB_PATH)/two_operands.o $(LIB_PATH)/variable.o
	echo Compiled.


$(LIB_PATH)/cos.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/div.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/exp.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/function.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/ln.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/mul.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/one_operand.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/pow.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/sec.o: $(DIR)/sec.cc
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/sin.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/sub.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/sum.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/tan.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/two_operands.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@

$(LIB_PATH)/variable.o: $(DIR)
	$(CC) src/$(basename $(notdir $@)).cc -c -o $@