#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
    int arr[n];
    int temp1 = (0);
    int temp2 = (0);
    int temp3 = (0);
    for (int i =0; i < n; i++ ) {
        arr[i]= i+1;
    }
    for(int j= 0; j < k; j++){
        for (int i =0; i < (n-1); i++ ) {
            if(j < (i+1)){           
                if(((arr[j] & arr[i+1]) > temp1) && ((arr[j] & arr[i+1]) < k)){                  
                    temp1 = (arr[j] & arr[i+1]);                  
                }
            }
        }     
        for (int i =0; i < (n-1); i++ ) {
            if(j < (i+1)){
                if(((arr[j] | arr[i+1]) > temp2) && ((arr[j] | arr[i+1]) < k)){                   
                    temp2 = (arr[j] | arr[i+1]);
                    
                }
            }
        }        
        for (int i =0; i < (n-1); i++ ) {
            if(j < (i+1)){
                if(((arr[j] ^ arr[i+1]) > temp3) && ((arr[j] ^ arr[i+1]) < k)){
                    temp3 = (arr[j] ^ arr[i+1]);           
                }
            }
        }    
    }
    printf("%d\n", temp1);
    printf("%d\n", temp2);
    printf("%d\n", temp3);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
