#include<iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    int minr=0;
    int minc=0;
    int maxr= nRows -1;
    int maxc = nCols-1;
    int count = 0;
    int tn = nRows*nCols;

    while(minr<=maxr && minc<=maxc){
        //toprow
        for(int i = minc, j = minr; i<=maxc;i++ ){
            cout<<input[j][i]<<" ";
            
            
        }
        minr++;
        //rightcol
        for(int i = minr , j = maxc; i<=maxr  ;i++ ){
            cout<<input[i][j]<<" ";
            
            
        }
        maxc--;
        //bottomrow
        for(int i = maxc, j = maxr;i>=minc ;i--){
            cout<<input[j][i]<<" ";
            
            
        }
        maxr--;
        //leftcol;
        for(int i = maxr, j = minc;i>=minr ;i--){
            cout<<input[i][j]<<" ";

            
        }
        minc++;
        
    }

    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}