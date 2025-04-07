class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=start+2*i;
        }
        int t=0;
        for(int i=0;i<n;i++){
            t=t^ans[i];
        }
        return t;
    }
};