// C++ program to find all subsets of given set. Any 
// repeated subset is considered only once in the output 
#include<math.h>
#include <iostream> 
using namespace std;

void allPossibleSubset(int arr[], int n)
{
    int count = pow(2, n);
    
    for (int i = 0; i < count; i++) {
       cout<<"{";
        for (int j = 0; j < n; j++) {
           
            if ((i & (1 << j)) != 0)
                cout << arr[j] << " ";
        }
        cout << " }\n";
    }
}

int main()
{
    int n;
    
    cout << "Enter size of the set\n";
    cin >> n;

    int arr[n];
    cout << "Enter Elements of the set\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    allPossibleSubset(arr, n);

    return 0;
}