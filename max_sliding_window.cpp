class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int B) {
            vector<int> S;
    const int n = A.size();
    int i;
    int max1, max_temp;
    int temp_index = 0;
    int k;
    k = 0;
    while(k<=n-B){
        max1 = INT_MIN;
        max_temp = INT_MIN;
        for(i = k; i<B+k; i++){
            
            if(A[i]> max1){
                max1 = A[i];
                temp_index = i;
            }
            
            // max1 = max(A[i], max1);
            // if(max1 != max_temp){
            //     temp_index = i;
            //     max_temp = max1;
            // }
    }
    
    S.push_back(max1);
    
    k = k+1;
        while(k<= temp_index){
            if(A[k+B-1] > max1){
                max1 = A[k+B-1];
                // max_temp = max1;
                temp_index = k+B-1;
            }
            k++;
            
            if(k>temp_index){
                break;
            }
            S.push_back(max1);
        }
    }
    
    return S;
    }
};