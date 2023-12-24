# ft_printf

`ft_printf` is a custom implementation of the `printf` function in the C programming language. The project is part of the 42 School curriculum and aims to recreate the standard library function with additional features.

## Table of Contents
- [Introduction](#introduction)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [How to Compile](#how-to-compile)
- [Tests](#tests)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The `ft_printf` function provides a formatted output similar to the standard `printf` function. It supports a subset of format specifiers and offers some additional features.

## Usage

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
