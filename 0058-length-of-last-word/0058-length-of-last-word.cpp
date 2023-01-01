class Solution {
public:
    int lengthOfLastWord(string s) {
        bool f=false;
       int ctr=0;
        int n=s.length();
        for(int i=n-1; i>=0;i--){
            if(s[i]==' ' && f==false){
                continue;
            }else if(s[i]==' ' && f==true){
                break;
            }else{
                f=true;
                ctr++;
            }
        }
        return ctr;
    }
};