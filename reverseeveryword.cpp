#include<bits\stdc++.h>
using namespace std;
// void reverseStringWordWise(char input[]) {
//     int n = strlen(input);
//      int i =0 ; 
//      int j = n-1;
//      while(i<j){
//          int temp = input[i];
//          input[i]= input[j];
//          input[j]= temp;
//          //cout<<"[[";
//          i++;
//          j--;
    
//      }
//       int z =0;
//       for(int i =0 ; i<=n ; i++){
//           if(input[i]==' '||i==n){
              
//               int k = i-1;
//               while(z<k){
//                   int temp = input[z];
//                   input[z] = input[k];
//                   input[k] = temp;
//                   k--;
//                   z++;

//               }
//               z=i+1;
//           }
//       }
     
     
//  }



void reverseStringWordWise(char input[]) {
    int count =0;
    
    for(int i =0 ; input[i]!='\0';i++){
        count ++;

    }
    //cout<<count<<" ";
    //cout<<strlen(input)<<";;";
    int n = count;
     int i =0 ; 
     int j = n-1;
     while(i<j){
         int temp = input[i];
         input[i]= input[j];
         input[j]= temp;
         //cout<<"[[";
         i++;
         j--;
    
     }
      int z =0;
      for(int i =0 ; i<=n ; i++){
          if(input[i]==' '||i==n){
              
              int k = i-1;
              while(z<k){
                  int temp = input[z];
                  input[z] = input[k];
                  input[k] = temp;
                  k--;
                  z++;

              }
              z=i+1;
          }
      }
     
     
 }



int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
