#include <iostream>

using namespace std;

int interpolationSearch(int arr[], int n, int x)
{

    int lo = 0, hi = (n - 1);
 
   
    while (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        if (lo == hi)
        {
            if (arr[lo] == x) return lo;
            return -1;
        }
        
        int pos = lo + (((double)(hi - lo) /(arr[hi] - arr[lo])) * (x - arr[lo]));
 		cout<<"the lo ex = "<<lo<<" | the pos ex = "<<pos <<" | the hi ex = "<<hi<<endl;
		 
		
     
        if (arr[pos] == x)
            return pos;
 
     
        if (arr[pos] < x)
            lo = pos + 1;
 
     
        else
            hi = pos - 1;
    }
    return -1;
}
 

int main()
{
  
    int arr[] = {10, 12, 13, 16, 18, 19, 20,24 ,25,30, 35, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int x = 30; 
    int index = interpolationSearch(arr, n, x);
 
    if (index != -1)
        cout << "Element found at index " << index<<endl;
    else
        cout << "Element not found.\n";
    return 0;
}