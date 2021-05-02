#include <iostream>
using namespace std;
int josepgusProblem (int n);
int main(int argc, char *argv[])
{
	cout<<josepgusProblem(40)<<endl;
	return 0;
}

int josepgusProblem (int n){
	
	if (n<=1) return 1;
	if (n%2) return 2*josepgusProblem((n/2))+1;
	else return 2*josepgusProblem(n/2)-1;
}