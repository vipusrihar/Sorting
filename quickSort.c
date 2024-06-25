#include<stdio.h>
#include<stdlib.h>

void swapnum(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int partion(int num[], int low, int high){
    int pivort = num[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(num[j]<pivort){
            i++;
            swapnum(&num[i],&num[j]);
        }
    }
    swapnum(&num[i+1],&num[high]);
    return i+1;
}

void quickSort(int num[],int low, int high){
    if(low<high){
        int pi=partion(num,low,high);

        quickSort(num,low,pi-1);
        quickSort(num,pi+1,high);
    }
}

int main(){
    int numbers[10]={0};
    printf("Enter Number Array \n");
    for(int i=0;i<10;i++){
        printf("Number %d :",i+1);
        scanf("%d",&numbers[i]);
    }
    quickSort(numbers,0,9);
    printf("\nSorted Array : \n");
    for(int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
}
