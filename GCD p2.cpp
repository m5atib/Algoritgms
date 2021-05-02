#include <iostream>
using namespace std;
int GCDCIC(int m,int n);
int minim (int x , int y);
int main(int argc, char *argv[])
{
	cout<<"hello"<<endl;
	cout<<GCDCIC(60,24)<<endl;
	return 0;
}

int GCDCIC(int m,int n){
	
	if ((m<=0)||(n<=0)) return -1;
	
	int t=minim(m,n);
	
	while (!((n%t==0)&&(m%t==0)))
		t-=1;
		
	return t;
}

int minim (int x , int y){
	
	if (x<=y){
		return x;
		
	}
	else {
		return y;
	}
}