#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int n = strlen(input);
    char l= input[0];
    int i =0 ;
    cout<< n;
    int k =1;
    for(int j =1 ;j<=n; j++){
        //cout<<j<<" ??"<<endl;
        if(j==n){
            
            i++;
            cout<<"//"<<i ;
            input[i]='\0';
            //cout<<"//"<<" ";
            return;
            
        }
        else if(l !=input[k]){
            i++;
            input[i] = input[k];
             l = input[k];
            cout<<l<<";; "<<input[i];
        

        }
        
        else if(input[i]==input[k]){
             //cout<<"]]"<< j<<" ";
            k++;
            //cout<<"]]"<< j<<" ";
        }
        // if(input[i]!=input[k]){
        //     i++;
        //     input[i] = input[k];
        //     l = input[i];
        //     cout<<"??"<<j << " " << i<<" ";
        

        // }

    }
   
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}