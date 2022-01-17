void removeConsecutiveDuplicates(char input[]) {
    int n = strlen(input);
    char l= input[0];
    int i =0 ;
    cout<< n;
    int k =1;
    for(int j =0 ;j<=n; j++){
        //cout<<j<<" ??"<<endl;
        if(j==n){
            i++;
            //cout<<"//"<<" ";
            input[i]='\0';
            //cout<<"//"<<" ";
            
        }
        else if(input[i]==input[k]){
             //cout<<"]]"<< j<<" ";
            k++;
            //cout<<"]]"<< j<<" ";
        }
        else if(input[i]!=input[k]){
            i++;
            input[i] = input[k];
            l = input[i];
            //cout<<"??"<<j << " " << i<<" ";
        

        }

    }
   
}