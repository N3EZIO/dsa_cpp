#include<bits/stdc++.h>

using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

         for(int j = 0;j<merged.size();j++){
                cout<<merged[j][0]<<" "<<merged[j][1]<<" \n";
        }
        return merged;
    }
        
        // vector<vector<int>> A;
        
        // int i;
        
        // i = 0;
        
        // int n;
        
        // n = intervals.size();
        
        // // sort(intervals.begin(),intervals.end());
        
        // int a,b;
        
        // while(i<n){

        //     a = intervals[i][0];
        //     b = intervals[i][1];

        //     if(A.empty() || A.back()[1] < a){
        //         A.push_back(intervals[i]);
        //     }else if(A.back()[1] > a){
        //         if(A.back()[1] < b){
        //             A.back()[1] = b;
        //         }

        //         i++;
        //     }







        //     // if(b> intervals[i+1][0]){
        //     //     while(b>intervals[i][0]){
        //     //         i++;
        //     //     }
        //     //     i--;
        //     //     if(b>intervals[i][1]){
        //     //         A.push_back({a,b});
        //     //     }else{
        //     //         A.push_back({a,intervals[i][1]});
        //     //         cout<<A[0][0];
        //     //     }

        //     //     i++;
        //     // }else{
        //     //     A.push_back({a,b});
        //     //     i++;
        //     // }

        //     // for(int j = 0;j<A.size();j++){
        //     //     cout<<A[i][0]<<" "<<A[i][1]<<" \n";
        //     // }

        // }


        // return A;
    



int main(){

    vector<vector<int>> A = {{1,3},{2,6},{8,10},{15,16}};

    merge(A);

    return 0;
}