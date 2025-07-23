
# Project Title

Holberton custom `_printf` function in C

# Description

_printf is a custom implementation of the standard C printf function.
It handles formatted output to the standard output using only low-level system calls like write().
This project demonstrates a deep understanding of variadic functions, string parsing, and number-to-string conversions in C.

# Compilation

The code have been compiled with the command 
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

# Requirements

This project was under certain requirements that are describe bellow

- All the files will be compiled on Ubuntu 20.04 LTS 
- All the files should end with a new line
- All the code should use the betty codding style
- Global variables are not allowed
- 5 functions maximum per files are allowed

# Features

Currently, the `_printf` function supports the following format specifiers:

| Specifier     | Description               |
|---------------|---------------------------|
| `%c`          | Prints a single character  |
| `%s`          | Prints a string            |
| `%%`          | Prints the `%` character   |
| `%d` & `%i`   | Prints a decimal number    |

The behavior is intentionally limited, as this is an educational project.  
Support for additional specifiers such as `%u`, `%x`, etc., may be implemented later.

# Exemple d'utilisation

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "world");               print Hello world!\n
    _printf("Character: %c\n", 'A');               print Character: A\n
    _printf("Percent: %%\n");                      print Percent: %\n
    return (0);
}
```

# Tests performed

The following test cases were manually verified:
``` 
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
```
The output was compared with the standard `printf` to ensure correctness.

Edge cases and additional specifiers (like `%u`, `%x`, etc.) will be tested in future updates.
   

# Author

Georgia Boulnois and Kevin Herisson Holbies at Holberton, Actual Digital School
