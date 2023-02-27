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

  // // HOLLOW RECTANGLE
  // cout<<"HOLLOW RECTANGLE\n";
  // int row,col;
  // cin>>row>>col;
  // for(int i = 0;i<row;++i){
  //   if(i==0 || i==(row-1)){
  //     for(int j=0;j<col;++j){
  //       cout<<"* ";
  //     }
  //   }
  //   else{
  //     cout<<"* ";
  //     for(int j = 0;j<(col-2);++j){
  //       cout<<"  ";
  //     }
  //     cout<<'*';
  //   }
  //   cout<<endl;
  // }

  // // HALF
  // cout<<"HALF  \n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;++i){
  //   for(int j = 1;j<=i;++j){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // //INVERTED HALF
  // cout<<"INVERTED HALF  \n";
  // int n;cin>>n;
  // for(int i = 0;i<n;++i){
  //   for(int j=0;j<(n-i);++j){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // //NUMERIC HALF
  // cout<<"NUMERIC HALF  \n";
  // int row;
  // cin>>row;
  // for(int i = 0;i<row;++i){
  //   for(int j = 1;j<=i+1;++j){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  // //NUMERIC INVERTED HALF
  // cout<<"NUMERIC INVERTED HALF  \n";
  // int row;cin>>row;
  // for( int i=0;i<row;++i){
  //   for(int j=1;j<=row-i;++j){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  // //FULL PYRAMID
  // cout<<"FULL PYRAMID\n";
  // int row;
  // cin>>row;
  // for(int i = 0;i<row;i++){
  //   for(int space = 1;space < row-i;space++){
  //     cout<<" ";
  //   }
  //   for(int j = 0;j<=i;++j){
  //     cout<<" *";
  //   }
  //   cout<<endl;
  // }

  // // INVERTED FULL PYRAMID
  // cout<<"INVERTED FULL PYRAMID\n";
  // int row;cin>>row;
  // for(int i = 0;i<row;++i){
  //   for(int space = 1;space<=i;space++){
  //     cout<<" ";
  //   }
  //   for(int j = 0;j<row-i;j++){
  //     cout<<" *";
  //   }
  //   cout<<endl;
  // }


  // //NUMERIC HOLLOW FULL PYRAMID
  // cout<<"NUMERIC HOLLOW FULL PYRAMID\n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = row - i;
  //   for(;space>=1;space--){
  //     cout<<" ";
  //   }
  //   if(i==row){
  //     for(int j = 1;j<=row;j++){
  //       cout<<j<<" ";
  //     }
  //   }
  //   else{
  //   for(int j = 1;j<=i;j++){
  //     if(j==1){cout<<j<<" ";}
  //     else if(j==i){cout<<j<<" ";}
  //     else{cout<<"  ";}
  //        }
  //   }
  //   cout<<endl;
  // }

  // //BUTTERFLY PATTERN;
  // cout<<"BUTTERFLY PATTERN\n";
  // int row;
  // cin>>row;
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   int space = 2*row - 2*i;
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = 1;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // for(int i = row;i>=1;i--){
  //   for(int j = i;j>=1;j--){
  //     cout<<"* ";
  //   }
  //   int space = 2*row - 2*i;
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = i;j>=1;j--){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // // 0-1 PATTERN
  // cout<<"0 - 1 PATTERN\n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=i;j++){
  //     if((i+j)%2==0){
  //       cout<<"1 ";
  //     }
  //     else{
  //       cout<<"0 ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // // RHOMBUS PATTERN
  // cout<<"RHOMBUS PATTERN\n";
  // int row ;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = (row-i);
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = 1;j<=row;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // // NUMBER PATTERN
  // cout<<"NUMBER PATTERN\n";
  // int row;cin>>row;
  // for(int i=1;i<=row;i++){
  //   int space = (row-i);
  //   while(space--){
  //     cout<<" ";
  //   }
  //   for(int j = 1;j<=i;j++){
  //     cout<<j<<" ";
  //   }
  //   cout<<endl;
  // }

  // // PALINDROMIC PATTERN
  // cout<<"PALINDROMIC PATTERN\n";
  // int row;
  // cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = row-i;
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = i;j>=1;j--){
  //     cout<<j<<" ";
  //   }
  //   for(int j = 1;j<i;j++){
  //     cout<<(j+1)<<" ";
  //   }
  //   cout<<endl;
  // }

  // //STAR PATTERN
  // cout<<"STAR PATTERN\n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = (row-i);
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = 1;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   for(int j = 1;j<i;j++){
  //     cout<<"* ";
  //   }cout<<endl;
  // }
  // for(int i = row;i>=1;i--){
  //   int space = row-i;
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   for(int j = 1;j<=i;j++){
  //     cout<<"* ";
  //   }
  //   for(int j = 1;j<=(i-1);j++){
  //     cout<<"* ";
  //   }cout<<endl;
  // }

  // // ZIG-ZAG PATTERN
  // cout<<"ZIG-ZAG PATTERN\n";
  // int n;cin>>n;
  // for(int i=1;i<=3;i++){
  //   for(int j = 1;j<=n;j++){
  //     if((i+j)%4==0 || (i==2 && j%4==0)){
  //       cout<<"* ";
  //     }
  //     else{
  //       cout<<"  ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // //HOLLOW DIAMOND USING STARS
  // cout<<"HOLLOW DIAMOND USING STARS\n";
  // int row;
  // cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = (row-i);
  //   while(space--){
  //     cout<<" ";
  //   }
  //   for(int j = 1;j<=(2*i-1);j++){
  //     if(j==1 || j==(2*i-1)){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }
  // for (int i=row;i>=1;i--){
  //    int space = row-i;
  //    while(space--){
  //      cout<<" ";
  //    }
  //   for(int j = 1;j<=(2*i-1);++j){
  //     if(j==1 || j==(2*i-1)){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  
  // //HOLLOW DIAMIOND INSCRIBED IN A RECTANGLE
  // cout<<"HOLLOW DIAMOND INSCRIBED IN A RECTANGLE\n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=(row-i+1);j++){
  //     cout<<"*";
  //   }
  //   int space = row*2 - 2*(row-i+1);
  //   while(space--){
  //     cout<<" ";
  //   }
  //   for(int j = 1;j<=(row-i+1);j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   int space = 2*row - 2*i;
  //   while(space--){
  //     cout<<" ";
  //   }
  //   for(int j = 1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // //PRINT HOLLOW RHOMBUS
  // cout<<"HOLLOW RHOMBUS\n";
  // int row;cin>>row;
  // for(int i = 1;i<=row;i++){
  //   int space = (row-i);
  //   while(space--){
  //     cout<<"  ";
  //   }
  //   if(i==1 || i ==row){
  //     for(int j = 1;j<=row;j++){
  //       cout<<"* ";
  //     }cout<<endl;
  //   }
  //   else{
  //     cout<<"* ";
  //     for(int j = 1;j<=(row-2);j++){
  //       cout<<"  ";
  //     }
  //     cout<<"* "<<endl;
  //   }
  // }
  
  // //HOLLOW BUTTERFLY PATTERN
  // cout<<"HOLLOW BUTTERFLY PATTERN\n";
  // int row;
  // cin>>row;
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=i;j++){
  //     if(j==1 || j==i){
  //         cout<<"* ";
  //       }
  //     else{
  //       cout<<"  ";
  //       }
  //   }
    
  //   int space = 2*row - 2*i;
  //   while(space--){
  //     cout<<"  ";
  //   }
    
  //   for(int j=1;j<=i;j++){
  //     if(j==i || j==1){
  //       cout<<"* ";
  //     }
  //     else{
  //       cout<<"  ";
  //     }
  //   }
  //   cout<<endl;
  // }
  
  // for(int i = 1;i<=row;i++){
  //   for(int j = 1;j<=(row-i+1);j++){
  //     if(j==1 || j==(row-i+1)){
  //       cout<<"* ";
  //     }
  //     else{
  //       cout<<"  ";
  //     }
  //   }
    
  //   int space = 2*row - 2*(row-i+1);
  //   while(space--){
  //     cout<<"  ";
  //   }

  //   for(int j = 1;j<=(row-i+1);j++){
  //     if(j==1 || j ==(row-i+1)){
  //       cout<<"* ";
  //     }
  //     else{
  //       cout<<"  ";
  //     }
  //   }
  //   cout<<endl;
  // }
  
  //PASCAL'S TRIANGLE

    
  
}