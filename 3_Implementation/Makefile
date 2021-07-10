PROJECT_NAME=CRYPTOGRAPHY

SRC=cc_decrypt.c cc_encrypt.c unity.c
TEST_SRC=test.c

all:$(SRC) $(TEST_SRC)
	gcc $^ -o $(PROJECT_NAME).exe

run: all
	 ./$(PROJECT_NAME).exe

clean:
	rm -rf *.exe *.o