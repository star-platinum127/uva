#include <iostream>
#include<vector>
#include<algorithm> 
using namespace std;




int main() {
	vector <int> a,c,d,e;
	int i=0,j=0;
	int b;
	while(cin>>b){
		a.push_back(b);
	}
	/* 
	for(int i=1;i<=a[1];i++){
		c.push_back(a[-i]);
	}
	*/
	for(i=2;i<a[1]+2;i++){
		c.push_back(a[i]);
	}
	for(int i=1;i<=a[0];i++){
		d.push_back(i);
	}
	for(i=0;i<a[0];i++){
		for(j=0;j<a[1];j++){
			if(d[i]==c[j]){
				d[i]=21;
			}
		}
	}
	for(i=0;i<d.size();i++){
		if(d[i]!=21){
			e.push_back(d[i]);
		}	
	}
	if(e.size()>1){
		for(j=0;j<e.size()-1;j++){
			cout<<e[j]<<" ";
		}
		cout<<e[e.size()-1];	
	}else if(e.size()==1){
		cout<<e[0];
	}else{i=0;}
	
	return 0;
}
