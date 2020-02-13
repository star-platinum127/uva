#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std; 
typedef long long ll;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<ll> v,all;
vector<char> s,final1;
int main(int argc, char** argv) {
	int c;
	string s1;
	string ch;
	while(cin>>c && c!=0){
		getline(cin,ch);
		for(int k=1;k<=ch.size();k++){
			s.push_back(ch[k]);
		}
		int size1=s.size()/c;
		for(int i=0;i<c;i++){
			reverse(s.begin(),s.begin()+size1);
			for(int j=0;j<size1;j++){
				final1.push_back(s[j]);
			}
			reverse(s.begin(),s.end());	
			for(int y=0;y<size1;y++){
				s.pop_back();	
			}
			reverse(s.begin(),s.end());
		}
		s.clear();
		for(int h=0;h<final1.size()-1;h++){
			cout<<final1[h];
		}
		cout<<final1[final1.size()-1]<<endl;
		final1.clear();
	}
	
	return 0;
}
