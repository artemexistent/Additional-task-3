class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        string s="";
        while (x!=0){
            s=s+char(x%10+'0');
            x/=10;
        }
        bool ans=true;
        int r=s.size()-1;
        for (int l=0;l<r;l++){
            if (s[l]!=s[r]){
                ans=false;
                break;
            }
            r--;
        }
        return ans;
    }
};
