// #include <iostream>
// using namespace std;
// //write a program to print out only odd numbers till n
// int main() {
// int n;
// cout<<"Enter  number: ";
// cin>>n;
// for (int i=1; i<=n; i++) {
// if (i%2==0) { // i is even
// continue;
// }

//  cout<<i<<endl;

// }
// return 0;
// }

//write a program to check out whtther a given number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int i;
//     for(i = 2 ; i<=n ; i++ ){
//         if(n%i==0){
//             break;
//              cout<<"non-prime<<endl";
           
//         }
//     }
//     if(i==n){
//         cout<<"prime"<<endl;
//     }
//     return 0;
// }

//write a program to prtnt out prime number in a given range
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    for(int i = a ; i<=b ; i++){
        int n;
    for(n = 2 ; n < i ; n++){
        if(i%n==0){
            break;
        }
    }
    if(i==n){
        cout<<i<<endl;
    }
    }
    
    return 0;
}