#include <iostream>
#include <string.h>
using namespace std;
void clps (char ptn[] , int n , int LPS[]);
void kmpSearch (char ptn[] , char txt[] ,int n , int m);
void printArr(int arr[] , int s){
	
	for (int i=0; i<s ; i++){
		cout<<' '<<arr[i];
	}
	cout<<endl;
}
int main(int argc, char *argv[])
{
	
	char ptn [8]={'A','A','B','A','A','A','B','A'};
	//AABAAABA
	char txt[17] ={'A','B','A','B','A','B','C','A','B','A','B','A','B','A','C','B','C'};
	kmpSearch (ptn , txt , 17,8);	
	
	
	return 0;
}

	
void clps (char ptn[] , int n , int LPS[]){
	
	int i=1 , j=0;
	LPS[0]=0;
	
	while(i<n){
		if (ptn[i] == ptn[j]){
			j++;
			LPS[i] = j;
			i++;
			
		}
		else{
			if (j!=0){
				j = LPS[j-1];	
			}
			else{
				LPS[i] = 0;
				i++;
			}
		}
	}
}
	
void kmpSearch (char ptn[] , char txt[] , int n , int m){
	

	int lps[m];
	clps (ptn , m , lps);
	cout<<"LPS = "; printArr(lps , m);
	int i=0 , j=0;
	while (i<n){
		//cout<<"i = "<<i << " , j= "<<j <<endl;
		if (ptn[i] == txt[j]){
			j++;
			i++;
		}
		if (j==m){
			cout<<"founded at pos = "<<i-j<<endl;
			j=lps[j-1];
		}
	 	else if ((i<n) && (ptn[i]!=txt[j])){
			if (j!=0){
				j = lps[j-1];
				
			}
			else{
				i++;
			}
		}
		
	}
}