#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n,b,a;
	cin >> t;
	while(t--){
		cin >> n >> b >> a; 
		string str;
		for(int i=0;i < n;i++){
			str = 'a'+(i%a);
			cout << str;
		}


		cout << '\n';
	}
	return 0;
}
