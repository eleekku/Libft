# Libft
Libft is a library of functions and is the very firsts project in the 42 School. 

Summary from the subject:
This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.

This project is about understanding the way basic functions work and
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

.c Files
Where all of your functions will be written in.

.h File
Header file is useful for 2 things:

First, instead of doing for example #include <unistd.h> in all of the .c files, it is just writen once in your header and all of your .c files will read it from your header file.
Secondly, let's say one of the .c files uses another function from another .c file, well instead of writting that function above, just #include "libft.h" is writen and it will find it in your header file.

Makefile
This Makefile compiles a library named "libft.a" using the GCC compiler. It includes rules for both mandatory ('FILES') and bonus ('FILES_B') functions, organizing source and object files accordingly.
The targets include building the library, handling bonus functions, cleaning object files, and performing a full clean. The '-Wall -Wextra -Werror' flags enable various warnings and treat them as errors during compilation. 

Functions from <ctype.h>
ft_isalpha - checks for an alphabetic character.
ft_isdigit - checks for a digit (0 through 9).
ft_isalnum - checks for an alphanumeric character.
ft_isascii - checks whether c fits into the ASCII character set.
ft_isprint - checks for any printable character.
ft_toupper - convert char to uppercase.
ft_tolower - convert char to lowercase.

Functions from <string.h>
ft_memset - fill memory with a constant byte.
ft_strlen - calculate the length of a string.
ft_bzero - zero a byte string.
ft_memcpy - copy memory area.
ft_memmove - copy memory area.
ft_strlcpy - copy string to an specific size.
ft_strlcat - concatenate string to an specific size.
ft_strchr - locate character in string.
ft_strrchr - locate character in string.
ft_strncmp - compare two strings.
ft_memchr - scan memory for a character.
ft_memcmp - compare memory areas.
ft_strnstr - locate a substring in a string.
ft_strdup - creates a dupplicate for the string passed as parameter.

Functions from <stdlib.h>
ft_atoi - convert a string to an integer. Please note that this atoi does not handle the overflow over LONG_MAX the same way as the library atoi. 
ft_calloc - allocates memory and sets its bytes' values to 0.

Non-standard functions
ft_substr - returns a substring from a string.
ft_strjoin - concatenates two strings.
ft_strtrim - trims the beginning and end of string with specific set of chars.
ft_split - splits a string using a char as parameter.
ft_itoa - converts a number into a string.
ft_strmapi - applies a function to each character of a string.
ft_striteri - applies a function to each character of a string.
ft_putchar_fd - output a char to a file descriptor.
ft_putstr_fd - output a string to a file descriptor.
ft_putendl_fd - output a string to a file descriptor, followed by a new line.
ft_putnbr_fd - output a number to a file descriptor.

Linked list functions
ft_lstnew - creates a new list element.
ft_lstadd_front - adds an element at the beginning of a list.
ft_lstsize - counts the number of elements in a list.
ft_lstlast - returns the last element of the list.
ft_lstadd_back - adds an element at the end of a list.
ft_lstclear - deletes and free list.
ft_lstiter - applies a function to each element of a list.
ft_lstmap - applies a function to each element of a list.

Results: 
125% from the points. 

I really learned how the basic functions work and how to rewrite them. Also, learned to be very accurate in my work when finding solutions for extreme edge cases. 
