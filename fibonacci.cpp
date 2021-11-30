#include<iostream>

using namespace std;

int fibonacci(int n);


int main(){
	int *pi = new int[20];
	int i;
	for(i=1;i<=20;i++)
	{
		*pi = fibonacci(i);
		cout<<*pi<<" ";
	}
	cout<<endl;
	delete []pi;
	return 0;
}

int fibonacci(int n){
	if(n==1 || n==2)
		return 1;
	else
		return fuion(n-1)+fibonacci(n-2); 
}
