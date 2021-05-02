#include <iostream>
using namespace std;
bool Bubble(int A[],int n);
void printArr(int arr[] , int s){
	
	for (int i=0; i<s ; i++){
		cout<<' '<<arr[i];
	}
	cout<<endl;
}
bool swapp(int &a  , int &b ){
	int temp = a;
	a=b;
	b=temp;
	return 1;
}

int main(int argc, char *argv[])
{
	int sizo = 8; 
	int A[8]={50,2,5,4,10,9,9,7}; 
	cout<<"be4 sort :\t";
	printArr(A , sizo);
	Bubble(A , 8);
	cout<<"after sort :\t";
	printArr(A , sizo);
	return 0;
}
bool Bubble(int A[],int n) {  
 for(int i=0;i<n-1;i++)   
   {
   for(int j=0;j<n-1-i;j++)     
     if(A[j+1]<A[j])     
	     swapp(A[j+1],A[j]) ;
   printArr(A , n);
   }
	     return 1;
		 }