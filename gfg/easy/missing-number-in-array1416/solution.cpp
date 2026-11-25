
class Solution {
public:
    int missingNum(vector<int>& arr) {

        long long n = arr.size() + 1;

        long long total = n * (n + 1) / 2;

        long long sum = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        return total - sum;
    }
};
