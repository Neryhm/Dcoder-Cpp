#include<bits/stdc++.h>
using namespace std;

#define vt vector
typedef long long ll;

int main(){
	string s,result;
	cin>>s;
	int count=1;
	char temp=s[0];
	for(int i=1;i<s.size();++i){
		if(s[i]!=temp){
			result+=temp+to_string(count);
			if(count==1) result.erase(result.end()-1);
			temp=s[i];
			count=1;
		}
		else count++;
	}
	result+=temp+to_string(count);
	if(count==1) result.erase(result.end()-1);
	if(s.size()<=result.size()) cout<<s;
	else cout<<result;
}
