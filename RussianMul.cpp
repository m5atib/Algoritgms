#include <iostream>
using namespace std;
int russianPeasant( int n,  int m) ;
int RP (int x , int y);
 
int main() {
   cout << RP(10, 20) << endl;
   cout << russianPeasant(7, 6) << endl;
   return 0;
}

int russianPeasant( int n,  int m) {
   int result = 0;
   while (m > 0) {
      if (m & 1)
         result = result + n;
         n = n << 1;
         m = m >> 1;
   }
   return result;
}

int RP (int n , int m){
	
	int res = 0 ;
	
	while (n>0){
		if (n%2)
		res+=m;
		
		n/=2;
		m*=2;
	}
	return res;
}