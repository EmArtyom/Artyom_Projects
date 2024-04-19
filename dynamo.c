#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = NULL;
    int num;
    int size = 0;

    while(1){
        scanf("%d", &num);
        if(num == -1){
            break;
        }
        else {
        
        size++;
        arr = (int*)realloc(arr, sizeof(int));
        arr[size -1] = num;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size -1 ) printf(" ");
    }
    free(arr);
    return 0;
}