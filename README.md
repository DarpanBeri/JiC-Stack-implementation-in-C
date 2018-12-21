## Stack Implementation in C
**Note:**This stack implementation is inadequate and not ideal.

#### Files included:
    Prog1_2.h:
        Header file.
    Prog1_2.c:
        Has MakeStack, Push, Pop and Grow functionality. You can play with it if you scroll down and remove the comments from line 43-53.
    Prog1_3.c:
        Driver program which combines Prog1_2.c's features with being running from command line.

#### Example compilation:
    gcc prog1_3.c prog1_2.c -o prog1_3

#### Example execution:
    ./prog1_3 N
**Note**: The N above is an integer. The program will take N number of lines of commands.

#### Example run:
    > Push 4
    > push 2
    > abs
    > pop
    2
    > pop
    -1
    > push 3 more
    > push 2
    > pop
    2
**Note**: Only two valid commands are push n(n is an integer) and pop. The stack grows dynamically.

Darpan Beri

darpanberi.99@gmail.com || dberi@sdsu.edu