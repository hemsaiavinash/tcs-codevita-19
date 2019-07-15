/* Holes and Balls */
#include<iostream>
using namespace std;

/* Main function */
int main(){
    //Variable declaration
    int nHoles, nBalls, diaHoles[50], diaBalls[1000];
    int i, j, holeCapacity[50];
    int ballPos[1000];
    
    //Inputs
    cin>>nHoles; //No. of Holes
    for(i=0;i<nHoles;i++){
        cin>>diaHoles[i]; //Diameter of each Hole
    }
    cin>>nBalls; //No. of Balls
    for(i=0;i<nBalls;i++){
        cin>>diaBalls[i]; //Diameter of each ball
    }

    //Logic
    for(j=0;j<nHoles;j++){
        holeCapacity[j] = j+1;
    }
    
    for(i=0;i<nBalls;i++){
        ballPos[i] = 0;//Initialization
        
        for(j=nHoles-1;j>=0;j--){
            if(diaBalls[i]<=diaHoles[j] && holeCapacity[j]>0){//holeCapacity[j] will be decreased upon the falling of every ball.
                ballPos[i] = j+1;
                // cout<<"Hole: "<<j+1<<" Ball: "<<i+1<<" "<<diaBalls[i]<<" holeCapacity: "<<holeCapacity[j];
                holeCapacity[j]--;
                // cout<<" "<<holeCapacity[j]<<endl;
                // continue;
                break;
            }
        }
    }

    //Output
    for(i=0;i<nBalls;i++){
        //Size of this array is the same as diaBalls as we are just calculating their positions;
        cout<<ballPos[i];
        if(i<nBalls-1)
            cout<<" ";
    }

    return 0;
}
