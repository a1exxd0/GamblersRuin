#include <stdio.h>
#include <stdlib.h>

/**
 * \brief       Returns an array of size n+1 of the probability of reaching zero state
 *              from any state of index i.
 * \param       n: peak absorbing state
 * \return      pointer to array of size n+1
*/
double* gambler(int n){
    double* arr = malloc(sizeof(double)* (n + 1));
    
    arr[0] = 1;
    arr[n] = 0;

    for (int i = n-1; i > 0; i--){
        arr[i] = (0.5) / (1 - (0.5 * arr[i+1]));
        
    }

    for (int j = 1; j < n; j++){
        arr[j] = arr[j] * arr[j-1];
        printf("%lf\n", arr[j]);
    }

    return arr;
}

int main(){
    int peakNum = 5;
    int wanted = 3;
    double* arr = gambler(peakNum);
    

    printf("Val at %d: %lf\n", wanted, arr[wanted]);
    free(arr);
}