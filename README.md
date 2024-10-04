# Decision-Making-Statement-Loops
## Aim
To study and implement C++ decision making statement loops
## Theory
In programming, decision-making statements and loops are fundamental constructs that enable developers to control the flow of execution within a program. They allow for the creation of dynamic and responsive software that can adapt to varying conditions and perform repeated tasks efficiently. In C++, loops are used to execute a block of code repeatedly, based on a condition or a set number of iterations. Loops help in reducing redundancy by automating repetitive tasks. Loops, such as for, while, and do-while, allow a block of code to be executed repeatedly until a specified condition is met.
### for Loop
The for loop is typically used when the number of iterations is known in advance. It consists of three parts: initialization, condition, and increment/decrement.
```cpp
for (initialization; condition; increment/decrement) {
    // Code to execute in each iteration
}
```
- **Initialization:** Runs once before the loop starts.
- **Condition:** Checked before each iteration; the loop continues as long as this is true.
- **Increment/Decrement:** Updates the loop control variable after each iteration.
### while Loop
The while loop is used when the number of iterations is not known in advance, and you want the loop to continue as long as a condition is true. The condition is checked before executing the loop body. This is called an entry controlled loop.
```cpp
while (condition) {
    // Code to execute as long as the condition is true
}
```
- **Condition:** Evaluated before each iteration. If false initially, the loop body may not execute at all.
### do-while Loop
The do-while loop is similar to the while loop, but with one key difference: the condition is checked after the loop body is executed. This guarantees that the loop will execute at least once, even if the condition is initially false. This is called an exit controlled loop.
```cpp
do {
    // Code to execute
} while (condition);
```
- **Condition:** Evaluated after each iteration, so the loop always runs at least once.

