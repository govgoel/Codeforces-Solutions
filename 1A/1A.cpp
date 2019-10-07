
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double m,n,a;
    cin >> n >> m >> a;
    long long int c,d;
    c = ceil(m/a);
    d = ceil(n/a);
    cout << c*d;
	return 0;
}
