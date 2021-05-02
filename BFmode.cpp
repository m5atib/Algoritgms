#include <iostream>
using namespace std;
int BFmode (int arr[] , int n){
	int x[n] ;
	for (int i=0 ; i<n ; i++)
	x[i ] = 0;
	
	for (int i=0; i<n ; i++){
		x[i]+=1;
		for (int j=i+0; j<n ; j++){
			if (arr[i]==arr[j]){
				x[i]+=1;
			}
		}
	}
	int m=x[0] , pos = 0;
	for (int i=1 ; i<n ; i++){
		if (x[i]>m){
			m=x[i];
			pos = i;
		}
	}
	return arr[pos];
}
int main(int argc, char *argv[])
{
	int a[10] = {
		 4,8,7,6,4,2,4,4,1,2
	};
	cout<<BFmode(a , 10)<<endl;
	return 0;
}