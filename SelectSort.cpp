// C++ program for testing randomized values from selectsort
// Noah Stern
#include <bits/stdc++.h> 
using namespace std; 

void selectionSort(int [], int);



void selectionSort(int nums[], int num)
{
    int temp = 0, index = 0;
    clock_t tics, tics2;
    
    tics = clock();
    for(int i =0; i < num - 1; i++)
    {
        index = i;
        for(int j = i + 1; j < num; j++)
            if(nums[j] < nums[index])
               index = j;
               
        temp = nums[i];
        nums[i] = nums[index];
        nums[index] = temp;
    }
   tics2 = clock();
   
   float secs = (float)tics2 - (float)tics;
   cout << secs / CLOCKS_PER_SEC << endl;
}

int main ()
{
    srand(time(NULL));
    int size = 50000;
    int data [size];
    
    for(int i = 0; i < size; i++)
    {
        data[i] = rand() % 50001;
    }
    
    selectionSort(data,size);
}
