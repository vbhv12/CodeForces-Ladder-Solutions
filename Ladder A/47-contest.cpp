#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, a, b) for(short i=a; i<b; ++i)
#define FORR(i, a, b) for(int i=a; i>b; --i)
#define ll long long
using namespace std;

float calcPoints(int p, int t) {
	return max((3*p)/10, (p-(p/250)*t));
}

int main() {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	short a, b, c, d;
	cin>>a>>b>>c>>d;
	float MishaScore = calcPoints(a, c);
	float VasyaScore = calcPoints(b, d);
	if(MishaScore==VasyaScore) cout<<"Tie";
	else if(MishaScore>VasyaScore) cout<<"Misha";
	else cout<<"Vasya";


	return 0;
}