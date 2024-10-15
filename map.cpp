#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int, int> mp;
//	mp.insert({100, 200});
//	mp[200] = 300;
//	mp[300] = 400;
//	mp[100] = 333;
//	cout<<mp.size()<<endl;
//	for(auto x: mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
int n; cin>>n;
	for(int i = 0; i < n; i++){
		int tmp;cin>>tmp;	
		mp[tmp] ++;
	}
//	for(auto x : mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
int max_fre = 0;
int res;
for(auto x : mp){
	if(max_fre < x.second){
		max_fre = x.second;
			res = x.first;
}
	}

cout<<res<<" "<<max_fre;
}