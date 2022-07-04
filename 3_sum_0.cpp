#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// int compvar(const void *one, const void *two)
// {
//     int a = *((int*)one);
//     int b = *((int*)two);
//     if (a<b)
//        return -1;
//     if (a == b)
//        return 0;
//     return 1;   

// }

vector<vector<int> > threeSum(vector<int> &A) {

    int n = A.size();
    int i,j,k;
    long int sum, sum_req;
    sort(A.begin(), A.end());

    

    vector<int> temp(3,0);
    vector<int> temp1(3,0);

    vector<vector<int>> L;
    i=0;
    while(i < n-2){
        k = n-1;
        sum_req = long(0)-long(A[i]);
        j = i+1;

        while(j<k){
            sum = (long)A[j] + (long)A[k];
            if(sum > sum_req){
                k--;
            }
            else if(sum < sum_req){
                j++;
            }
            else if(sum == sum_req){
                //          cout<<"j is:"<<j<<"\n";
                //          cout<<"k isK"<<k<<"\n";
                // cout<<"element 1 is"<<A[i]<<" ";
                // cout<<"element 2 is"<<A[j]<<" ";
                // cout<<"element 3 is"<<A[k]<<" \n";
                    // temp1[0] = A[i];
                    // temp1[1] = A[j];
                    // temp1[2] = A[k];
                    // sort(temp1.begin(),temp1.end());
                
                // if((A[i] == L[L.size()-1][0] && A[j] == L[L.size()-1][1] && A[k] == L[L.size()-1][3])){
                //     i=i;
                // }
            //    else{
                    temp[0] = A[i];
                    temp[1] = A[j];
                    temp[2] = A[k];
                    
                    // sort(temp.begin(),temp.end());
                    L.push_back(temp);
            //    }
                j++;
                k--;
                while(A[j] == A[j-1]){
                    j++;
                }
                while(A[k] == A[k+1]){
                    k--;
                }
                
                
                // if(A[j] == A[j-1]){
                //     j++;
                // }
                // else if(A[k] == A[k-1]){
                //     k--;
                // }
            }

        }
        i++;
        while(A[i] == A[i-1]){
                    i++;
                }
        
    }

    return L;


}



int main(){
    // vector<int> A {1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3};
    vector<int> A {2147483647, -2147483648, -2147483648, 0, 1};
    cout<<A[1] + A[2]<<"\n";
    vector<vector<int>> X = threeSum(A);
    cout<<"\n";
    for(int i=0; i< X.size(); i++){
        for(int j=0; j< 3; j++){
            cout<<X[i][j]<<" ";
        }
        cout<<"\n";
    }


}