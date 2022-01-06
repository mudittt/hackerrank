#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int str[10];
    for(int i=0;i<10;i++){
        str[i]=0;
    }
    
    char *ptr = (char *)malloc(n * sizeof(int));
    scanf("%s", ptr);
    getchar();
    for (int i = 0; i < strlen(ptr) ; i++) {
        
        if(ptr[i] == '0'){
            str[0]++;
        }
        else if(ptr[i] == '1'){
            str[1]++;
        }
        else if(ptr[i] == '2'){
            str[2]++;
        }
        else if(ptr[i] == '3'){
            str[3]++;
        }
        else if(ptr[i] == '4'){
            str[4]++;
        }
        else if(ptr[i] == '5'){
            str[5]++;
        }
        else if(ptr[i] == '6'){
            str[6]++;
        }
        else if(ptr[i] == '7'){
            str[7]++;
        }
        else if(ptr[i] == '8'){
            str[8]++;
        }
        else if(ptr[i] == '9'){
            str[9]++;
        }
    } 
    for (int j = 0; j < 10; j++) {
    
        printf("%d ", str[j]);
    } 
    free(ptr);
    return 0;
}

