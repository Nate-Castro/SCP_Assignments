//Nathaniel Castro Update Hello World
#include <stdio.h>
#include <string.h>
char name[50], name1[50], name2[50], name3[50], name4[50];
//char name1[50];
//char name2[50];
//char name3[50];
int main(){

    printf("Give me a name: ");
    scanf("%s", name);
    printf("Give another name: ");
    scanf("%s", name1);
    printf("Give another name: ");
    scanf("%s", name2);
    printf("Give another name: ");
    scanf("%s", name3);
    printf("Give another name: ");
    scanf("%s", name4);

    printf("Hello %s\n", name);
    printf("Hello %s\n", name1);
    printf("Hello %s\n", name2);
    printf("Hello %s\n", name3);
    printf("Hello %s\n", name4);

    return 0;

}