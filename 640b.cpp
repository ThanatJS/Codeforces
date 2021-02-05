#include<bits/stdc++.h>

using namespace std;

void resolve(int nn1,int nn2) {

}

int main() {
	int t;
	cin >> t;
	while(t--){
		int nn1,nn2;
		cin >> nn1 >> nn2;
		int an1 = nn1-(nn2-1);
		if(an1 > 0 && an1%2 == 1){
			cout << "YES" << '\n';
			for(int i =0;i < nn2-1;i++) cout << "1 ";	
			cout << an1 << '\n';
			continue;
		}
		int an2 = nn1-2*(nn2-1);
		if(an2 > 0 && an2%2 == 0){
			cout << "YES" << '\n';
			for(int i=0;i < nn2-1;i++) cout << "2 ";	
			cout << an2 << '\n';
			continue;
		}
		cout << "NO" ;
		//resolve(n1,n2);
		cout << '\n';
	}
	return 0;
}
