class Solution {
public:
    bool canEat(vector<int>& piles, int h, int k) {
        long long hours = 0;

        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;   // ceil(bananas / k)

            if (hours > h)
                return false;
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canEat(piles, h, mid)) {
                high = mid - 1;      // Try a smaller speed
            } else {
                low = mid + 1;       // Need a faster speed
            }
        }

        return low;   // Minimum valid eating speed
    }
};