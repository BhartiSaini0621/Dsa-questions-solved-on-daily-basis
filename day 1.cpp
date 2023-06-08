// NON REPEATINGG NUMBERS

     //{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] != nums[i+1] && i==0){
                v.push_back(nums[i]);
            }else if( i== nums.size()-1 && nums[i]!= nums[i-1]){
                v.push_back(nums[i]);
            }else if(nums[i] != nums[i-1]&& nums[i]!= nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends



// ques 2 :: SQUARE ROOT OF A NUMBER

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
         
        //  long long int i =1;
        //  while(i*i <=x){
        //      i++;
        //  }
         
        //  return (i-1);
        long long int  ans =-1;
         int low=0,high=x;
         while(low<=high){
             long long int mid=(low+high)/2;
            long long int msq= mid*mid;
             if(msq == x)return mid;
             else if(msq > x)high = mid-1;
             else{
                 low= mid+1;
                 ans = mid;
             }
         }
         
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends