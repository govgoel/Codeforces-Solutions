#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int plc=0;
int untrtd=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		plc+=x;
		
	}
	else {
		if(plc<1){
		++untrtd;
		}
		else {
			--plc;
		}
	}
}
cout<<untrtd;
	return 0;
}
