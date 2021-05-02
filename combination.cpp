#include <iostream>
using namespace std;
void Combination (int a [], int reqLen, int start, int currLen, bool check [], int len)
{
		if (currLen> reqLen) return;
	  	else if (currLen == reqLen)
	     {
				cout << "\t";
					for (int i = 0; i <len; i ++)
					{
					                  if (check [i] == true)
					cout << a [i] << "" ;
					}
		cout << "\n";
		return;
       }
	   if (start == len) return;
	   check [start] = true;
	   Combination (a, reqLen, start + 1, currLen + 1, check, len);
	   check [start] = false;
	   Combination (a, reqLen, start + 1, currLen, check, len);
}
int main ()
{
			int i;
			const int n = 4;
			bool check [n];
			int arr [n];
			for (i = 0;i <n; i++)
			{
			  arr [i] = i + 1;
			  check [i] = 0;
			}
			 for(i = 1; i <= n; i++)
{

			cout << "\nThe combination of length\t" << i << "\tfor the given array set: \n";
			Combination (arr, i, 0, 0, check, n);
}
			return 0;}