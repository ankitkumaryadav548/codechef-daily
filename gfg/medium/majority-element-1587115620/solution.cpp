
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1;
        int count = 0;

        // Find candidate
        for (int i = 0; i < arr.size(); i++) {
            if (count == 0) {
                candidate = arr[i];
            }

            if (arr[i] == candidate) {
                count++;
            }
            else {
                count--;
            }
        }

        // Verify candidate
        count = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == candidate) {
                count++;
            }
        }

        if (count > arr.size() / 2) {
            return candidate;
        }

        return -1;
    }
};
