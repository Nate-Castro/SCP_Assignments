#include <stdio.h>

int num = 20;

int main(){
    if (num < 10){
        printf("This is a single character digit number\n");
    }else if (num <100){
        printf("This is a double digit number\n");
    }else{ 
        printf("This is atleast a triple digit number\n");
    }
    return 0;
}