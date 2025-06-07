class Solution {
public:
    bool solve(vector<int>& piles, int start, int end, bool turn)
    {
        if(start>end)
        return 0;

        if(turn)
        {
            int rr1 = solve(piles,start+1,end,false) + piles[start];
            int rr2 = solve(piles,start,end-1,false) + piles[end];
            return max(rr1,rr2);
        }
        int rr1 = solve(piles,start+1,end,true) - piles[start];
        int rr2 = solve(piles,start,end-1,true) - piles[end];
        return max(rr1,rr2);
    }
    bool stoneGame(vector<int>& piles) {
        int start = 0, end = piles.size()-1;
        bool turn = true;
        return solve(piles,start,end,turn);
    }
};