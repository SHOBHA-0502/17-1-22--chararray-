#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    int n = strlen(input);
    int i =0;
    int j =1;
    int k =0;
    for(int k =0 ; k<=n; k++){
        if(j==n){
            input[i]='\0';
            //cout<<" ;";
        }
        else if(input[i]==c&&input[j]==c){
            j++;
             //cout<<" /*";
        }
        else if(input[i]==c &&input[j] !=c){
            int temp = input[i];
            input[i]=input[j];
            input[j]=temp;
            //cout<<" /;";
            i++;
            j++;

        }
        else if(input[i]!=c && input[j] !=c ||input[i]!=c && input[j] ==c ){
            j++;
            i++;
            //cout<<" //";

        }
    }

}



int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}