#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, k, ans=0;
	cin>>n>>k;
	unsigned long long int arr[n];
	unsigned long long int count;
	for(int i=0; i<n; ++i) cin>>arr[i];

	for(int i=0; i<n; ++i) {
		count=0;
		while(arr[i]>0) {

			if(arr[i]%10 == 4 || arr[i]%10 == 7) {
				count++; 
			}
			arr[i]/=10;
		}

		if(count<=k) ans++; 
	}
	cout<<ans;
		
	return 0;
}