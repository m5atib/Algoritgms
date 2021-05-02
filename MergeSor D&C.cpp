#include <iostream>
using namespace std;
void printArray (int arr[] , int n);
void mergeSort (int arr [], int l, int r);

void merge (int arr [], int l, int m, int r);

int main(int argc, char *argv[])
{
	int arr[9] = { 7, 2, 9, 3, 1, 63, 7, 8, 4 };
	cout<<"My Array : \n";
	printArray(arr , 9);
	mergeSort(arr , 0 , 8);
//	printArray(arr , 9);
	return 0;
}
void mergeSort (int arr [], int l, int r)
{
if (l >= r) return;
int m = (l + r-1) / 2;
mergeSort (arr, l, m);
mergeSort (arr, m + 1, r);
merge (arr, l, m, r);

}

void merge (int arr [], int l, int m, int r)
{
int n1 = m - l + 1;
int n2 = r - m;
int L [n1], R [n2];
for (int i = 0; i <n1; i ++)
L [i] = arr [l + i];
for (int j = 0; j <n2; j ++)
R [j] = arr [m + 1 + j];

int i = 0, j = 0;
int k = l;

while (i <n1 && j <n2) {
if (L [i] <= R [j]) {
arr [k] = L [i];
i ++;
}
else {
arr [k] = R [j];
j ++;
}
k ++;
}
while (i <n1) {
arr [k] = L [i];
i ++;
k ++;
}
while (j <n2) {
arr [k] = R [j];
j ++;
k ++;
}

printArray(arr , 9);
}
void printArray (int arr[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	cout<<" "<<arr[i];
	cout<<endl;
}