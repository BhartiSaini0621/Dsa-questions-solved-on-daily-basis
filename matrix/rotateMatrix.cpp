/* Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

Example 1:

Input:
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7 */

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        //  NAIVE APPROACH
         
        //  int temp[n][n];
        //  for(int i=0;i<n;i++){
        //      for(int j=0;j<n;j++){
        //          temp[n-j-1][i]= matrix[i][j];
        //      }
        //  }
         
        //  for(int i=0;i<n;i++){
        //      for(int j=0;j<n;j++){
        //          matrix[i][j]=temp[i][j];
        //      }
        //  }
         
         //EFFICIENT APPROACH
         
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 swap(matrix[i][j],matrix[j][i]);
             }
         }
         
         for(int i=0;i<n;i++){
            int low=0,high=n-1;
            while(low<high){
                
                swap(matrix[low++][i],matrix[high--][i]);
            
                
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
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends