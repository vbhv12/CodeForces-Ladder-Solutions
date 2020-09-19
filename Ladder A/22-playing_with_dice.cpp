#include<bits/stdc++.h>
using namespace std;

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int a, b, player_a=0, draw=0, player_b=0;
	cin>>a>>b;
	for(int i=1; i<=6; ++i) {
		if (abs(i-a) < abs(i-b)) player_a++;
		else if(abs(i-a) == abs(i-b)) draw++;
		else player_b++;
	}
	cout<<player_a<<" "<<draw<<" "<<player_b;

	return 0;
}