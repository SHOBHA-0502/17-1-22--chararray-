#include <iostream>
#include <cstring>
#include<string>
using namespace std;
void getCompressedString(char input[]){
    int n = strlen(input);
    int count =0;
    int i =0 ;
    int k =0 ;
    int j =1;
    while(j<=n){
        if(input[k]==input[j]){
            j++;
            count+=1;
            //cout<<count<<";"<<endl;
            
        }
        else if(input[k] != input[j]){
            if(count >=1){
                i++;
            
                input[i] = count +49;
                
            }
            count =0;
            k = j;
            i++;
            input[i]=input[k];
            j++;
        }

    }
    i++;
    input[i]='\0';
 }


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    getCompressedString(str);
    cout << str;
}