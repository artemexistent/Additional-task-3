class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector <string> res(min(numRows, int(s.size())),"");
        int k=0;
        bool f=false;
        for (int i=0;i<int(s.size());i++){
            res[k]+=s[i];
            if (k==0 || k==numRows-1) f=!f;
            if (!f)
                k--;
            else k++;
        }
        string ans="";
        for (string i:res)
            ans+=i;
        return ans;
    }
};
