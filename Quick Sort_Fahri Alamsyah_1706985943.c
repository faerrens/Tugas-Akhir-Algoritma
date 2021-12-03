// Nama Lengkap : Fahri Alamsyah 
// NPM : 1706985943 / Teknik Komputer 
// Code For Algoritma Paper 2019 
/* C implementation QuickSort */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
// Swapping numbers using call by reference
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

/* In this function last element is chosen as pivot,
   then elements are arranged such that,all elements
   smaller than pivot are arranged to left of pivot
   and all greater elements to right of pivot */
void fun() 
{ 
    while(1) 
    { 
        if (getchar()) 
            break; 
    }  
} 
int partition(int A[], int start, int end)
{
    int pivot = A[end];    // choosing pivot element
    int pIndex = start;  // Index of first element
    int i;
    for (i=start; i<=end-1; i++)
    {
        /* If current element is smaller than or
         equal to pivot then exchange it with element
         at pIndex and increment the pIndex*/
        if (A[i]<= pivot)
        {
            swap(&A[pIndex], &A[i]);
            pIndex=pIndex+1;
        }
    }
    /*exchange pivot with pIndex at the completion
    of loop*/
    swap(&A[pIndex], &A[end]);
    return pIndex;
}

 /* The main function that implements QuickSort
    A[] --> array to be sorted,
    start  --> Starting index,
    end  --> Ending index */
void quick_sort(int A[], int start, int end)
{   int diff=(end-start);
    if (start < end)
    {
        /* p is pivot index after partitioning*/
        int p = partition(A, start, end);
        // Recursively sort elements left of pivot
        // and elements right of pivot
        quick_sort(A, start, p-1);
        quick_sort(A, p+1, end);
    }
}

/*  function to print an array */
void print_array(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
  int A[] = {74,7,20,86,20,66,12,37,92,6,12,82,91,10,95,12,74,8,83,21,34,1,44,97,23,16,88,29,16,83
,86,59,67,93,25,54,94,43,71,51,48,64,91,57,12,88,65,4,73,47,15,69,19,40,56,96,34,57,20,95
,66,92,75,7,2,48,84,100,90,54,9,86,99,37,13,20,6,44,11,87,14,25,90,14,76,69,88,79,97,63,63,6,18,9,4
,98,84,79,84,99
};
    int n = sizeof(A)/sizeof(A[0]);

    printf("Unsorted array: ");
    print_array(A, n);
    printf("\n");

    quick_sort(A, 0, n-1);

    printf("Sorted array: ");
    print_array(A, n);
    clock_t t; 
    t = clock(); 
    fun(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf(" Waktu Eksekusi Sorting %f\n", time_taken);
    return 0;
}
