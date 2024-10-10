#include <stdio.h>
#include <string.h>
int i;
int user;
char one[50];
char two[50];
char three[50];
int main(){
    printf("Give me a number\n");
    scanf("%d", &user);
    printf("Give me a short word!\n");
    scanf("%s", &one);
    printf("Give me another short word!\n");
    scanf("%s", &two);
    strcat(three, one);
    strcat(three, two);
    // loop that counts to 50
    for(i=1;i<=user;i++){

    //replace #'s divisible by 3 and 5 with "FizzBuzz"
    if(i%3==0 && i%5==0){
        printf("%s\n", three);
  
    }else if (i%3==0){
    //replace numbers divisible by 3 with "Fizz"
    printf("%s\n",one);
  
    }else if (i%5==0){

    //replaced #'s divisible by 5 with "Buzz"
    printf("%s\n", two);
  
    }else {
   printf("%d\n",i);
   //print the number
    }
}  
    return 0;
}