#include <iostream>
using namespace std;
 int sum(int A[],int L, int R)
{
  if(L==R) return A[L];   
  if(L<R)
  {int mid=(L+R)/2;
    int Lsum=sum(A,L,mid);
   int Rsum=sum(A,mid+1,R);
   return Lsum+Rsum;
}
}
int exp(int a,int l, int r)
{
 if(r==0)return 1;
 if(r==1)return a;
 if(l==r)return a;
 if(l<r)
 {
 	int mid=(l+r)/2;
 	int pl=exp(a,l,mid);
 	int pr=exp(a,mid+1,r);
 	return pl*pr;
 }
}   

int main(int argc, char *argv[])
{
	int A [8] = {1,6,3,8,5,2,5,9};
	cout<<sum(A , 0 , 7)<<endl;
	return 0;
}