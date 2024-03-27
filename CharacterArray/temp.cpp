#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  map<char, int> mapp;
  vector<char> vec = {'a', 'b', 'c', 'c', 'a', 'a'};
  for (char c : vec) {
    mapp[c]++;
  }

  for (auto i = mapp.begin(); i != mapp.end(); i++) {
    cout << i->first << " " << i->second << endl;
  }

  cout << mapp.size();
  return 0;
}
