class Solution {
public:
    string longestPalindrome(string s) {
        int L=0,R=0;
        for (int i=0;i<s.size();i++){
            int l=i,r=i;
            while (l>=0 && r<s.size() && s[l]==s[r]){
                l--;
                r++;
            }
            if (r-l-1 > R-L){
                L=l+1;
                R=r;
            }
            l=i;r=i+1;
            while (l>=0 && r<s.size() && s[l]==s[r]){
                l--;
                r++;
            }
            if (r-l-1 > R-L){
                L=l+1;
                R=r;
            }
        }
        string ans="";
        for (int i=L;i<R;i++)
            ans=ans+s[i];
        return ans;
    }
};
