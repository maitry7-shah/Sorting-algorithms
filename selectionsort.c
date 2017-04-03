#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }

void selectionsort(int arr[],int size){
    //10 7 8 9 1 5 
    int i,j,minimum;
    
    int n=size;
   
    for(i=0;i<n;i++){
        
    
        minimum=i;
        printf("rr  %d ", minimum);
          
        for(j=i+1;j<n;j++){
             printf("j%d \n", j);
            
            if(arr[j]<arr[minimum]){
                
               
                minimum=j;
                
            }
           
        }
         printf("new%d ", minimum);
         if(arr[minimum]!=arr[i]){
         swap(&arr[i],&arr[minimum]);
             
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
    selectionsort(arr,n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
