#include <stdio.h>
int main() {
    int age = 20; long population = 250000000L;
    unsigned int students = 500; float height = 5.8f;
    double salary = 75000.50; char grade = 'A';
    char name[] = "Ali"; int number = 25;
    long long llnumber = 1234567890123LL;
    printf("String       %%s  : %s\n", name);
    printf("Character    %%c  : %c\n", grade);
    printf("Integer      %%d  : %d\n", age);
    printf("Integer      %%i  : %i\n", age);
    printf("Long Integer %%ld : %ld\n", population);
    printf("Unsigned     %%u  : %u\n", students);
    printf("Float        %%f  : %f\n", height);
    printf("Float        %%.2f: %.2f\n", height);
    printf("Double       %%lf : %lf\n", salary);
    printf("Double       %%.2lf: %.2lf\n", salary);
    printf("Octal        %%o  : %o\n", number);
    printf("Hexadecimal  %%x  : %x\n", number);
    printf("HEX          %%X  : %X\n", number);
    printf("Scientific   %%e  : %e\n", salary);
    printf("Scientific   %%E  : %E\n", salary);
    printf("Sign         %%+d : %+d\n", age);
    printf("Width        %%5d : %5d\n", age);
    printf("Zero Padding %%05d: %05d\n", age);
    printf("Address      %%p  : %p\n", &age);
    printf("Long Long Number %%lld: %05lld\n", llnumber);
    printf("age size in memory = %zu bytes\n", sizeof(age));
    return 0;
}


