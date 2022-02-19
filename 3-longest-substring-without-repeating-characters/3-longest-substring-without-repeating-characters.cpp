class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        vector<int> lastIndex(256, -1);
        int res=0, j=0;
        
        for(int i=0; i<n; i++)
        {
            j=max(j, lastIndex[s[i]]+1);
            res=max(res, i-j+1);
            lastIndex[s[i]]=i;
        }
        
        return res;
        
    }
};