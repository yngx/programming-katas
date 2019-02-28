#include <iostream>
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

using namespace std;

int main(){
    
    int i,j,val;
    int * array;
    printf("How many integers do you want to store in the array? ");
    scanf("%d", &i);

    array = (int*) malloc(i);
    if(array == NULL) exit (1);

    // cout << i << endl;

    j = 0;
    while(j < i){
        printf("Enter an integer? ");
        scanf("%d", &val);

        *(array+j) = val;
        j++;
    }

    for(int k = 0; k < j; k++){
        cout << *(array+k) << endl;
    }

    return 0;
}