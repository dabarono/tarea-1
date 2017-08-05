#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main(void){
  int i=501;
  for (i;i<1400;i=i+2){
    int j=2;
    while (i%j!=0 && j<(i/2)+1){
      j=j+1;
      }
    if(i%j!=0){
	       cout<<i<<endl;
	       }
  }
}

