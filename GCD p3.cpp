#include <iostream>
#include <math.h>
#include <list> 
using namespace std;
int GCD_me (int m , int n);
int min_me(int x, int y);
int *prime_facto(int arr[], int n , int Out[], int &si);
void fill_meArr (int a[] ,int p);
void print_arr (int *a , int n);
int main(int argc, char *argv[])
{
	cout<<"Hello, Wolrd!"<<endl;
	
	int Int_array[26] ;
	fill_meArr(Int_array,25);
	print_arr(Int_array , 25);
	int *ar = prime_facto(Int_array ,25);
	print_arr(ar , 9);
	return 0;
}
void print_arr (int *a , int n){
	cout<<"Array = [ " ;
	
	for (int i=0; i<=n ; i++){
		cout<<*a<<' ';
		a++;
	}
	cout<<" ] "<<endl;
}
void fill_meArr (int a[] ,int p){
	
	
	for (int i=0; i<=p ;i++){
		a[i] = i;
	}
	a[1]=0;

}
int *prime_facto(int arr[], int n , int Out[], int &si){
	
	
	
	for (int i=2 ; i<=sqrt(n) ; i++){
		int k = i*i;
		
		while (k<=n){
			arr[k] = 0;
			k+=i;
		}
	}
	int countOfl = 0;
	for (int i=2 ; i<n ; i++){
		if (arr[i]!=0){
			countOfl++;	
		}
	}
	cout<<countOfl<<"this is number of l"<<endl;
	int L[countOfl];
	int c=0;

	for (int i=0 ; i<=n ; i++)
	{
		
		if (arr[i]!=0){
			L[c] = arr[i];
			
			c++;
		}
	} 
	

	return ;
}
int GCD_me (int m , int n){
	

		
}

int min_me(int x, int y){
	
	if (x<y)return x;
	else return y;
}