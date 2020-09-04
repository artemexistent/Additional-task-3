class Solution {
public:
    bool isValid(string s) {
        stack <int> a;
   
        for (int i=0;i<s.size();i++){
            if (a.size()==0)
                a.push(s[i]);
            else 
            switch (int(s[i])){
                case 41: if (a.top()==40) a.pop(); else return false; break;
                case 93: if (a.top()==91) a.pop(); else return false; break;
                case 125:if (a.top()==123) a.pop(); else return false;break;
                default: a.push(int(s[i]));
            }
           // cout << a.top() << endl;
        }
        
        if (a.size()!=0)
            return false;
        else return true;
        
    }
};
