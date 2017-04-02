#include<stdio.h>
//bubble sort
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }

void bubblesort (int arr[], int size)
{
//6 5 1 3 8 4 7 9 2 
     int n=size;
     int i,j;
     for( i=0;i<n-1;i++){
         
         for( j=0;j<n-i-1;j++){
             if(arr[j+1]<arr[j]){
             swap(&arr[j],&arr[j+1]);
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
    bubblesort(arr,n);
    printf("Sorted array: \n");
   
    printArray(arr, n);
    return 0;
}

