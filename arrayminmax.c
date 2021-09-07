#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int array_max(int[], int);
int array_min(int[], int);


int main() {

    int array1[50]; //we are limiting the array size to 50
    int max;
    int min;
    int i;
    int number;
    
    scanf("%d",&number);
    
    if (number == 0) {
        printf("-1");
        }
    else {
        for(i=0;i<=number-1;i++){
        scanf("%d",&array1[i]);
        }
        max= array_max(array1,number);
        min= array_min(array1,number);

        printf("max: %d\n",max);
        printf("min: %d",min);
    }
    
   return 0;
}

int array_max(int arr[], int arr_len) {
    
    int max=arr[0];
    int i;
    
    for(i=0;i<=arr_len-1;i++)
    if (max < arr[i]){
        max=arr[i];
    }
    
    return max;
    
}

int array_min(int arr[], int arr_len) {
    int min=arr[0];
    int i;
    
        for(i=0;i<=arr_len-1;i++)
    if(min > arr[i]){
        min=arr[i];
    }
    
    return min;
}