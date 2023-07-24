# Push_swap - 42_project

![Push_swap](https://img.shields.io/badge/Push_swap-42_Project-blue)

## Description

Push_swap is a 42 project that aims to implement two programs: `push_swap` and `checker`. The `push_swap` program takes a list of integers as input and sorts them using a limited set of operations on two stacks. The `checker` program verifies if the list of integers is sorted correctly by the `push_swap` program.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Operations](#operations)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Prerequisites

Before running Push_swap, make sure you have the following prerequisites installed:

- macOS or Linux (the project has been tested on macOS and Ubuntu)
- Git

## Installation

1. Clone the repository:

```bash
git clone https://github.com/rdoukali42/Push_Swap
```

2. Enter the Push_Swap directory:

```bash
cd Push_Swap
```

3. Compile the project:

```bash
make
```

## Usage

### push_swap

To sort a list of integers, use the following command:

```bash
./push_swap 4 2 1 3
```

Replace `4 2 1 3` with the list of integers you want to sort.

### checker

To verify if a list of integers is sorted correctly, use the following command:

```bash
./checker 4 2 1 3
```

Replace `4 2 1 3` with the list of integers you want to check.

## Operations

The `push_swap` program uses the following operations to sort the list:

- sa: Swap the first two elements of stack A.
- sb: Swap the first two elements of stack B.
- ss: sa and sb at the same time.
- pa: Push the first element of stack B to stack A.
- pb: Push the first element of stack A to stack B.
- ra: Rotate stack A (move the first element to the end).
- rb: Rotate stack B (move the first element to the end).
- rr: ra and rb at the same time.
- rra: Reverse rotate stack A (move the last element to the beginning).
- rrb: Reverse rotate stack B (move the last element to the beginning).
- rrr: rra and rrb at the same time.

## Example

```bash
$ ./push_swap 4 2 1 3
sa
ra
```

## Contributing

Contributions are welcome! If you find any issues or have suggestions, feel free to open an issue or create a pull request.

## License

[MIT](https://github.com/your-username/Push_swap/blob/master/LICENSE).