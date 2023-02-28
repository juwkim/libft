<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/juwkim/libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/juwkim/libft?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/juwkim/libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/juwkim/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/juwkim/libft?color=green" />
</p>

<h3 align="center">
	<a href="#-about-the-project">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
</h3>

---

## 💡 About the project

> _This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon._

	C Programming can be very tedious when one doesn't have access to the highly useful standard functions.
	This project is about understanding the way these functions work, implementing and learning to use them.
	You will create your own library. It will be helpful since you will use it in your next C school assignments.
	
	Take the time to expand your libft throughout the year. However, when working on a new project, don't forget to
	ensure the functions used in your library are allowed in the project guidelines.

For more detailed information, look at the [**subject of this project**](https://github.com/juwkim/42cursus/blob/main/Subject%20PDFs/00_libft.pdf).

## List of functions:

### Functions from `<ft_ctype.h>` library

* [`ft_isupper`](ft_ctype/ft_isupper.c)			- Checks for an uppercase character.
* [`ft_islower`](ft_ctype/ft_islower.c)			- Checks for a lowercase character.
* [`ft_isalpha`](ft_ctype/ft_isalpha.c)			- Checks for an alphabetic character. It is equivalent to (isupper(c) || islower(c)).
* [`ft_isdigit`](ft_ctype/ft_isdigit.c)			- Checks for a digit (0 through 9).
* [`ft_isxdigit`](ft_ctype/ft_isxdigit.c)		- Checks for hexadecimal digits. That is, one of 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
* [`ft_isspace`](ft_ctype/ft_isspace.c)			- Checks for white-space characters.
* [`ft_isprint`](ft_ctype/ft_isprint.c)			- Checks for any printable character including space.
* [`ft_isgraph`](ft_ctype/ft_isgraph.c)			- Checks for any printable character except space. 
* [`ft_isblank`](ft_ctype/ft_isblank.c)			- Checks for a blank character. That is, a space or a tab.
* [`ft_iscntrl`](ft_ctype/ft_iscntrl.c)			- Checks for a control character.
* [`ft_ispunct`](ft_ctype/ft_ispunct.c)			- Checks for a character is a punctuation. All punctuations in c: ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~.
* [`ft_isalnum`](ft_ctype/ft_isalnum.c)			- Checks for an alphanumeric character. It is equivalent to (isalpha(c) || isdigit(c)).
* [`ft_isascii`](ft_ctype/ft_isascii.c)			- Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
* [`ft_toupper`](ft_ctype/ft_toupper.c)			- Lower case to upper case character conversion.
* [`ft_tolower`](ft_ctype/ft_tolower.c)			- Upper case to lower case character conversion.

### Functions from `<ft_math.h>` library

* [`ft_min`](ft_math/ft_min.c)				- Returns the smaller.
* [`ft_max`](ft_math/ft_max.c)				- Returns the larger.
* [`ft_median`](ft_math/ft_median.c)			- Return the middle of the three.
* [`ft_swap`](ft_math/ft_swap.c)			- Swap values of a and b.

### Functions from `<ft_stdio.h>` library

* [`ft_printf`](ft_stdio/ft_printf.c)			- Write formatted output to stdout.
* [`ft_dprintf`](ft_stdio/ft_dprintf.c)			- Write formatted output to file.
* [`ft_sprintf`](ft_stdio/ft_sprintf.c)			- Write formatted output to string.
* [`ft_get_next_line`](ft_stdio/ft_get_next_line.c)	- Read a next line from a file.

### Functions from `<ft_stdlib.h>` library

* [`ft_abs`](ft_stdlib/ft_abs.c)			- Returns the absolute value.
* [`ft_atoi`](ft_stdlib/ft_atoi.c)			- Converts the initial portion of the string to int.
* [`ft_itoa`](ft_stdlib/ft_itoa.c)			- Converts an integer to ASCII string.
* [`ft_calloc`](ft_stdlib/ft_calloc.c)			- Allocates memory set to zero.

### Functions from `<ft_string.h>` library

* [`ft_memset`](ft_string/ft_memset.c)			- Fills the first n bytes of the memory area with the constant byte c.
* [`ft_memcmp`](ft_string/ft_memcmp.c)			- Compares the first n bytes (each interpreted as unsigned char) of the memory areas.
* [`ft_memcpy`](ft_string/ft_memcpy.c)			- Copies n bytes from memory area src to memory area dest. The memory areas must not overlap.
* [`ft_strlen`](ft_string/ft_strlen.c)			- Calculates the length of the string.
* [`ft_strchr`](ft_string/ft_strchr.c)			- Find the first occurrence of the character c in the string.
* [`ft_strrchr`](ft_string/ft_strrchr.c)		- Find the last occurrence of the character c in the string.
* [`ft_strstr`](ft_string/ft_strstr.c)			- Finds the first occurrence of the substring needle in the string haystack.
* [`ft_strcmp`](ft_string/ft_strcmp.c) 			- Compares the two strings.
* [`ft_strncmp`](ft_string/ft_strncmp.c) 		- Compares the two strings at most n bytes.
* [`ft_strcat`](ft_string/ft_strcat.c) 			- Appends the src string to the dest string.
* [`ft_strncat`](ft_string/ft_strncat.c) 		- Appends the src string to the dest string at most n bytes.
* [`ft_strcpy`](ft_string/ft_strcpy.c)			- Copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. 
* [`ft_strdup`](ft_string/ft_strdup.c)			- Copy the string from begin to end - 1.
* [`ft_strrev`](ft_string/ft_strrev.c)			- Reverse the string from begin to end.
* [`ft_strtok`](ft_string/ft_strtok.c)			- Breaks a string into a sequence of zero or more nonempty tokens.
* [`ft_strtrim`](ft_string/ft_strtrim.c)		- Removes the space before and after of the string.
* [`ft_strjoin`](ft_string/ft_strjoin.c)		- Concatenate two strings into a new string.
* [`ft_strcjoin`](ft_string/ft_strcjoin.c)		- Concatenate two strings with c between them.
* [`ft_split`](ft_string/ft_split.c)			- Split string with delimiter into an array of strings.

### Functions from `<ft_strings.h>` library

* [`ft_bzero`](ft_strings/ft_bzero.c)			- Write zeroes to a byte string.

## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`c` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

```shell
$ make
```

**2. Cleaning all object files (.o) and executable files (.a)**

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```
