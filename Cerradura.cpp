#include<bits/stdc++.h>

using namespace std;
int main(int argc, char** argv) {
	int pos=0,x=0,y=0,z=0,res=0;
	while(cin>>pos>>x>>y>>z){
		res=1080;
		if(x>pos){
			res+=((40-x)+pos)*9;
		}
		else{
			res+=(pos-x)*9;
			
		}	
		
		if(y>x){
			res+=(y-x)*9;
			
		}
		else{
			res+=((40-x)+y)*9;	
		}
		
		if(z>y){
			res+=((40-z)+y)*9;
		}
		else{
			res+=(y-z)*9;
			
		}
		if(pos==0 && x==0 && y==0 && z==0){
			break;
		}
		cout<<res<<endl;
	}
	return 0;
}

