/* Similar Char */
#include<iostream>
using namespace std;

int main(){
    /* Variable declarations */
    int n,nQr,query[10000]; //9  2  {3,1}
    char letter[500000];//abacsddaa
    int i,j, count;
    char key;

    /* Input */
    cin>>n;
    for(i=0;i<n;i++){
        cin>>letter[i];
    }
    cin>>nQr;
    for(i=0;i<nQr;i++){
        cin>>query[i];
    }

    /* Logic */
    for(i=0;i<nQr;i++){ //Loop 1
        count = 0;
        key = letter[query[i]-1];
        for(j=0;j<query[i]-1;j++){ //Loop1(Loop 2)
            if(letter[j]==key){
                count++;
            }
            
        }
        cout<<count<<"\n";
    }

    return 0;
}