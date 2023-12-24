# ft_printf

`ft_printf` is a custom implementation of the `printf` function in the C programming language. The project is part of the 42 School curriculum and aims to recreate the standard library function with additional features.

## Table of Contents
- [Introduction](#introduction)
- [Supported Format Specifiers](#supported-format-specifiers)
- [How to Compile](#how-to-compile)
- [Tests](#tests)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The `ft_printf` function provides a formatted output similar to the standard `printf` function. It supports a subset of format specifiers and offers some additional features.

## Supported Format Specifiers

`ft_printf` supports the following format specifiers:

- `%c`: Character
- `%s`: String
- `%d` or `%i`: Signed integer
- `%u`: Unsigned integer
- `%x` or `%X`: Hexadecimal integer
- `%p`: Pointer address
- `%%`: Percent sign

Additionally, the implementation supports various flags, width, precision, and length modifiers.

## How to Compile

To compile the `ft_printf` project, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/ft_printf.git
    ```

2. Navigate to the project directory:

    ```bash
    cd ft_printf
    ```

3. Compile the code:

    ```bash
    make
    ```

## Tests

To run the tests for `ft_printf`, use the provided test suite. Make sure the project is compiled before running the tests.

```bash
make test
