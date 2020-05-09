# The For Statement

This section shows the `for` control structure, which is an alternative to the `while` loop. 

The `for` loop uses three expressions to control iteration. 
- The first initializes a variable that will be used in the checks and is only executed once.
- The second performs a comparison which, if it returns `true`, will allow the loop to continue, otherwise breaking out of it. 
- The third expression adjusts the iteration control variable (and is typically an increment `++` or decrement `--` operation.)

For instance:

```C
for (fahr = 0; fahr <= 30; fahr += 20)
  /* expressions */
```

## Prompts
- Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
