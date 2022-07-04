#include<bits/stdc++.h>

using namespace std;


int josephys(int n, int k){
    int a=1;
    int n1 = n;

    while(n1>0){
        n1 = n1/k;
        a =a*k;
    }

    a = a/k;

    return (n - a + 1);

}


int main(){

    cout<<josephys(18,3);
}