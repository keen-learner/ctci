/* 
  THIS IS A 5ed QUESTION
  Reverse C type char sting  
  OTHER APPROACH 1 : Brute Force , O(n^2)
  OTHER APPROACH 2 : Sort the string
*/
#include <iostream>
#include <string>
#include <map>
#include <new>
#include <cstdio>
#include <cstdlib>

using namespace std;

void reverse(char *start) {

  char temp;
  char *end = start;
  char *orig = start;

  while (*end) ++end;
    --end;
  
  while (start < end) {
    temp = *start;
    *start = *end;
    *end = temp;
    ++start;
    --end;
  }
  cout << "From reverse : ";
  while (*orig)
    cout << *orig++ ;
  cout<< endl;
}

void rec_reverse(char *str) {
  char c = *str;
  if (*str) {
    rec_reverse((++str));
  }
  //cout << *str; // Doesn't Work, changed str to ""
  //if(c) cout << c; Works
  cout << c;  // Works
}

char *buf;

void rec_reverse2(char *str) {
  char c = *str;
  if (*str) {
    rec_reverse2(++str);
  }
  if(c) {
    sprintf(buf,"%c",c);
    ++buf;
  }
}


int main() {

  string s;
  cout<<"enter the string : "; 
  cin>>s;
  
  if (s.length() <= 1 ) {
    cout<<s;
    return 0;
  }

  char *start = (char *)s.c_str();
  //reverse (start);
  
  //rec_reverse(start);
  //cout<<endl;
  
  buf = new char[1+s.length()]; 
  char *orig = buf;
  //buf = (char *)malloc( 1+s.length()); 
  rec_reverse2(start);
  *(buf ) = '\0';
  buf = orig;
  while(*orig) {
    cout << *orig;
    orig++;
  }
  cout<<endl;
  delete[] buf;
}
    
