#include<stdio.h>
#include<stdlib.h>

void merge(int num[],int first, int mid, int last){
    int i,j,k;
    int set1=mid-first+1;
    int set2=last-mid;

    int left[set1],right[set2];

    for(i=0;i<set1;i++){
        left[i]=num[first+i];
    }
    for(j=0;j<set2;j++){
        right[j]=num[mid+j+1];
    }
    i=0,j=0;
    k=first;
    while(i<set1 && j<set2){
        if(left[i]<= right[j]){
            num[k]=left[i];
            i++;
        }else{
            num[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<set1){
        num[k]=left[i];
        i++;
        k++;
    }
    while(j<set2){
        num[k]=right[j];
        j++;
        k++;
    }

}

void mergeSort(int num[], int first, int last){
    if(first<last){
        int mid=first+ (last-first)/2;

        mergeSort(num,first,mid);
        mergeSort(num,mid+1,last);

        merge(num,first,mid,last);
    }
}



int main(){
    int numbers[10]={0};
    printf("Enter Number Array \n");
    for(int i=0;i<10;i++){
        printf("Number %d :",i+1);
        scanf("%d",&numbers[i]);
    }
    mergeSort(numbers,0,9);
    printf("\nSorted Array : \n");
    for(int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
}
