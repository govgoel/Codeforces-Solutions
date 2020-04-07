#include <iostream>

using namespace std;
int main(){
    int q,k;
    long long int n;
    cin>>q;
    while(q--){
        k=0;
        cin>>n;
        while(n>1){
            if(n%2==0){
                n = n/2;
            }
            else if(n%3==0){
                n = n/3;
                n= n*2;
            }
            else if(n%5==0){
                n = n/5;
                n = n*4;
            }
            else{
                k = -1;
                break;
            }
            ++k;
        }
        cout<<k<<endl;
    }

}
