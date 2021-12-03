// Nama Lengkap : Fahri Alamsyah 
// NPM : 1706985943 / Teknik Komputer 
// Code For Algoritma Paper 2019 
// C program for implementation of Bubble sort
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void fun() 
{ 
    while(1) 
    { 
        if (getchar()) 
            break; 
    }  
} 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf(" ");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {74,7,20,86,20,66,12,37,92,6,12,82,91,10,95,12,74,8,83,21,34,1,44,97,23,16,88,29,16,83
,86,59,67,93,25,54,94,43,71,51,48,64,91,57,12,88,65,4,73,47,15,69,19,40,56,96,34,57,20,95
,66,92,75,7,2,48,84,100,90,54,9,86,99,37,13,20,6,44,11,87,14,25,90,14,76,69,88,79,97,63,63,6,18,9,4
,98,84,79,84,99,
};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("\n Sorted array in Bubble Sort: ");
    printArray(arr, n);
    clock_t t; 
    t = clock(); 
    fun(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf(" Waktu Eksekusi Sorting %f\n", time_taken);
    return 0;
}
