#include<bits/stdc++.h>
using namespace std;
int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n, ans=0;
	string operation;
	cin>>n;
	while(n--) {
		cin>> operation;
		if(operation[1] == '+') ans=ans+1;
		else ans=ans-1;
	}

	cout<<ans;
	
	return 0;
}