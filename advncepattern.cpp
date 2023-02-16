/* 1.
 #include<iostream>
using namespace std;
int main(){
    // Inverted pattern  
    /*out put 1 2 3 4 5
              1 2 3 4 
              1 2 3
              1 2
              1

    */
   /*
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
    }
    return 0;
}
*/
/* 2.
#include<iostream>
using namespace std;
int main(){
    /* 0-1 pattren output 1
                          0 1
                          1 0 1
                          0 1 0 1
                          1 0 1 0 1   for n=5
                           
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        if((i+j) % 2==0){
            cout<<"1"<<" ";
        }else{
            cout<<"0"<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 3.
#include<iostream>
using namespace std;
/* rhombus output * * * * *
                 * * * * *
                * * * * *
               * * * * *
              * * * * *
*/
/*              
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/

/* 4.
#include<iostream>
using namespace std;
int main(){
    /* Number pattern
             1
            1 2
           1 2 3
          1 2 3 4
         1 2 3 4 5
*/
/*

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        
    cout<<endl;
    }
    return 0;
}
*/
/* 5  palindromic pattern
              1
            2 1 2
           3 2 1 2 3
          4 3 2 1 2 3 4
         5 4 3 2 1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
*/
/* 6  Star pattern
            *
           * *
          * * *
         * * * *
          * * *
           * *
            *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;

}
*/
/* 7. zig zag   n=9 
      *   *
     * * * *
    *   *   *
    */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}