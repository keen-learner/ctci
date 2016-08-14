/*
  Write a method to replace all spaces in a string with  '%20'. You may assume 
  that the string has sufficient  space at the end of the string to hold the 
  additional  characters,and that you are given the "true" length of the string.
  (Note: if implementing in Java, please use a character array so that you can 
  perform this operation in place.) find if two strings are permutation of 
  each other.
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string in1;
  string in2;

  cout<<"enter the string 1 : "; 
  //cin>>in1; // cin will not take space in input string so getline
  getline(cin, in1);

  cout<<"string 1:"<<in1<<endl; 
  int size = in1.length() + 1;
  const char *c = in1.c_str();
  int count = 0;
  for (int i = 0; i < size; i++ ) {
    if (c[i] == ' ') count++;
  }  
  int newsize = size + 2*count;
  //enum n {n = newsize};
  //char newc[n] = '\0'; // this gives error, difference between const and constant
  char newc[100];
  newc[newsize-1] = '\0';
  for (int i = 0; i < size; i++) {
    newc[i] = c[i];
  }
  cout<<c<<"\t"<<newc<<"\n";
  for (int i = size-2, j = newsize-2; i >= 0 ; i-- ) {
    //cout<<"i:"<<i<<" j:"<<j<<" newc string:"<<newc<<"\n";
    if (newc[i] != ' ') {
      newc[j] = newc[i];
      --j;
    }
    else {
      newc[j] = '0';
      newc[j-1] = '2';
      newc[j-2] = '%';
      j -= 3;
    }
  }
  cout<<c<<"\t"<<newc<<"\n";
  cout<<endl;
}
    
