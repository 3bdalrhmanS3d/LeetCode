class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> s;
        for (int i = 0; i < arr.size(); i++) {
            string c = arr[i];
            int x = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == c) {
                    x++;
                }
            }
            if (x == 1) {
                s.push_back(c);
            }
        }

        if (s.size() < k) {
            return "";
        } else {
            return s[k - 1];
        }
    }
};
