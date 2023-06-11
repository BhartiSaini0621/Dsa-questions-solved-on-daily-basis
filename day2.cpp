//  QUES1:: PRINT MATRIX IN SNAKE PATTERN

/*Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
    10->20->30->40->
    50<-60<-70<-80<--
  ->27->29->47->48
    32<-33<-39<-50<--
    Input:
    N = 3 
    matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
    Output: 45 48 54 87 89 21 70 78 15 
    Explanation:
    Matrix is as below:
    45 48 54
    21 89 87
    70 78 15
    Printing it in snake pattern will lead to 
    the output as 45 48 54 87 89 21 70 78 15. */
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>v;
        int row = matrix.size();
        int col = matrix[0].size();
        
       for(int i=0;i<row;i++){
           
           
           if(i%2==0){
               for(int j=0;j<col;j++){
                   v.push_back(matrix[i][j]);
                   
               }
           }else{
               for(int j = col-1;j>=0;j--){
                   v.push_back(matrix[i][j]);
               }
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
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends



// QUES2:: TRANSPOSE OF MATRIX
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row;i++){
            for(int j =i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
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
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
