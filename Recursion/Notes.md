# Recursion

*[Where on earth did recursion come from? - Computerphile](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
*[DSA recursion - GeeksforGeeks](https://www.geeksforgeeks.org/introduction-to-recursion-data-structure-and-algorithm-tutorials/)

#Summary
Is a process in which a function calls itself directly or indirectly. This solves a problem by calling a copy of itself and solving smaller sub-problems of the original problem.

Example of application:
1.Memoization
2.Backtracking algo's
3.Divide & Conquer algo's
4. Sorting algo's
5. Tree & Graph traversal

#How are recursive functions stored in memory?
Recursion uses more memory. This is due to the fact that a recursive function adds to the stack with each recursive call and keeps the values there until the call is finished - they are memory intensive.

#A common error thst arises from recursion?
THe stack-overflow error may arise due to a base condition never being set or never being reached, this leads to memory being exhausted.



😂 getting facrorials of a number is the simplest usecase of recursion:
```
int factorial(int n)
{
  if(n <= 1) //base condition that prevents the function from running infinitely 
    return 1;
  else
    return n * factorial(n-1); //recursive case
 }
 ```
