/*  You are given a matrix of dimensions n x m. The task is to perform boundary traversal on the matrix in a clockwise manner.

Example 1:

Input:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15,16}}
Output: 1 2 3 4 8 12 16 15 14 13 9 5
Explanation:
The matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The boundary traversal is:
1 2 3 4 8 12 16 15 14 13 9 5 */

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
      vector<int>v;
        if(n==1){
            
            for(int i=0;i<m;i++ ){
                v.push_back(matrix[0][i]);
            }
        }
        else if(m==1){
            for(int i=0;i<n;i++){
                v.push_back(matrix[i][0]);
            }
        }
        else{
            for(int i=0;i<m;i++){
            v.push_back(matrix[0][i]);
        }
        for(int i=1;i<n;i++){
            v.push_back(matrix[i][m-1]);
        }
        for(int i=m-2;i>=0;i--){
            v.push_back(matrix[n-1][i]);
            
        }
        for(int i=n-2;i>0;i--){
            v.push_back(matrix[i][0]);
        } 
        }
       
        
        
        return v;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends