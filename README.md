*This project has been created as part of the 42 curriculum by hiouzddo.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum. The goal is to sort a stack of integers using a limited set of operations while producing the **smallest possible number of moves**.

The program starts with stack **A** containing random integers and an empty stack **B**. Only specific operations (swap, push, rotate, reverse rotate) are allowed to reorder the elements.

This project focuses on:
- Algorithmic thinking and problem-solving
- Algorithm optimization
- Data structures (linked lists and stacks)
- Time and space complexity analysis

## Instructions

### Compilation

To compile the program, run:

# Step 1: Compile the mandatory program
make

# Step 2 (Optional): Compile the bonus checker to test your sorting
make bonus

### Execution

**For the mandatory program:**

./push_swap "1 2 3 9 8 10 7"
./push_swap 1 2 3 9 8 10 7

**For testing with the bonus checker:**

arg="1 2 3 9 8 10 7"; ./push_swap $arg | ./checker $arg

# Output: OK (if sorted correctly) or KO (if not sorted)

## Resources

Here are the resources I used to build this project:

- **Algorithm Explanation:** Students from 42 explained the chunk-algorithm
- **Radix Sort Reference:** [GeeksforGeeks - Radix Sort](https://www.geeksforgeeks.org/dsa/radix-sort/)
- **AI Learning Assistant:** Used to understand how the algorithm works and debug errors

## AI Usage

AI tools were used as learning assistants.

Specifically for:
- Explaining concepts such as stack operations, static functions, and algorithm strategies
- Debugging compilation errors and understanding warnings
- Reviewing logic and suggesting optimizations
- Structuring and improving documentation
