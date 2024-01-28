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


/**
 * \brief       Returns the probability of reaching zero from 'starting'
 * \param       peakNum: peak absorbing state
 * \param       starting: initial conditions
 * \return      probability as per brief
*/
double optimisedgambler(int peakNum, int starting){
    return (((double)1/(double)peakNum) * ((double)peakNum-(double)starting));
}

int main(){
    int peakNum = 300;
    int wanted = 100;
    double* arr = gambler(peakNum);
    

    printf("Val at %d: %lf\n", wanted, arr[wanted]);
    printf("optimised Val at %d: %lf\n", wanted, optimisedgambler(peakNum, wanted));
    free(arr);
}