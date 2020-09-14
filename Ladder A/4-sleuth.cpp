#include<iostream>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int i=str.length()-2;
	while(str[i]==' ') {
		i--;
	}
	str[i] = tolower(str[i]);
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y') {
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}
