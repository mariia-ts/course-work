all: clear
	@clang++ main.cpp menus/menus.cpp employee/employee.cpp employee/human.cpp functionality/employee_fun.cpp functionality/animal_fun.cpp functionality/distributor_fun.cpp animals/animal.cpp distributors/distributor.cpp zoos/zoo.cpp functionality/zoo_fun.cpp -o main -Wall -pedantic

clear:
	@rm -f main