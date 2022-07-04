#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<map>
#include<vector>
using namespace std;

unsigned long long int StringToInt(string C){
    unsigned long long int i;
    unsigned long long int ascii;
    unsigned long long int sum=0;
    cout<<C<<"\n";

    // sum=0;
    // cout<<sum<<"\n";
    int n = C.size();
    for(i=0;i< C.size(); i++){
        ascii = C[i];
        cout<<ascii<<"\n";
        ascii = ascii - 48;
        cout<<"the individual number is: "<<ascii;
        cout<<"the ascii converted val is: "<<ascii*(pow(10, (C.size() - i - 1)))<<"\n";
        sum = sum + ascii*(pow(10, (C.size() - i - 1))) ;
        cout<<"the sum is: "<<sum<<"\n";

    }
   

    return sum;
}

string reversal(string A){
    int n = A.length();
    int i;
    for(i=0; i<n/2; i++){
        swap(A[i], A[n-i-1]);
    }

    return A;
}



string multiply(string A, string B) {

    unsigned long long int A1 = StringToInt(A);
    unsigned long long int B2 = StringToInt(B);
    cout<<"A1 is:"<<A1<<"\n";
    cout<<"B2 is:"<<B2<<"\n";
    unsigned long long int C = A1*B2;
    if(C == 0){
        return "0";
    }
    cout<<"the result of multiplication is: "<<C<<"\n";
    string D;
    unsigned long long int i;
    i = C;
    unsigned long long int temp;
    char c;
    while(i>0){
        temp = i%10;
        temp = temp + 48;
        c = temp;
        // cout<<char(temp);
        D.push_back(char(temp));
        i=i/10;
    }
    
    return reversal(D);

}

int main(){
    string A = "5131848155574784703269632922904933776792735241197982102373370";
    string B = "56675688419586288442134264892419611145485574406534291250836";

   cout<<multiply(A,B);


    return 0;
}