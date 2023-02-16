// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b;
//     int c = 12;
//     int d ; 
//     d = c++;
    
//     b=++a;
//     cout<<a<<" "<<b<<endl<<"\n";
//     cout<<c<<" "<<d;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    // // int i = 1;
    // //     //1   //3
    // // i = i++ + ++i ;
    // // cout<<i<<endl;
    // int i = 1;
    // int j = 2;
    // int k;
    //   //1  2    1     2    3      4
    // k = i + j + i++ + j++ + ++i + ++j;
    
    // // cout<<i<<" "<<j<<" "<<" "<<k<<endl;
    // int i  = 0;
    //     //0   0      1     1
    // i = i++ - --i + ++i - i--;
    
    // cout<<i<<endl;

    // int i=1 , j=2 , k=3;
    //         //1    2     3
    // int m = i-- - j-- - k--;
    // cout<<i<<endl; //1
    // cout<<j<<endl; //2
    // cout<<k<<endl; //3
    // cout<<m<<endl; //-4
    // return 0;

//     int i=10, j=20, k;
//    //   10    9     19     20    9     20   10     19
//     k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
//               //10                     19
//     cout<<i<<endl;//10
//     cout<<j<<endl;//20
//     cout<<k<<endl;//-20
//     cout<<i<<" "<<j<<" "<<k;
//     return 0;

      int n ;
      cin>>n;
      if(n>10){
          cout<<"More than 10";
      }else if(n<10){
          cout<<"less than 10"<<endl;
      }
      else{
          cout<<"Equal to 10"<<endl;
      }
      
      return 0;
}