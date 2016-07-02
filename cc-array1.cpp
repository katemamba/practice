#include <iostream>
/* Program to find sum of elements in a given array*/
#define MAX_SIZE 1000
using namespace std;

int sumarr(int a[], int n){
	long sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"sum="<<sumarr(a,n)<<endl;
	// your code goes here
	return 0;
}