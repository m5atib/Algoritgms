#include <iostream>
using namespace std;
bool selectionSort (int arr[] , int s);
bool swapp(int &a  , int &b );
int Mini(int a, int b);
void printArr(int arr[] , int s);
int main(int argc, char *argv[])
{
	int sizo = 8; 
	int arr[8]={50,2,5,4,10,9,9,7}; //is not Stable Sort
	cout<<"be4 sort : ";
	printArr(arr , sizo);
	selectionSort(arr ,sizo);
	cout<<"after sort : ";
	printArr(arr , sizo);
	return 0;
}
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

bool selectionSort (int arr[] , int s){
	
	int min;
	for (int i=0; i<s-1 ; i++){
		min=i;
		for (int j=i+1 ; j<s ; j++){
			if (arr[j]<arr[min]){
				min=j;
			}
		}
		swapp(arr[i],arr[min]);
		printArr(arr , s);
	}
	return 1;
}