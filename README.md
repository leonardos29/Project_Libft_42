# Libft - Custom C Standard Library Implementation

[![C](https://img.shields.io/badge/language-C-00B6D1.svg)](https://www.cprogramming.com/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](https://opensource.org/licenses/MIT)

Welcome to the **Libft** project! This is my custom implementation of the C Standard Library. The goal of this project is to understand how core C functions work by replicating them from scratch.

## Overview

The **Libft** project implements essential C Standard Library functions. It focuses on functions for memory management, string manipulation, and character checking, among others. This project helps in understanding the inner workings of the C language and standard library, providing a solid foundation for more complex programming tasks.

## Implemented Functions

### Memory Management 🧠

These functions help you manage memory in your programs:

- **`ft_memset`**: Fills a block of memory with a specific value.
- **`ft_bzero`**: Sets a block of memory to zero.
- **`ft_memcpy`**: Copies a block of memory from one location to another.
- **`ft_memmove`**: Moves a block of memory, even if the source and destination overlap.
- **`ft_memchr`**: Searches for a specific byte in a memory block.
- **`ft_memcmp`**: Compares two blocks of memory.
- **`ft_calloc`**: Allocates memory and initializes it to zero.

### String Manipulation 📝

Functions for handling and manipulating strings:

- **`ft_strlen`**: Returns the length of a string.
- **`ft_strdup`**: Duplicates a string.
- **`ft_strcpy`**: Copies one string to another.
- **`ft_strncpy`**: Copies up to a specified number of characters from one string to another.
- **`ft_strcat`**: Concatenates two strings.
- **`ft_strncat`**: Concatenates a specific number of characters from one string to another.
- **`ft_strcmp`**: Compares two strings.
- **`ft_strncmp`**: Compares a specified number of characters between two strings.
- **`ft_strchr`**: Locates the first occurrence of a character in a string.
- **`ft_strrchr`**: Locates the last occurrence of a character in a string.
- **`ft_strstr`**: Locates the first occurrence of a substring within a string.
- **`ft_strsplit`**: Splits a string into an array of substrings based on a delimiter.

### Character Checks 🔤

These functions are used to check specific types of characters:

- **`ft_isalpha`**: Checks if a character is an alphabetic letter (a-z, A-Z).
- **`ft_isdigit`**: Checks if a character is a digit (0-9).
- **`ft_isalnum`**: Checks if a character is alphanumeric (a letter or a digit).
- **`ft_isascii`**: Checks if a character is an ASCII character.
- **`ft_isprint`**: Checks if a character is printable.
- **`ft_tolower`**: Converts a character to lowercase.
- **`ft_toupper`**: Converts a character to uppercase.

### Other Utilities 🧰

- **`ft_atoi`**: Converts a string to an integer.
- **`ft_itoa`**: Converts an integer to a string.
- **`ft_lstnew`**: Creates a new node for a linked list.
- **`ft_lstadd`**: Adds a new node to the beginning of a linked list.
- **`ft_lstdel`**: Deletes a node from a linked list.

## Installation

To install and compile the project, follow these steps:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
make


