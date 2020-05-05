#include <bits/stdc++.h>


using namespace std;
 
int main(){
	int n,t;
	string a; 
	cin >> t;
	n = (t*2)+1;
	int nn = 1;
	int c  = 1;
	int answer = 0;
	string aa = "0123456789";
	int l = (t*2);
	for(int i=0;i < n;i++){
		for(int jj=0;jj < l;jj++){
			cout << " ";
		}
		for(int j=0;j < nn;j++){	
			a += aa[answer];
			if(j <= ((nn-1)/2)-1){
				a += " ";
				answer++;
			}else{
				a += " ";
				answer--;
			}
		}
		a = a.substr(0,a.size()-1);
		cout << a << '\n';
		a = "";
		answer = 0;
		if(c <= ((n-1)/2)){
			nn += 2;
			c++;
			l -= 2;
		}else{
			nn -= 2;
			l += 2;
		}
	}
	return 0;
}
