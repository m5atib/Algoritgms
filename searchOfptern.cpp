#include <iostream>
using namespace std;
void naiveSeacrh(char str[] , int m , char ptn[] , int n);
int main(int argc, char *argv[])
{
	char str [24] = {'A','G','C','G','G','A','T','C','A','G','C','G','G','A','G','T','A','A','A','A','A','A','A','A'};
	char ptr [5] = {'A','G','C','G','G'};
	
	naiveSeacrh(str,24,ptr,5);
	
	return 0;
}

void naiveSeacrh(char str[] , int m , char ptn[] , int n){
	
	
	int k;
	for (int i=0; i<=m-n ; i++){
		
		k=0;
		
		while (k<n && str[i+k] == ptn[k])	
			k++;
			
		if (k==n)
			cout<<"excit at postion "<< i <<endl;
		
		
	
	}
}