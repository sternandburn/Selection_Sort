// C++ program for implementation of selection sort  
// Noah Stern
// Group D
// CS 355
// C++ file made for algorithm
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
}

 void display(int nums[], int num)
 {
    
    for(int i = 0; i < num; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
 }

int main ()
{
    int size = 10;
    int data [] = {5, 7, 1, 4, 9, 6, 2, 8, 3, 0};

    selectionSort(data,size);
    display(data, size);
 
}
