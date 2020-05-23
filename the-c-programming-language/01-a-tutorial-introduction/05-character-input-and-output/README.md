# Character Input and Output

In the C standard library, all input and output is modeled as streams.
- A text stream is a sequence of characters divided into lines. 
- A line is a sequence of zero or more characters followed by a newline character.

## Two basic standard library functions for input and output
### getchar()

`getchar()` reads the next input character from a text stream and returns its value

For instance: `c = getchar()` will return the value of the next input character in the variable `c`.

### putchar(c)

`putchar(c)` will print the value of an integer variable `c`, usually to the screen.

