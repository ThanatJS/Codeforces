#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string su[9];
		for(int i=0;i < 9;i++){
			cin >> su[i];
			for(int j=0;j < 9;j++){
				if(su[i][j] == '2')
					su[i][j] = '1';
			}
			cout << su[i] << "\n";
			
		}
	}	


	return 0;
}









