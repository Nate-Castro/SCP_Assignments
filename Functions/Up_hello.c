//Nathaniel Castro Update Hello World
#include <stdio.h>
char name[50];
char name1[50];

int main(){

    printf("Give me a name: ");
    scanf("%s", name, name1);
    printf("Hello %s\n", name);

    printf("Give another name: ");
    scanf("%s", name1);
    printf("Hello %s\n", name1);

    return 0;

}