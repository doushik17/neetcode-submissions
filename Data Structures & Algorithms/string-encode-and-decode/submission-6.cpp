class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string s="";
        for (int i=0;i<n;i++){
            s+=strs[i]+"17#";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res={};
        string temp="";
        for(int i=0;i<s.size();i++){
            if(i+2<s.size()&&s[i]=='1'&&s[i+1]=='7'&&s[i+2]=='#'){
                res.push_back(temp);
                temp="";
                i+=2;
            }
            else{
                temp+=s[i];
            }
        }
        return res;
    }
};
