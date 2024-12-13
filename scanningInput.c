#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age;

    printf("please enter your age\n");
    scanf("%d", &age);

    getchar();

    char firstLetter;

    printf("Enter the first letter of your name\n");
    scanf("%c", &firstLetter);

    printf("your age is %d and the first letter of your name is %c\n", age, firstLetter);
}
