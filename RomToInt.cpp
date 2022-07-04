#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<map>
#include<vector>
using namespace std;


int romanToInt(string A) {

    unordered_map<char,int> RomtoInt;

    RomtoInt.insert({ 'I', 1 });
    RomtoInt.insert({'V', 5});
    RomtoInt.insert({ 'X', 10 });
    RomtoInt.insert({ 'L', 50 });
    RomtoInt.insert({ 'C', 100 });
    RomtoInt.insert({ 'D', 500 });
    RomtoInt.insert({ 'M', 1000 });


    int n = A.length();

    int i, sum=0;

    for(i=0;i<n;i++){
        if(RomtoInt[A[i]] < RomtoInt[A[i+1]]){
            sum += RomtoInt[A[i+1]] - RomtoInt[A[i]];
            i++;
        }
        else{
            sum += RomtoInt[A[i]];
        }
    }

    return sum;
}


int main(){
    cout<<romanToInt("MIV")<<"\n";
}