#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int n = strlen(input);
    int count =0 ;
    int sum =0;
    int index;
    for(int i =0 ;i<n;i++){
        count=0;
        for(int j =0 ; j <n; j++){
            if(input[i]==input[j]){
                count+=1;
                
            }
            if(count>sum){
                sum = count;
                index =i;
            }
        }
    }
    
    return input[index];
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}