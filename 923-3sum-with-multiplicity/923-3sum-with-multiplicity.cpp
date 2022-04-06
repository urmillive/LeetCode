class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) 
    {
        int n=arr.size(), mod=1000000007;
        int res=0;
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
        {
            res=(res+mp[target-arr[i]])%mod;
            for(int j=0; j<i; j++)
                mp[arr[i]+arr[j]]++;
        }
        
        return res;
        
    }
};