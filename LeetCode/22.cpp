class Solution {
    vector <string> ans;
public:
    bool isValid(string s) {
        stack <int> a;
   
        for (int i=0;i<s.size();i++){
            if (a.size()==0)
                a.push(s[i]);
            else 
            switch (int(s[i])){
                case 41: if (a.top()==40) a.pop(); else return false; break;
                default: a.push(int(s[i]));
            }
           
        }
        
        if (a.size()!=0)
            return false;
        else return true;
        
    }
    
    void rec(int l,int r,int n,string s){
        if (l+r==2*n){
            //cout << s << endl;
            if (isValid(s))
                ans.push_back(s);
            return;
        }
        if (l+1<=n)
            rec(l+1,r,n,s+"(");
        if (r+1<=n)
            rec(l,r+1,n,s+")");
        return;
    }
    
    
    vector<string> generateParenthesis(int n) {
        rec(0,0,n,"");
        return ans;
    }
};
