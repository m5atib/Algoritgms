#include <iostream>
using namespace std;
void printArr(int arr[] , int s){
	
	for (int i=0; i<s ; i++){
		cout<<' '<<arr[i];
	}
	cout<<endl;
}
void allsubs(int *A, int len, int *B, int len2, int index)
 {     
 if (index >= len)    
  {         for (int i = 0; i < len2; ++i)  
         {             cout<< B[i];         }      
            cout<<"\n";          return;  
               }    
                allsubs(A, len, B, len2, index+1);   
                   B[len2] = A[index];  
                      allsubs(A, len, B, len2+1, index+1);
                       }

int main(int argc, char *argv[])
{
	int b[4] = {
		1,2,3,4
	};
	int a[4]={
		1,2,3,4
	};
	allsubs(a,4,b,4,0);
	//printArr(b,16);
	
	return 0;
}