class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        int n=strs.size();
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]==true) continue;
            vector<string> l1;
            l1.push_back(strs[i]);
            visited[i]=true;
            for(int j=i+1;j<n;j++){
                string a=strs[i];
                string b=strs[j];
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                if(a==b){
                    l1.push_back(strs[j]);
                    visited[j]=true;
                }
                
            }
            s.push_back(l1);
        }
        return s;

    }
};
