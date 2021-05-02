#include <iostream>
using namespace std;

int presortMode (int a[] , int n){
	int i=0;
	int modeFreq = 0 , runlen = 0 , runval=0 , modeval = -1;
	while (i<n-1){
		runlen=1; runval = a[i];
		while (((i+runlen)<(n-1)) && (a[i+runlen]==runval)){
			runlen+=1;
		}
		if (runlen > modeFreq){
			modeFreq = runlen ; modeval=runval;
		}
		i+=runlen;
	}
	return modeval;
}
int main(int argc, char *argv[])
{
	
	int arr[10]={1,2,2,4,4,4,4,6,7,8};
	cout<<presortMode(arr , 10)<<endl;
	return 0;
}