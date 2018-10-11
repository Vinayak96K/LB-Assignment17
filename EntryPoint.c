#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char str[SIZE];
    printf("Enter a string:");
    scanf("%[^'\n']s",str);

    printf("Pattern of Q1:\n");
    Pattern1(str);
    printf("\n");

    printf("Pattern of Q2:\n");
    Pattern2(str);
    printf("\n");

    printf("Pattern of Q3:\n");
    Pattern3(str);
    printf("\n");

    printf("Pattern of Q4:\n");
    Pattern4(str);
    printf("\n");

    printf("Pattern of Q5:\n");
    Pattern5(str);
    printf("\n");
    return 0;
}
