# include "stdio.h"
// # include "stdbool.h"
// bool  is_prime(int x);


int is_prime(int x){
    int test = 1;
    int i;
    int count = 0;
    for (i = 1; i <= x; i++){
        if(x%i == 0){
            count ++;
        }
    }
    if(count == 2){
        test = 1;
        return test;
    }
    test = 0;
    return test;
}


int main(){
    int w;
    scanf( "%d", w);
    int i;
    for(i = w; i >= 1; i -- ){
        if(is_prime(i)){
            printf( "%d", i);
            printf(" ");
        }
    }
}