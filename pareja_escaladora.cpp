#include <bits/stdc++.h>


using namespace std;
int main() {
	int m,r,cont=0,y=1,aux,x=0,mayor;
	cin>>m>>r;
	int a[m];
	int t[m];
	
	for(int i=0;i<m;i++){
		cin>>a[i];
		t[i]=0;
	}

	for(int i =0;i<m;i++){
		aux=a[y];
		if(abs(a[i]-aux)<=r){
			cont++;
			t[x]=cont;
		}
		else{
			cont=0;
			x++;
		}
		y++;
	}

	mayor=t[0];
	for(int i=1;i<m;++i){
    	if(t[i]>mayor){
    		mayor=t[i];
    		
    	}
    	
    
    	
	}
	cout<<mayor+1;
	
	return 0;
}
"# Maraton" 
