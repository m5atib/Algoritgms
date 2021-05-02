#include <iostream>
using namespace std;
bool insertionSort  (int arr[] , int s);
bool swapp(int &a  , int &b );
int Mini(int a, int b);
void printArr(int arr[] , int s);
bool InsSort (int arr[] , int s);
int main(int argc, char *argv[])
{
	int sizo = 8; 
	int arr[8]={50,3,5,4,10,9,9,7}; 
	printArr(arr , sizo);
	cout<<"--------------------"<<endl;
	InsSort(arr ,sizo);
	
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
int Mini(int a, int b){
	if (a<b){
		return a;
	}
	else if (b<a) return b;
	
}
bool InsSort (int arr[] , int s){
	for (int i=1; i<s ; i++){
		for (int j=i ; j>0 ; j--){
			if (arr[j-1]>arr[j])
			swapp(arr[j-1],arr[j]);
			else
			break;
		}
		printArr(arr , s);
	}
	return 1;
}
bool insertionSort (int arr[] , int s){
	int posR,BaseItemPos;
	for (int i=0; i<s-1 ; i++){
		
		
			if (arr[i+1]<arr[i]){
				swapp(arr[i],arr[i+1]);
				posR = i-1;
                BaseItemPos=i;
				while (posR>0){
					if (arr[BaseItemPos]<arr[posR]){
						swapp(arr[BaseItemPos],arr[posR]);
                        BaseItemPos = posR ;
						  					
  					}
				posR--;
				}
			}
			printArr(arr , 8); 
		}
		return 1;
	}
	
 