class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ctr=0;
        int mini=INT_MAX;
        if(strs.size()==1){
            
            return strs[0];
        }
        for(int i=1;i<strs.size();i++){
           
            for(int j=0;j<strs[i].length();j++){
                if(strs[0][j]==strs[i][j]){
                    ctr++;
                   //  cout<<ctr;
                }else{
                    break;
                }
              
            }
            mini=min(ctr,mini);
           
            ctr=0;
        }
        string ans="";
      for(int i=0; i< mini;i++){
          ans+=strs[0][i];
      }
        return ans;
    }
};