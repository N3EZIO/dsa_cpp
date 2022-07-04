// #include<iostream>
// #include<algorithm>
// #include<vector>

#include<bits/stdc++.h>

using namespace std;

vector<int> removeDups(vector<int> &A){
    vector<int> X;
    X.push_back(A[0]);

    int i=1;

    while(i<A.size()){
        if(A[i] == A[i-1]){
            i++;
        }else{
            X.push_back(A[i]);
            i++;
        }

    }
  
    return X;

}

vector<int> intersect(const vector<int> &A, const vector<int> &B) {

    unordered_map<int,int> x;
    vector<int> result;
    // A = removeDups(A_new);
    // B = removeDups(B_new);
    int i,j;
    if(A.size() < B.size()){
        for(i=1;i<=A.size();i++){
            x[A[i-1]] = i; 
        }
        for(i=0; i< B.size(); i++){
            if(x[B[i]]){
                // cout<<"duplicate found="<<x[B[i]]<<"\n";
                // cout<<"map index="<<x[B[i]]<<"\n";
                if(B[i] == 33){
                    // cout<<"33 mc";
                }
                result.push_back(B[i]);
            }
        }
    }else if( A.size() >= B.size()) {
       for(i=1;i<= B.size();i++){
            x[B[i-1]] = i; 
        } 
        for(i=0; i< A.size(); i++){
            if(x[A[i]] > 0){
                result.push_back(A[i]);
                 cout<<"duplicate found="<<A[i]<<"\n";

                 cout<<"map index="<<x[B[i]]<<"\n";

            }
        }
    }

    return removeDups(result);
    // return result;
    // for(int c=0; c< result.size(); c++){
    //     cout<<result[c]<<" ";
    // }

}



int main(){
    vector<int> A{ 1, 3, 8, 10, 13, 13, 16, 16, 16, 18, 21, 23, 24, 31, 31, 31, 33, 35, 35, 37, 37, 38, 40, 41, 43, 47, 47, 48, 48, 52, 52, 53, 53, 55, 56, 60, 60, 61, 61, 63, 63, 64, 66, 67, 67, 68, 69, 71, 80, 80, 80, 80, 80, 80, 81, 85, 87, 87, 88, 89, 90, 94, 95, 97, 98, 98, 100, 101 };
    vector<int> B{5, 7, 14, 14, 25, 28, 28, 34, 35, 38, 38, 39, 46, 53, 65, 67, 69, 70, 78, 82, 94, 94, 98};

    intersect(A,B);

    return 0;
}