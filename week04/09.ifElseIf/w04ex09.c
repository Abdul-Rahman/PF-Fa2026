#include <stdio.h>
int main(){
    int var1, var2;
    printf("Input the value of var1:");
    scanf("%d", &var1);
    printf("Input the value of var2:");
    scanf("%d", &var2);
    if (var1 == var2){
        printf("var1 is equal to var2\n");
    }
    else if (var1 > var2){
        printf("var1 is greater than var2\n");
    }
    else if (var2 > var1) {
        printf("var2 is greater than var1\n");
    } else {
        printf("error\n");
    }
    return 0;
}

