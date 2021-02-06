#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int ans = 0;
	for(int i =0; i < 5;i++  ){
		for(int j = 0; j < 5;j++ ){
			cin >> n;
		       	if(n == 1) ans = abs(abs(i+3)-abs(j+3)); 	
		}
	}
	cout << ans << endl;

	return 0;
}
