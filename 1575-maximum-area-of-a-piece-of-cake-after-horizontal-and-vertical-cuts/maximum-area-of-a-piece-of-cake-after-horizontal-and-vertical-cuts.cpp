class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        // Sort both arrays
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        // Find maximum horizontal gap
        long long maxH = horizontalCuts[0] - 0;

        int left = 0;
        int right = 1;

        while (right < horizontalCuts.size()) {
            long long gap = horizontalCuts[right] - horizontalCuts[left];
            maxH = max(maxH, gap);

            left++;
            right++;
        }

        // Last horizontal gap
        maxH = max(maxH, (long long)h - horizontalCuts.back());


        // Find maximum vertical gap
        long long maxV = verticalCuts[0] - 0;

        left = 0;
        right = 1;

        while (right < verticalCuts.size()) {
            long long gap = verticalCuts[right] - verticalCuts[left];
            maxV = max(maxV, gap);

            left++;
            right++;
        }

        // Last vertical gap
        maxV = max(maxV, (long long)w - verticalCuts.back());


        // Maximum area
        long long area = maxH * maxV;

        return area % 1000000007;
    }
};