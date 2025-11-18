#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[30];
    int length;

    printf("Please enter your name: \n");
    scanf("%s", name);

     printf("You've entered %s \n", name);
     length = strlen(name);

     printf("Your name has a total of %i characters", length);
    return 0;
}
