#include <iostream>

using namespace std;
int EGCDR(int m , int n);
int EGCD(int m, int n);
int main(int argc, char *argv[])
{
	int m , n ;
	m=60; n=24;
	

	int re = EGCDR(60,24);
	
    
	cout<<"EGCD( "<<m<<" , "<<n<<" ) = "<<re<<endl;
	return 0;
	
}
int EGCD(int m, int n){
	
	if (m<=0) return -1;
	if (n<=0) return m;
	int rem;
	while (n>0){
		rem=m%n;
		m=n;
		n = rem;
			
	}
	return m;
		
}
int EGCDR(int m , int n) {
	
	if (m<=0) return -1;
	if (n<=0) return m;
	
	return (EGCD (n,m%n));
}