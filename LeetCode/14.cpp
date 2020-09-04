class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0)
            return "";
        int ans = strs[0].size();
        for (int i=1;i<strs.size();i++){
            bool f=true;
            int kol=0;
            for (int j=0;j<min(strs[0].size(),strs[i].size()) && f;j++)
                if (strs[0][j]==strs[i][j])
                    kol++;
                else f=false;
            ans=min(ans,kol);
        }
        string res="";
        for (int i=0;i<ans;i++)
            res+= strs[0][i];
        return res;
    }
};
