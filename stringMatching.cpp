#include <iostream>
using namespace std;
bool StringMatch(char Str[] , int sStr , char Ptn[] , int sPtn);
void printArr(char arr[] , int s){
	
	for (int i=0; i<s ; i++){
		cout<<' '<<arr[i];
	}
	cout<<endl;
}
int main(int argc, char *argv[])
{
	char strM[12] = {'T','A','B','C','D','F','G','A','B','C','D','E'};
	char ptnM[4] = {'A','B','C','D'};
	
	cout<<*ptnM<<endl;
	cout<<StringMatch(strM,12,ptnM,4)<<endl;
	return 0;
}

bool StringMatch(char Str[] , int sStr , char Ptn[] , int sPtn){
	bool f = 0;
	cout<<sStr-sPtn<<endl;
	for (int i=0; i<sStr-sPtn ; i++){
		
		for (int j=0 ; j<sPtn ; j++){
			if (Str[i+j] != Ptn[j])
			{
				f=0;
				break;
			}
			else
			{
				f=1;
			
			}
			
		}
		cout<<endl;
		if (f==1) cout<<"Match At i = "<<i<<endl;;
	}
	return f;
}