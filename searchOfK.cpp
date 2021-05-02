#include <iostream>
using namespace std;
bool Ksearch (int arr[] , int Left ,int Right , int k);
int main(int argc, char *argv[])
{
	
	return 0;
}

int Ksearch (int arr[] , int Len, int Left ,int Right , int k){

	
	if (Left < 0) return -1;
	if (Right => Len) return -1;
	if (arr[Left] == k) return Left;
	else
	return Ksearch (arr , Len, 0 , (Len-1)/2 , k );
	if (arr[Right] == k) return Right;
	else
	return Ksearch (arr , Len , Len/2 , Len ,k  );
	
	
	
}