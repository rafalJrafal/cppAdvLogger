OBJ_DIR=./obj
LIB_DIR=./output_lib

INC=-I./include
SRC=src

LOGGER_OBJ_NAME=logger.o
LOGGER_LIB_NAME=liblogger.a

LOGGER_OBJECT=$(OBJ_DIR)/$(LOGGER_OBJ_NAME)
LOGGER_LIBRARY=$(LIB_DIR)/$(LOGGER_LIB_NAME)

all: logger_lib

logger_lib: logger_object
	@echo Creating lib file in $(LOGGER_OBJECT)
	ar rcu $(LOGGER_LIBRARY) $(OBJ_DIR)/*

logger_object:
	@echo Creating obj file in $(LOGGER_OBJECT)
	g++ $(INC) -c $(SRC)/*.cpp 
	mv *.o $(OBJ_DIR)

clean:
	rm -rf $(LIB_DIR)/*
	rm -if $(OBJ_DIR)/*
