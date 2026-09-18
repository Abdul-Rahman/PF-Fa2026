#include <stdio.h>
void main( ) {
    int x = 50;
    printf("\n%d", x != 50);
    printf("\n%d", x == 50);
    printf("\n%d", x = 100);
    printf("\n%d", x < 2);
    
    //now start the same process again in 1 line:
    x = 50;
    printf("\n%d %d %d %d", x != 50, x == 50, x=100, x < 2);
}


/*
output:
0
1
100
0
1 0 100 0 

C does not guarantee the order in which function arguments are evaluated. In GNUC assignment is first. 
*/