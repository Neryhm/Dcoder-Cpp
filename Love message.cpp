#include<bits/stdc++.h>
using namespace std;

#define vt vector
typedef long long ll;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
		string input;
		cin>>input;
		int result=0;
		for(int j=0;j<input.size();++j) result+=int(input[j])-96;
		cout<<result<<endl;
	}
}
