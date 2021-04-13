PROJ_NAME = student_report

TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build



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


SRC = src\marks_input.c src\student_input.c src\marks_calculate.c 

test_src = test_files\marks_calculate_test.c 

main_src = main.c

UNITY = unity/unity.c 

INC =  -Iinc\
-Iunity

.PHONY : all test coverage run clean doc


all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
   

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


test: $(SRC) $(test_src) $(UNITY)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)


doc:
	make -C doc
   
#pro: $(main_src) $(SRC) 
#	gcc $(main_src) $(SRC) -I$(INC)  -o pro.exe


#pro_run: pro.exe
#	./pro.exe


#test: $(SRC) $(test_src)
#	gcc $(SRC) $(test_src) -I$(INC) -I -c $(UNITY) -o test.exe

#run1: test.exe
#	./test.exe


#coverage:${PROJECT_NAME}
#	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	gcov -a $(SRC)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)


clean:
	del /q *.exe

clean1:
	del /q *.gcno