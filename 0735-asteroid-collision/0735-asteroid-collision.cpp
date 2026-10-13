class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<pair<int, int>> s;
        vector<int> ans;

        for (int i = 0; i < asteroids.size(); i++) {
            int sign = 0;
            if (asteroids[i] < 0) {
                sign = 1;
            }

            if (s.empty()) {
                s.push({abs(asteroids[i]), sign});
            }
            else if (sign == s.top().second || sign == 0) {
                s.push({abs(asteroids[i]), sign});
            }
            else if (s.top().second == 0 && sign == 1) {
                while (!s.empty() && s.top().second == 0 &&
                       s.top().first < abs(asteroids[i])) {
                    s.pop();
                }

                if (s.empty()) {
                    s.push({abs(asteroids[i]), sign});
                }
                else if (s.top().second == 1) {
                    s.push({abs(asteroids[i]), sign});
                }
                else if (s.top().first == abs(asteroids[i])) {
                    s.pop();
                }
            }
        }

        while (!s.empty()) {
            if (s.top().second == 1) {
                ans.push_back(-s.top().first);
            }
            else {
                ans.push_back(s.top().first);
            }
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};