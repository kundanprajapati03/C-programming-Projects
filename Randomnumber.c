#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("The random number between 0 to 100 is %d", rand()%100);
    return 0;
}