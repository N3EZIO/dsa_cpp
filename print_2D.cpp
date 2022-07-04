
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > prettyPrint(int A) {


    vector<vector<int>> X;

    vector<int> temp {0,A};
    int i,j;
    int a=A;
    for(int i=0; i< A; i++){
        for(j=0; j< A; j++){
            temp[j] = a - i;
            cout<<temp[j]<<" ";
        }
        cout<<"\n";
        X.push_back(temp);
    }

    return X;


}



int main(){

    vector<vector<int>> A;
    A = prettyPrint(4);

    for(int i=0; i< 4; i++){
        for(int j=0; j<4; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}