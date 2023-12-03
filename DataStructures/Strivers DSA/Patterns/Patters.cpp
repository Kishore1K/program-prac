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
        void pattern11(int n){
            int start = 1;
            for(int i=0; i<n; i++){
                if(i%2==0) start=1;
                else start=0;
                for(int j=0; j<=i; j++){
                    cout<<start;
                    start=1-start;

                }
                cout<<endl;
            }
        }
        void pattern12(int n){
            int spaces=2*(N-1);
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout<<i;
                }
                // spaces
                for(int j=1; j<=spaces; j++){
                    cout<<" ";
                }

                for(int j=i; j>0; j--){
                    cout<<i;
                }
                cout<<endl;
                spaces-=2;
            }
        }
        void pattern13(int n){
            int count=1;
            for(int i=0; i<n; i++){
                for(int j=0; j<i; j++){
                    cout<<count<<" ";
                    count+=1;
                }
                cout<<endl;
            }
        }
        void pattern14(int n){
            for(int i=0; i<n; i++){
                for(char j='A'; j<'A'+i; j++){
                    cout<<j<< " ";
                }
                cout<<endl;
            }
        }
        void pattern15(int n){
            for(int i=n; i>0; i--){
                for(char j='A'; j<'A'+i; j++){
                    cout<<j<< " ";
                }
                cout<<endl;
            }
        }  
        void pattern16(int n){
            char text='A';
            for(int i=0; i<n; i++){
                for(char j=0; j<=i; j++){
                    cout<<text<< " ";
                }
                text+=1;
                cout<<endl;
            }
        }     
        void pattern17(int n){
            for(int i=0; i<n; i++){
                char text='A';
                int breakpoint = (2*i+1)/2;
                // spaces
                for(int j=0;j<n-i+1; j++){
                    cout<<" ";
                }
                for(int j=0; j<2*i+1; j++){
                    cout<<text<<" ";
                    if(j<=breakpoint) text++;
                    else text--;
                }
                for(int j=0;j<n-i+1; j++){
                    cout<<" ";
                }
                cout<<endl;
            }
        }
        void pattern18(int n){
            for(int i=0; i<n; i++){
                for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
                    cout<<ch<<" ";
                }
                cout<<endl;
        
            }
        }
        void pattern19(int n){
            int spaces=0;
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i; j++){
                    cout<<"*"<<" ";
                }
                for(int j=0; j<spaces; j++){
                    cout<<"  ";
                }
                for(int j=0; j<n-i; j++){
                    cout<<"*"<<" ";
                }
                spaces+=2;
                cout<<endl;
            }
            spaces = 2*n-2;
            for(int i=1; i<=n; i++){
                
                for(int j=0; j<i; j++){
                    cout<<"*"<<" ";
                }
                for(int j=0; j<spaces; j++){
                    cout<<"  ";
                }
                for(int j=0; j<i; j++){
                    cout<<"*"<<" ";
                }
                spaces-=2;
                cout<<endl;
            }
        }
        void pattern20(int n){
            int spaces = 2*n-2;
            for(int i=1; i<=2*n-1; i++){
                int stars = i;
                if(i>n) stars = 2*n-i;
                for(int j=1; j<=stars; j++){
                    cout<<"*";
                }
                for(int j=1; j<=spaces; j++){
                    cout<<" ";
                }
                for(int j=1; j<=stars; j++){
                    cout<<"*";
                }
                cout<<endl;
                if(i<n) spaces-=2;
                else spaces+=2;
            }
        }
        void pattern21(int n){
            
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==0 || i==n-1 || j==0 || j==n-1){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
                }
                cout<<endl;
            }
        }
        void pattern22(int n){
            
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==0 || i==n-1 || j==0 || j==n-1){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
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