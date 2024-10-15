#include<bits/stdc++.h>

using namespace std;

int main(){
//	set<int> s;
	int n;
	cin>>n;
//	for(int i = 0; i < n; i++){
//		int tmp;
//		cin>>tmp;
//		s.insert(tmp);
//	}
//	cout<<s.size();
//	if(s.find(4) != s.end()){
//		cout<<"Found\n";
//	}else{
//		cout<<"Not Found\n";
//	}
multiset<int> s;
for(int i = 0; i < n; i ++){
	int tmp;cin>>tmp;
	s.insert(tmp);
}
for(auto x : s){
	cout<<x<<" ";
}
	auto it = s.find(5);
	cout<<distance(s.begin(), it);
}