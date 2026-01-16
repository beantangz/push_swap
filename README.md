# Push_Swap
<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/push_swape.png" alt="Push_swap 42 project badge"/>
</p>

## Description

**Push_Swap** is a project from the 42 school curriculum.
Its goal is to sort data on a stack using a limited set of operations, and to do so with the minimum number of instructions.

This project relies on Libft, the custom C library developed during the 42 common core, for utility functions such as string manipulation, memory handling, and advanced utilities (ft_printf, get_next_line).

## Allowed Operations

The following operations are allowed on the stacks (a and b):

| Operation | Description |
|-----------|-------------|
| sa        | swap the first 2 elements of stack a |
| sb        | swap the first 2 elements of stack b |
| ss        | sa and sb at the same time |
| pa        | push the top element of b onto a |
| pb        | push the top element of a onto b |
| ra        | rotate a upwards<br>(first element becomes last) |
| rb        | rotate b upwards |
| rr        | ra and rb at the same time |
| rra       | reverse rotate a<br>(last element becomes first) |
| rrb       | reverse rotate b |
| rrr       | rra and rrb at the same time |

## Usage

### Compilation

1. Clone the repository (make sure you clone the whole project, including **libft**)
2. cd push_swap
3. make

This will generate the executable push_swap.

### Running push_swap

Run push_swap with a list of integers to sort:

./push_swap 3 2 5 1 4

### Output:

A series of operations to sort the stack in ascending order.

### Using the checker

You can verify a sequence of operations with checker. Example:

ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG

(Replace ./checker_OS with the checker for your system, e.g., ./checker_linux, Mac and linux are available)

The program will output:

OK if the stack is correctly sorted

KO if not

(The test above should display OK if your algorithm works correctly.)

## Algorithm Choice

For this project, I implemented a sorting strategy inspired by the “Turk algorithm”.

The idea is to split the data into chunks and push elements between stacks a and b in a controlled order to minimize moves.
This approach efficiently handles both small and large lists and allows optimization of stack operations.

Here is the page i used to understand the “Turk algorithm”:

https://medium.com/@ayogun/push-swap-c1f5d2d41e97

## Rules

The program must handle errors (invalid input, duplicates, non-integer values) and print Error to standard error.

Only the allowed operations may be used.

The goal is to minimize the number of moves.

## Author

mleineku – 42 School Student

## License

This project is open-source and reusable for personal or educational purposes.
