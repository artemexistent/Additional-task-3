class Solution {
   
         vector <string> ANS;
       vector <string> num;
public:
    
    
     void rec(string ans,int res,string n){
            if (res==n.size()){
               // cout << ans << endl;
                ANS.push_back(ans);
                return;
            }
            for (int i=0;i<num[n[res]-2-'0'].size();i++)
                rec( ans + num[n[res]-2-'0'][i],res+1,n);
            return ;
        }
    
    vector<string> letterCombinations(string digits) {
        if (digits.size()==0)
            
        return ANS;
        num.push_back("abc");
        num.push_back("def");
        num.push_back("ghi");
        num.push_back("jkl");
        num.push_back("mno");
        num.push_back("pqrs");
        num.push_back("tuv");
        num.push_back("wxyz");
        rec("",0,digits);
        
        return ANS;
    }
    
    
    
   
};
