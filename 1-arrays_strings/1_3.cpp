/*
  find if two strings are permutation of each other  .
  IMP : which charset ASCII or UNICODE etc.
  CASE 1: size > 256
  CASE 2 : size <=256

  OTHER APPROACH 1 : Brute Force , O(n^2)
  OTHER APPROACH 2 : Sort the string
*/
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main() {
  string in1;
  string in2;
  //map<char,int> hash_map;
  //char c;

  cout<<"enter the string 1 : "; 
  //cin>>in1;
  getline(cin, in1);

  cout<<"enter the string 2 : "; 
  //cin>>in2;
  getline(cin, in2);
  cout<<"string 1:"<<in1<<endl; 
  cout<<"string 2:"<<in2<<endl; 
  if (in1.length() != in2.length()) {
    cout << "two strings are not anagrams/permutation";
  }
  else { 
    sort(in1.begin(), in1.end());
    sort(in2.begin(), in2.end());
    if (in1.compare(in2) != 0) {
      cout<<"not anagrams";
    }
    else {
      cout<<"anagrams";
    }
  }
  cout<<endl;
}
    
