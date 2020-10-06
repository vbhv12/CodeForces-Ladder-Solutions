//Problem refer:
//https://codeforces.com/contest/255/problem/A
#include<iostream>
using namespace std;
int main() {
	int n, x, chest=0, biceps=0, back=0;
	cin>>n;
//	int arr[n];
	for(int i=0; i<n; ++i) {
		cin>>x;
		if(i%3==0) chest+=x;  //checking divisibility by 3
		else if((i-1)%3==0) biceps+=x;
		else if((i-2)%3==0) back+=x;
	}
	if(chest>=biceps) {
		if(chest>back) cout<<"chest";
		else cout<<"back";
	}
	else if(biceps>chest){
		if(biceps>back) cout<<"biceps";
		else cout<<"back";
	}
	
}
