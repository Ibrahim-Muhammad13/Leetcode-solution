class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n =arr.size();
        if(n==1)return {-1};
        int maxn=max(arr[n-1],arr[n-2]);
        arr[n-2]=arr[n-1];
        arr[n-1]=-1;
       
        for(int i=n-3;i>=0;i--){
            int x=arr[i];
            arr[i]=maxn;
            maxn = max(maxn,x);
           
        }
        return arr;
    }
};