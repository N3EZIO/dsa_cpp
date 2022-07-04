#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<map>
#include<vector>
using namespace std;



string intToRoman(int A) {

    map <int, char>intToRom;
    intToRom[1] = 'I';
    intToRom[5] = 'V';
    intToRom[10] = 'X';
    intToRom[50] = 'L';
    intToRom[100] = 'C';
    intToRom[500] = 'D';
    intToRom[1000] = 'M';

    int Y = A;
    vector<int> test;

    while(Y>0){
        test.push_back(Y%10);
        Y = Y/10;
    }

    reverse(test.begin(), test.end());



    // cout<<intToRom[100];

    string roman;
    int X = A;
    int rem;
    int i;
    int j;
    i=test.size();
    
    while(i>0){
        rem = test[test.size() - i];
        // cout<<"rem = "<<rem<<"\n";
            if(rem > 0 && rem <=3 ){
                for(j=0;j<rem;j++){
                    // cout<<"the pow 10 is:"<<pow(10,i-1)<<" \n";
                roman.push_back(intToRom[(pow(10,i-1))]);
                }
                // cout<<roman<<"\n";

            }
            else if(rem == 4){
                // cout<<"executed\n";
                    // cout<<"the pow 10 is:"<<pow(10,i-1)<<" \n";

                roman.push_back(intToRom[pow(10,i-1)]);
                roman.push_back(intToRom[5*pow(10,i-1)]);
                // cout<<roman<<"\n";

            }
           else if(rem >= 5 && rem < 9){
                    // cout<<"the pow 10 is:"<<intToRom[pow(10,i-1)]<<" \n";

                // roman.push_back(intToRom[5*pow(10,i-1)]);
                if(i-1 == 2){
                    roman.push_back('D');
                }else{
                roman.push_back(intToRom[5*pow(10,i-1)]);
                }
                for(j=0;j< rem - 5;j++){
                    // cout<<"loop executing";
                // roman.push_back(intToRom[pow(10,i-1)]);
                if(i-1 == 2){
                    roman.push_back('C');
                }else{
                roman.push_back(intToRom[pow(10,i-1)]);
                }
                }
                // cout<<roman<<"\n";

                
            }
            else if(rem == 9){
                // cout<<"the pow 10 is:"<<pow(10,i-1)<<" \n";
                // cout<<"100 is :"<<intToRom[pow(10,(i-1))]<<"\n";
                if(i-1 == 2){
                    roman.push_back('C');
                }else{
                roman.push_back(intToRom[pow(10,i-1)]);
                }
                if(i == 2){
                    roman.push_back('C');
                }else{
                roman.push_back(intToRom[pow(10,i)]);
                }

                // cout<<roman<<"\n";

            }
        
        X = X/10;
        i--;
    }

return roman;


}


int main(){


    cout<<intToRoman(3999);
}