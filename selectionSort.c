#include<stdio.h>
#include<stdlib.h>

void swapnum(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void selectionSort(int num[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(num[minindex]>num[j]){
                minindex=j;
            }
        }
        swapnum(&num[i],&num[minindex]);
    }
}

int main(){
    int numbers[10]={0};
    printf("Enter Number Array \n");
    for(int i=0;i<10;i++){
        printf("Number %d :",i+1);
        scanf("%d",&numbers[i]);
    }
    selectionSort(numbers,10);
    printf("\nSorted Array : \n");
    for(int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
}
