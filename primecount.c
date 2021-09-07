#include<stdio.h>
#include<math.h>

int get_primes_count(int[], int);

int main() {
    int array1[50]; //we are limiting the array size to 50
    int count;
    int i;
    int number;
    
    scanf("%d",&number);
    
    if (number == 0) {
        printf("Prime count: -1");
        }
    else {
        for(i=0;i<number;i++){
        scanf("%d",&array1[i]);
        }
        count= get_primes_count(array1, number);

        printf("Prime count: %d\n",count);
    }
    
   return 0;
}

int get_primes_count(int arr[], int arr_len) {
    
    int count=0;
    int flag;
    int i;
    int j;
    
    for (i=0;i<arr_len;i++) {
        if(arr[i] == 1){
            flag=1;
        }
        else 
        flag = 0;
     for (j = 2; j <= arr[i] / 2; ++j) {
        if (arr[i] == 1 || arr[i] % j == 0) {
            flag=1;
            break;
        }
        }
        if(flag==0){
            count++;
    }
  }

    return count;
    
}