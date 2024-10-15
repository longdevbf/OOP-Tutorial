#include<bits/stdc++.h>
using namespace std;

int main(){
//	pair<int, int> p = make_pair(3,4);
//	cout<<p.first<<" "<<p.second;
//	
int n;
cin>>n;
vector<pair<int, int>> v;
for(int i = 0; i < n; i++){
	int a, b;
	cin>>a>>b;
	v.push_back({a, b});
}
for(int i = 0; i < n; i++){
	cout<<v[i].first<<" "<<v[i].second<<endl;
}
}