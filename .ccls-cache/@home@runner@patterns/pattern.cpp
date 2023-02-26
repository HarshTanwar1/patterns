#include <iostream>
using namespace std;

int main() {
  // // SOLID RECTANGLE
  // int row,col;
  // cout<<"SOLID RECTANGLE\n";
  // cin>>row>>col;
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=col;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // // SOLID square
  // cout<<"SOLID RECTANGLE\n";
  // int n;cin>>n;
  // for(int i = 0;i<n;i++){
  //   for(int j = 0;j<n;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // HOLLOW RECTANGLE
  int row, col;
  cout << "HOLLOW RECTANGLE\n";
  cin >> row >> col;
  for (int i = 1; i <= row; ++i) {
    for (int j = 1; j <= col; ++j) {
      if (i == 1 || i == row || j == 1 || j == col) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}