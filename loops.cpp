// #include<iostream>
// using namespace std;
//program to find out sum of natural numbers till n
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     for(int counter=1 ; counter<=n ; counter++){
//         sum = sum + counter;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//program to display multiplication table upto 10
// #include <iostream>
// using namespace std;

// int main()
// {
// int n;

// cout<< "Enter a positive integer: ";
// cin>>n;

// for (int i = 1; i <= 10; ++i) {
// cout << n << " * " << i << " = " << n * i << endl;
// }

// return 0;
// }

#include <iostream>
using namespace std;
int main() {
 int number;
 int add = 0;
 cout << "Enter a number: ";
 cin >> number;
 while (number >= 0) {
 
 cout << "Enter a number: ";
 cin >> number;
 add+=number;
  cout << "\nThe sum is " << add << endl;
 }


 return 0;
}