
class Solution {
  public:
    string removeChars(string &s1, string &s2) {

        int n1 = s1.size();
        int n2 = s2.size();

        string ans = "";

        for(int i = 0; i < n1; i++) {

            bool found = false;

            for(int j = 0; j < n2; j++) {

                if(s1[i] == s2[j]) {
                    found = true;
                    break;
                }
            }

            if(found == false) {
                ans += s1[i];
            }
        }

        return ans;
    }
};
