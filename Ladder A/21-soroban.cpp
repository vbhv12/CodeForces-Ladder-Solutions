#include<bits/stdc++.h>
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	long long int n;
	cin>>n;
	if(n==0) {
		cout<<"O-|-OOOO";
		return 0;
	}
	int num;
	while(n>0) {
		num = n%10;
		if(num<5) cout<<"O-|";
		else {
			cout<<"-O|";
			num = num - 5;
		}
		switch(num) {
			case 0 : cout<<"-OOOO";
					 break;
			case 1 : cout<<"O-OOO";
					 break;
			case 2 : cout<<"OO-OO";
					 break;
			case 3 : cout<<"OOO-O";
					 break;
			case 4 : cout<<"OOOO-";
		}

		n/=10;
		cout<<"\n";
	}


	return 0;
}