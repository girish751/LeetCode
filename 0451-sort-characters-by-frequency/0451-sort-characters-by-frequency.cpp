// comparator function
bool cmp(pair<int,char> &a, pair<int,char> &b) {
    return a.first > b.first;   // frequency ज्यादा है तो पहले आना चाहिए
}

class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        map<char,int> m;

        // 1. count frequency
        for(char c : s){
            m[c]++;
        }

        // 2. store in vector
        vector<pair<int,char>> x;
        for(auto it : m){
            x.push_back({it.second, it.first});
        }

        // 3. sort using comparator function
        sort(x.begin(), x.end(), cmp);

        // 4. build answer
        for(auto &p : x){
            for(int i = 0; i < p.first; i++){
                ans += p.second;
            }
        }

        return ans;
    }
};
