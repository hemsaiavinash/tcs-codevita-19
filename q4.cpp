/* Pattern Printing */
#include<iostream>
using namespace std;

int main(){
    /* Variable declarations */
    int n, x;
    int i,j,var=0,temp;
    

    /* Logic */
    cin>>n;
    x = (n*(n+1))/2;
    
    
    for(i=n;i>=1;i--){
        /* Printing '*'s */
        for(j=i;j<n;j++){
            cout<<"**";
        }
        /* Printing 1-10 */
        for(j=1;j<=i;j++){
            cout<<++var<<0;
        }
        /* Printing 20-11 */
        temp = var;
        for(j=1;j<=i;j++){
            cout<<((2*x)+j)-temp;
            if(j<i)
                cout<<0;
        }
        cout<<"\n";

    }

    return 0;
}