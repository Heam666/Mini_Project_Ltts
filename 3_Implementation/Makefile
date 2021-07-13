PROJ_NAME=CRYPTOGRAPHY
TEST_PROJ_NAME=Test_$(PROJ_NAME)

SRC=src/cc_decrypt.c\
src/cc_encrypt.c\
src/prime.c\

INC_H = inc
INC_T = unity

TEST_SRC=test/test.c\
unity/unity.c

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))

test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

# coverage:
# 	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
# 	$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
# 	gcov $(SRC)

cppcheck:
	cppcheck --enable=all: $(SRC) main.c



#coverage:${PROJECT_NAME}
#	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	gcov -a $(SRC)

	
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)


#doc:
#	make -C doc
#$(BUILD_DIR):
#	mkdir $(BUILD_DIR)


valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	rm -rf *.exe *.o
