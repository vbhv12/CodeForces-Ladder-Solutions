#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n, index1, index2, diff=999;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
		cin>>arr[i];
		
	for(int i=0; i<n-1; ++i) {
		if(abs(arr[i]-arr[i+1]) < diff) {
			diff = abs(arr[i]-arr[i+1]);
			index1=i+1;
			index2=i+2;
		}
	}
	if(abs(arr[0]-arr[n-1]) < diff) {
		index1=n;
		index2=1;
	}
	cout<<index1<<" "<<index2;
	
	return 0;
}
