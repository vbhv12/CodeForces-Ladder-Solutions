#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(ll i=a; i<b; ++i)
#define FORR(i, a, b) for(ll i=a; i>b; --i)
#define ll long long
using namespace std;

ll calcTotalWeight(string s, ll a, ll b, ll pivot) {
	ll sum=0;
	FOR(i, a, b) {
		if(isdigit(s[i])) sum+=(s[i]-'0')*(abs(pivot-i));
	}
	return sum;
}

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s;
	cin>>s;
	ll pos = s.find('^');
	ll leftWeight=calcTotalWeight(s, 0, pos, pos);
	ll rightWeight=calcTotalWeight(s, pos+1, s.length(), pos);
	if(leftWeight==rightWeight) cout<<"balance";
	else if(leftWeight>rightWeight) cout<<"left";
	else cout<<"right";
	


	return 0;
}