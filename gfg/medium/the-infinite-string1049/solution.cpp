

class Solution {
  public:
    char posInfinite(string &s, long long pos) {

        long long len = s.size();
        long long step = 1;

        // Find the operation containing pos
        while(len < pos) {
            len = 2 * len + step;
            step++;
        }

        // Move backwards through operations
        while(step > 1) {

            step--;

            long long prevLen = (len - step) / 2;

            if(pos > prevLen + step) {
                pos = len - pos + 1;
            }
            else if(pos > prevLen) {
                return '$';
            }

            len = prevLen;
        }

        return s[pos - 1];
    }
};

