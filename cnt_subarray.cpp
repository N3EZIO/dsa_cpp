#include<iostream>
#include<vector>

using namespace std;

int sum1(vector<int> &A, int start, int end){

    int i;
    int sum=0;
    for(i= start; i <= end; i++){
        sum += A[i];
    }
    return sum;
}

int solve(vector<int> &A, int B) {
    int start = 0, end = 0,
        count = 0, sum = 0;
    int n = A.size();
 
    while (start < n && end < n) {
        sum = sum1(A, start, end);
        cout<<"the start is "<<start<<"\n";
        cout<<"the end is "<<end<<"\n";
        if(sum < B){
            if(end >= start){
            count+= end - start + 1;
            }
            end++;
        }
        else if(sum >= B){
            // sum -= A[start];
            start++;
        }
    }
 
 
 
    return count;
}



int main(){
    vector<int> vect = { 8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 4, 9, 8, 5};
    cout<<solve(vect, 32);
}




// fucn(){
//        int i;
//     int n= A.size();
//     int l, sum_temp=0, count=0, r;
//         r = 0;
//         l=0;
//         while(l< n && r < n){
//             sum_temp = sum(A, l, i);
//             if(sum_temp < B){
//             count += r-l;
//             r++;
//             }
//          else if(sum_temp >= B){
//             sum_temp -= A[l];
//             l++;
            
//         }
//         }
        
    
//     return count;
// }