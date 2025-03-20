class Solution {
public:
    vector<int> finalPrices(vector<int>& pr) {

        stack<int> st;
        int n= pr.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()>pr[i]){
                st.pop();
            }
            ans[i]=(st.empty())?pr[i]:pr[i]-st.top();
            st.push(pr[i]);
        }
        return ans;
    }
};
