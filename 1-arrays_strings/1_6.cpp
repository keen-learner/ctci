/*
  Given an image represented  by an NxN matrix, where each pixel in  the image is 4
  bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
*/

// compile with g++ -std=c++11, because used to_string() from <string> header

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  //int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
  int n = 3;
  
  for (int i = 0; i < n; i++ ) {
    for (int j = 0; j < n; j++) {
      cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
  }

  for (int layer = 0; layer < n/2; layer++) {
    int offset;
    for(offset = 0; layer+offset < n-1-layer; offset++) {
      int temp;
      temp = a[layer][layer+offset];
      a[layer][layer+offset] = a[n-1-layer-offset][layer];

      temp = temp + a[layer+offset][n-1-layer];
      a[layer+offset][n-1-layer] = temp - a[layer+offset][n-1-layer];
      temp = temp - a[layer+offset][n-1-layer];

      temp = temp + a[n-1-layer][n-1-layer-offset];
      a[n-1-layer][n-1-layer-offset] = temp - a[n-1-layer][n-1-layer-offset];
      temp = temp - a[n-1-layer][n-1-layer-offset];
      a[n-1-layer-offset][layer] = temp;
    }
    cout<<"layer: "<<layer<<endl;

    for (int i = 0; i < n; i++ ) {
      for (int j = 0; j < n; j++) {
        cout<<a[i][j]<<"\t";
      }
      cout<<"\n";
    }

  }

cout<<"\n";

  for (int i = 0; i < n; i++ ) {
    for (int j = 0; j < n; j++) {
      cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
  }

}
    
