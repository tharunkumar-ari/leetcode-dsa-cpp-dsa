class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        stack<int> st;
        vector<int> l(n, 0);
        vector<int> r(n, 0);

        // Right smaller
        for (int i = n - 1; i >= 0; i--) {
            while (st.size() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            r[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Clear stack
        while (!st.empty()) {
            st.pop();
        }

        // Left smaller
        for (int i = 0; i < n; i++) {
            while (st.size() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            l[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int width = r[i] - l[i] - 1;
            int curr = heights[i] * width;

            ans = max(ans, curr);
        }

        return ans;
    }
};