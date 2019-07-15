/* Marathon Winner */
#include<iostream>
using namespace std;


int main(){
    /* Variable declarations */
    int p, sec, step[100][100];
    int i,j;
    int runr[100],max=0, mh=1,sum[100];

    /* Inputs */
    cin>>p;
    cin>>sec;
    for(i=0;i<p;i++){
        for(j=0;j<=sec;j++){ //j<=sec because last integer i.e step[i][sec] stores no. of steps;
            cin>>step[i][j];
        }
    }

    /* Logic */
    /*for(i=0;i<100;i++){runr[i] = 0;sum[i]=0;}
    
    for(j=0;j<sec;j+=2){
        for(i=j;i<p;i++){
            sum[i] += (step[i][j]*step[i][sec]) + (step[i][j+1]+step[i][sec]);
            if(max<sum[i]){
                max=sum[i];
                mh = i;
            }
        }
        runr[mh]++;
    }
    max = 0;
    for(i=0;i<p;i++){
        if(max<runr[i]){
            mh = i;
        }
    }*/

for(i=0;i<100;i++){runr[i] = 0;sum[i]=0;}
    
    for(j=0;j<sec;j+=2){
        for(i=0;i<p;i++){
            sum[i] += (step[i][j] + step[i][j+1]) * step[i][sec];
            // cout<<"mh: "<<mh<<" Max: "<<max;
            // cout<<" Runner Score: "<<runr[i]<<" Player: "<<i+1<<endl;
            if(max<sum[i]){
                max=sum[i];
                mh = i;
                
            }
        }
        // cout<<mh<<" "<<max<<endl;
        runr[mh]++;
    }
    max = 0;
    for(i=0;i<p;i++){
        if(max<runr[i]){
            mh = i;
        }
    }




    /* Output */
    cout<<mh;

    return 0;
}