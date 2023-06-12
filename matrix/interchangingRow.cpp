/* Given a matrix of dimensions n1 x m1. Interchange its rows in-place such that the first row will become the last row and so on. 

Example 1:

Input:
n1 = 4, m1 = 4
matrix[][] = {{1, 2, 3, 4},
             {5, 6, 7, 8},
             {9, 10, 11, 12},
             {13, 14, 15,16}}
Output: 
13 14 15 16 9 10 11 12 5 6 7 8 1 2 3 4
Explanation:
Matrix after exchanging rows:
13 14 15 16
 9 10 11 12
 5  6  7  8
 1  2  3  4
Note: Output is printed row-wise linearly.  */

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{   
    public:
    //Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int> > &matrix)
    {
        // code here 
        int n1 = matrix.size();
        int m1 = matrix[0].size();
        
        
        int mid = n1/2;
         if(n1%2==0){
             
               int low=mid-1;
               
             while(low >=0 && mid<=n1-1){
                 
                 for(int i=0;i<m1;i++){
                   swap(matrix[mid][i],matrix[low][i]);
                 }
              mid++; low--;
             }
             
          }else{
              int low=mid-1, high=mid+1;
              while(low>=0 && mid<=n1-1){
                  for(int i=0;i<m1;i++){
                      swap(matrix[high][i],matrix[low][i]);
                      
                  }
                  low--;high++;
              }
          }
             
         
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.interchangeRows(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends