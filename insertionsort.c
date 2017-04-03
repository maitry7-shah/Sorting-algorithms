//insertion sort
#include<stdio.h>

void swap(int *i, int *j){
    int temp;
    temp= *i;
    *i=*j;
    *j=temp;

}

void InsertionSort(int arr[],int size){
    //10 7 8 9 1 5
    //10 
    //7 10 8 9 1 5
    //7 8 10
    
    printf("%d ", size);
    int i,j;
    for(i=0;i<size;i++){
        
        for(j=i;j>0;j--){
            
            if(arr[j]<arr[j-1]){
                
                swap(&arr[j],&arr[j-1]);
            }
        }
    }
    
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    printf("Sorted array: \n");
   
    printArray(arr, n);
    return 0;
}

