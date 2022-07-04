#include<bits/stdc++.h>
// #include<string.h>

using namespace std;

string simplifyPath(string A) {
    
    stack<string> S;
    
    int n = A.size();
    
    int i = 0;
    string temp = "";
    while(i<n){
        if(A[i] == '/'){
            if(A[i+1] == '/'){
                i = i+2;
            }
            else{
                i++;
            }
            // if(A[i+1] == '.'){
            //     i++;
            // }
        }
        else if(A[i]== '.'){
            // cout<<"dot";
            
            if(A[i+1] == '.'){
                // cout<<"popped";
                if(S.empty() == 1){
                    i = i+2;
                }else{
                 
                S.pop();
                i = i+2;   
                }
            }else{
                i++;
            }
        } else{
            while(A[i] != '/' && i < n){
                temp.push_back(A[i]);
                i++;
            }
            // cout<<"temp is:"<<temp;
            S.push(temp);
            temp = "";
        }
    }
    
    
    string F="/";
    stack<string> B;
    string c;
    while(!S.empty()){
        c = S.top();
        S.pop();
        B.push(c);
        // F.push_back('/');
    }
    while(!B.empty()){
        c = B.top();
        B.pop();
        F.append(c);
        F.push_back('/');
    }
    // reverse(F.begin(),F.end());
    if(F.size()>1){
    F = F.substr(0,F.size()-1);
    }
    return F;
}




int main(){

    cout<<simplifyPath("hello");


    return 0;
}