## Problem

- **https://leetcode.com/problems/implement-queue-using-stacks/**

## Solution

- Solve this using 2 stacks [input and output].
- PUSH: Push always in input.
- POP: if output is empty move everything from input to output then output.pop().
- EMPTY: if both input and output empty.
- PEEK/TOP: if output is empty move everything from input to output then output.top().

#### Time Complexity

`O(1) for push and Amortized(1 but sometime worst case n ) for pop and top/peek`
