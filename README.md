# _printf
## Custom printf Implementation

This is a simple implementation of the printf function in C

## Functions

1. _putchar
Writes a character to the standard output.
```c
int _putchar(char c);
```
2. _putint
Prints an integer to the standard output.
```c
void _putint(int n);
```
3. _printf
Prints formatted output to the standard output, supporting %c, %s, %d, and %i format specifiers.
```c
int _printf(const char *format, ...);
```

## Usage
To use the custom printf function, include the necessary headers and call _printf with the desired format and arguments.
Example:

```c
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int main(void) {
    _printf("Hello, %s! Your number is %d.\n", "World", 42);
    return (0);
}
```
## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o your_program
```

## License
[Holberton] https://raw.githubusercontent.com/davidpenuelac/holbertonschool-printf/main/LICENSE