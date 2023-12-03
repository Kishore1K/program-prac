#include<bits/stdc++.h>
using namespace std;
/*
Ref : https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
*/
class Solution{
    public:
        void pattern1(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<"*"<<" ";
                }
                cout<<endl;
            }
        }
        void pattern2(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<i; j++){
                    cout<<"* ";
                }
                cout<<end;
            }
        }
        void pattern3(int n){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
        void pattern4(int n){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
        void pattern5(int n){
            for(int i=0; i<n; i++){
                for(int j=n; j>i; j--){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        void pattern6(int n){
            for(int i=1; i<=n; i++){
                for(int j=n; j>=i; j++){
                    cout<<n-j+1<<" ";
                }
                cout<<endl;
            }
        }
        void pattern7(int n){
            
            for(int i=0; i<n; i++){
                // spaces
                for(int j=0; j<n-i-1; j++){
                    cout<<" ";
                }
                // starts
                for(int j=0; j<(2*i+1); j++{
                    cout<<"* ";
                }
                // spaces
                for(int j=0; j<n-i-1; j++){
                    cout<<" ";
                }
            }
          
        }
        void pattern8(int n){
            for(int i=0; i<n; i++){
                // spaces
                for(int j=0; j<i; j++){
                    cout<<" ";
                }
                // stars
                for(int j=0; j<(2*n-(2*i+1))){
                    cout<<"* ";
                }
                // spaces
                for(int j=0; j<i; j++){
                    cout<<" ";
                }
            }
        }
        void pattern9(int n){
            for(int =0; i<n; i++){
                // spaces 
                for(int j=0; j<n-i+1; j++){
                    cout<<" ";
                }
                // stars
                for(int j=0; j<2*i+1; j++){
                    cout<<"* ";
                }
                // spaces
                for(int j=0; j<n-i+1; j++){
                    cout<<" ";
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<i; i++){
                    cout<<" ";
                }
                for(int j=0; j<2*n-(2*i+1); j++){
                    cout<<"* ";
                }
                for(int j=0; j<i; i++){
                    cout<<" ";
                }
            }
        }
        void pattern10(int n){
            for(int i=0; i<2*n-1; i++){
                int stars=i;
                if(i>n) stars = 2*n-1;
                for(int j=0; j<=stars; j++){
                    cout<<"* ";
                }
                cout<<endl;
            }

        }

        
};

int main()
{   

    int N = 5;

    pattern1(N);

    return 0;
}