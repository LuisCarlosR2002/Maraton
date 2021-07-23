#include <iostream>

using namespace std;

void fact(int num){
	string x;
	int val=0,res;
	for(int x=0;x<num;x++){
		
		int fact=1;
		res=num-x;
		
		for(int i=1;i<=res;i++){
			
			fact=i*fact;
			
		}
		val+=fact;
		
		
	}
	cout<<val;

}

int main(int argc, char** argv) {
	int num;
	cout<<"Ingrese numero\n";
	cin>>num;
	fact(num);
	
	return 0;
}
