class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char> a;
        int ans=0;
        for (int i=0;i<s.size();i++){
            int k=a.size();
            a.insert(s[i]);
            if (k+1==a.size()) continue;
            if (ans<a.size())
                ans=a.size();
           
            a.clear();
            for (int j=i-1;j>0;j--)
                if (s[j]==s[i])
                    break;
                else a.insert(s[j]);
            a.insert(s[i]);
        }
          if (ans<a.size())
                ans=a.size();
        return ans;
    }
};
