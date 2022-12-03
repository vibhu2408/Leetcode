class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        
        priority_queue<pair<int, char>> p;
        for(auto it: mp) {
            
            pair<int, char> temp;
            temp.first = it.second;
            temp.second = it.first;
            p.push(temp);
        }
        
        string ans = "";
        while(!p.empty()) {
            
            pair<int, char> temp = p.top();
            int c = temp.first;
            while(c > 0) {
                ans += temp.second;
                c--;
            }
            p.pop();
        }
        return ans;
    }
};
