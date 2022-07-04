#include<iostream>
using namespace std;

int max(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    
    
    int a[8] = {-1,2,4,-3,5,2,-5,2};
    int sum = 0;
    int best = 0;
    for(int i=0; i < 8 ; i++){
        sum = max(a[i], sum + a[i]);
        cout<<"current sum is:"<<sum<<"\n";
        best = max(sum, best);
        cout<<"current best is:"<<best<<"\n";

    }
    
    cout<<"the best is :"<<best;
    return 0;



}