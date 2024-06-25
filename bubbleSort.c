#include<stdio.h>
#include<stdlib.h>

void swapnum(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int num[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                swapnum(&num[j],&num[j+1]);
            }
        }
    }
}

int main(){
    int numbers[10]={0};
    printf("Enter Number Array \n");
    for(int i=0;i<10;i++){
        printf("Number %d :",i+1);
        scanf("%d",&numbers[i]);
    }
    bubbleSort(numbers,10);
    printf("\nSorted Array : \n");
    for(int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
}
