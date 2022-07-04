#include<bits/stdc++.h>

using namespace std;


int charToInt(char c){
    int a = c - '0';
    return a;
}


string decode_str(string &s, int &i){
        string result;
        result = "";
    while(i<s.size() && s[i] != ']'){
        int rep;
        rep = 0;

        if(charToInt(s[i]) > 0 && charToInt(s[i]) < 10 ){
            while(charToInt(s[i]) > 0 && charToInt(s[i]) < 10  && i <s.length()){
                rep = rep*10 + charToInt(s[i]);
                i++;
            }
            i++;
            string r = decode_str(s,i);

            while(rep-- > 0){
                result += r;
            }
            i++;
        }
        else{
            result += s[i++];
        }
    }

    return result;

}

string decodeString(string s){
    int i = 0;
    return decode_str(s,i);    

}



int main(){
    cout<<decodeString("3[a2[c]]");
    string s = "3[abc]";

    return 0;
}