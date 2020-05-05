# Learning C
This repo is to organize resources, projects, notes, and exercises for learning C.

## Getting Started
To get started with C, here's the first example in the book [The C Programming Language](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628), by Brian Kernighan and Dennis Ritchie.

Save the following into a file called `helloworld.c`

```C
#include <stdio.h>

main()
{
    printf("hello, world\n");
}
```

This source file will need to be compiled before it can be run. On a UNIX system, `cd` into the directory containing `helloworld.c` and run this:

```SHELL
cc helloworld.c
```

Provided nothing went wrong, the compiled code should be output to `a.out`. Now, if you run the following line, then `hello, world` (followed by a newline) will be printed to the console.

```SHELL
./a.out
```

Congratulations! Here's to many more small steps.

## Resources
Books, videos, blog posts, and other materials useful for learning C and related topics will be added in [learning-c/resources/](https://github.com/Jonathan-Llovet/learning-c/tree/master/resources).
