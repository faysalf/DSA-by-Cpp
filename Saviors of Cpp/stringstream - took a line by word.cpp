#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  getline(cin, s);
  stringstream ss;
  ss << s;
  string word;
  while (ss >> word) {
    cout << word << '\n';
  }cout << '\n';

  //abar normally korle be like
  string f;
  while (cin >> f) cout << f << '\n';

  return 0;
}