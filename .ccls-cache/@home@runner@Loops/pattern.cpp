#include<iostream>
using namespace std;

int main(){
    // SOLID RECTANGLE
  int row,col;
  cout<<"SOLID RECTANGLE\n";
  cin>>row>>col;
  for(int i = 1;i<=row;i++){
    for(int j = 1;j<=col;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}