/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i;
    int n = intervals.size();
    int a1, a2;
    a1 = newInterval.start;
    a2 = newInterval.end;
    int r1, r2;
    vector res1;
    vector res_final;
    for(i=0;i<n;i++){
        r1 = intervals[i].start;
        r2 = intervals[i].end;
        
        if(a1 < r1){
            intervals[i].start = a1;
            if(a2 > r2){
                intervals.end = a2;
            }
            else{
                if(a2 < r2){
                    
                }
            }
        }else{
            if()
        }
    }

    



}
