// A full c++ quicksort algorithm no bs
// quicksort in code

#include <iostream>

using namespace std;
void quicksort(int number[],int first,int last);
void QuickSort(int arr[], int start, int end);
int Partition(int arr[], int start, int end);
void SwapArrMem(int arr[], int a, int b);
void printArr(int arr[], int n);
int main()
{

	int arr[8] = {15,13,10,19,18,3,14,16}; 
	//int arr [9]= { 6,1,10, 9, 7, 4, 8, 2, 15 };
	cout << endl << "The sorted numbers are:" << endl << endl;



	quicksort(arr, 0, 7);
	
	

}

void QuickSort(int arr[], int start, int end)
{
	if (start >= end) return;

	int index = Partition(arr, start, end);
	
		
	QuickSort(arr, start, index - 1);
	QuickSort(arr, index + 1, end);
}

int Partition(int arr[], int start, int end)
{
	int pivotindex = start;
	int pivotvalue = arr[end];
	for (int i = start; i < end; i++)
	{
		if (arr[i] < pivotvalue)
		{
			SwapArrMem(arr, i, pivotindex);
			pivotindex++;
		}
	}
	SwapArrMem(arr, pivotindex, end);
		cout<<" j = "<<pivotindex <<" | ";
	printArr(arr , 8);
	return pivotindex;
}

void SwapArrMem(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void printArr(int arr[], int n){
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<" ";
	}
	cout<<endl;
}

void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      cout<<"pivot = "<<pivot<<endl;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
         
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      cout<<"j = "<<j<<" , i = "<<i<<" |";
      
      printArr(number , 8);
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
} 