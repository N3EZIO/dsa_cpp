#include<bits/stdc++.h>

using namespace std;

int braces(string A) {
    
    int n = A.size();
    int i;
    
    stack<string> S;
    
    
    string temp;
    
    i = 0;
    while(i<n){
        temp = "";
        if(A[i] == '('){
            i++;
            while(A[i] != '(' && A[i] != ')'){
                temp.push_back(A[i]);
                i++;
                // S.push(A[i]);
            }
        cout<<"the temp is"<<temp<<"\n";
        if(temp != "" && temp.size()>1){
            S.push(temp);
        }else{
            return 1;
        }
        
        } else if(A[i] == ')'){
            if(!S.empty()){
            S.pop();                
            }
            i++;
            // }else{
            //     return 1;
            // }
        } 
        
        // i++;
    }
    
    
    return 0;

}



int main(){

    cout<<braces("(a+((b*c)+c))");
    return 0;
}

