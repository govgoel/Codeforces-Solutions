#include <stdio.h>
#include <iostream>

using namespace std;

//Sheldon, Leonard, Penny, Rajesh and Howard
int main(){
    long long int n;
    cin >> n;
    int i = 1;
    while (i * 5 < n){
        n -= i * 5;
        i *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / i] << endl;

    return 0;
}
