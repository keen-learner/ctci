/*
  find unique char in a string .
  IMP : which charset ASCII or UNICODE etc.
  CASE 1: size > 256
  CASE 2 : size <=256

  OTHER APPROACH 1 : Brute Force , O(n^2)
  OTHER APPROACH 2 : Sort the string
*/
#include <iostream>
#include <string>
#include<map>

using namespace std;

int main() {
  string s;
  map<char,int> hash_map;
  char c;

  cout<<"enter the string : "; 
  cin>>s;

  if (s.length() > 256) {
    cout << "no unique char";
    return 0;
  }
  for (int i = 0; i < s.length(); i++) {
    c = s[i];
    if (hash_map.count(c) <= 0)
      hash_map[c] = 1;
    else 
      hash_map[c] += 1;
    //cout<<hash_map[c]<<endl; 
  }
  for (int i = 0; i < s.length(); i++) {
    c = s[i];
    //cout<<hash_map[c]<<endl; 
    if (hash_map[c] == 1) {
      cout<<"unique char is : "<<c<<endl ;
      break;
    }  
  }
}
    
