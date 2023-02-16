// #include<iostream>
// //program to find out number ranging from 0-100 and skipping the number that are divisible by 3
// using namespace std;
 
// int main(){

//     for(int i = 0 ; i < 100 ; i++)
//     {
//         if(i%3==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// //checking whether a given number is prime or not
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i;
//     for( i=2 ; i < n ; i++){
//         if(n%i==0){
//             cout<<"Non-prime"<<endl;
//             break;
//         }
//     }
//     if(i==n){
//      cout<<"prime"<<endl;
//     }
   

//     return 0 ;
// }

#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    int num;
    for( num==a ; num<=b ; num++)
{
    int i;
    for(i = 2 ; i < num ; i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
    cout<<num<<endl;
}
}
return 0;

}