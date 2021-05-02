#include <iostream>
#include <climits>
using namespace std;
 
void findMinAndMax(int arr[], int low, int high, int &max)
{
 
 
    if (low == high)            
    {
        if (max < arr[low])     
            max = arr[low];
        return;
    }
 
    else if (high > low)       
    {
        if (arr[low] < arr[high])   
            if (max < arr[high])    
                max = arr[high];

        else
            if (max < arr[low])     
                max = arr[low];
                
	int mid = (low + high) / 2;
    findMinAndMax(arr, low, mid, max);
    findMinAndMax(arr, mid + 1, high, max);
    }
 
   
    
}
 
int main()
{
    int arr[] = { 7, 2, 9, 3, 1, 63, 7, 8, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // initialize the minimum element by infinity and the
    // maximum element by minus infinity
    int max = INT_MIN;
 
    findMinAndMax(arr, 0, n - 1, max);
 

    cout << "The maximum element in the array is " << max<<endl;
 
    return 0;
}