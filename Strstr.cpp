#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int strStr(const string A, const string B) {
    int n2 = B.size();
    int n1 = A.size();

    if(n1 == 1 && n2 == 1){
         if(A[0] == B[0]){
                return 0;
    }        
    }

    int i, j;
    int temp;
    for(i=0;i<n1-n2;i++){
        if(A[i] == B[0]){
            temp = i;
            j=0;
            while(j<n2){
                cout<<"A[i] is:"<<A[i]<<'\n';
                cout<<"B[i] is:"<<B[i]<<'\n';
                if(A[i] == B[j]){
                    i++;
                    j++;

                }else{
                    i = temp;
                    break;
                }
                if(j == n2-1 && A[i] == B[j]){
                    cout<<"executed";
                    // return 1;
                    return (i-n2) + 1;
                }
                
                
                
            }
        } else if(i == n1 - n2 +1){
            return -1;
        }

    }

    return -1;
}


int main(){

    string A = "bbaabbbbbaabbaabbbbbbabbbabaabbbabbabbbbababbbabbabaaababbbaabaaaba";
    string B = "babaaa";

    cout<<"the result is:"<<strStr(A,B);

    return 0;

}