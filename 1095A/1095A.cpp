#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string a;
  int sk = 0;
  for (int i = 0; i < n; i += sk) {
    a += s[i];
    sk++;
  }
  cout <<a<<endl;
  return 0;
}
