#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, count=0;
	cin>>n;
	int arr[n*2];	
	for(int i=0; i<n*2; ++i) cin>>arr[i];
		
	for(int i=0; i<n*2; i+=2) {
		for(int j=1; j<=n*2; j+=2) {
			if(i!=(j-1) && arr[i]==arr[j]) count++;
		}
	}
	cout<<count;
	return 0;
}