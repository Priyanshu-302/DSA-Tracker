class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n = words.size();
        vector<string> res;

        int i = 0;
        while (i < n) {
            int word_len = words[i].size();
            int j = i + 1;

            while (j < n && word_len + 1 + words[j].size() <= maxWidth) {
                word_len += 1 + words[j].size();
                j++;
            }

            int num_words = j - i;
            string line;

            if (j == n || num_words == 1) {
                line = words[i];
                for (int k = i + 1; k < j; k++) {
                    line += ' ' + words[k];
                }
                line += string(maxWidth - line.size(), ' ');
            }
            else {
                int char_cnt = 0;
                for (int k = i; k < j; k++) {
                    char_cnt += words[k].size();
                }

                int total_space = maxWidth - char_cnt;
                int gaps = num_words - 1;
                int even_spaces = total_space / gaps;
                int extra_spaces = total_space % gaps;
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        int spaces = even_spaces + (k - i < extra_spaces ? 1 : 0);
                        line += string(spaces, ' ');
                    }
                }
            }
            res.push_back(line);
            i = j;
        }
        return res;
    }
};
