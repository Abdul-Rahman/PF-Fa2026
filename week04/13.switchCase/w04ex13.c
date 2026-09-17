#include <stdio.h>
int main() {
    int language = 10;
    switch (language){
        case 1:
            printf("C#\n");
            break;
        case 2:
            printf("C\n");
            break;
        case 3:
            printf("C++\n");
            break;
        default:
            printf("Other programming language\n");
    }
    return 0;
}

