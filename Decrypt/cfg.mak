SRC=src
INC=inc
OBJ=obj
DIST=dist
EXE=decrypt.exe
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)%.c, $(OBJ)/%.o, $(SRCS))