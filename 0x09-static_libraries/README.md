0x09. C - Static libraries
TASKS
0. A library is not a luxury but one of the necessities of life](libmy.a)
Create the static library libmy.a containing all the functions listed below:
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

1. Without libraries what have we? We have no past and no future](create_static_lib.sh)
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

How to create function prototypes in main.h
#ifndef MAIN_H
#define MAIN_H
/* function prototypes 
Here
*/
#endif
Procedure for solving this task problem
1.	Create a README.md file 
2.	Create main.h
3.	Create all the .c file usin your vi command 
4.	Convert all .c files to an object file 
a.	gcc -c *.c 
5.	How to create a library 
a.	ar rcs libmy.a
6.	use this code to copy all the object files to the library 
a.	ar rcs libmy.a *.o
7.	then RUN this code to list all the files in the library
a.	ar -t libmy.a
8.	then RUN this code 
nm libmy.a

git add .
git commit –m “Static libraries”
git push

TASK 2
Create the task file create_static_lib.sh
Copy the liball.a codes inside the file then save 

#!/bin/bash
gcc –wall -pedantic –werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a

Convert the file to executable using chmod u+x create_static_lib.sh
Use ls command to check your files 
Text your executable file using      ./create_static_lib.sh
The above command will cause a new file called   liball.a to be created in the library directory.

