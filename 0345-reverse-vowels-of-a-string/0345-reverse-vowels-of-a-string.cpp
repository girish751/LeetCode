// class Solution {
// public:
// string::npos ==string::npos is a special constant used in C++ to indicate "not found" when you're working with strings.

//time complexity is O(n) but space is O(n)

//     string reverseVowels(string s) {
//         string vowels = "aeiouAEIOU";
//         vector<char> arr;

        
//         for (int i = 0; i < s.length(); i++) {
//             if (vowels.find(s[i]) != string::npos) {
//                 arr.push_back(s[i]);
//             }
//         }
//         int i = 0, j = arr.size() - 1;
//         while (i < j) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//         int k = 0;
//         string ans = "";
//         for (int i = 0; i < s.length(); i++) {
//             if (vowels.find(s[i]) != string::npos) {
//                 ans += arr[k];
//                 k++;
//             }
//              else {
//                 ans += s[i];
//             }
//         }

//         return ans;
//     }
// };

////time complexity is O(n) but space is O(1)

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int i = 0, j = s.length() - 1;

        while (i < j) {
            while (i < j && vowels.find(s[i]) == string::npos){
                  i++;
            }

            while (i < j && vowels.find(s[j]) == string::npos){
                   j--;
            }

            swap(s[i], s[j]);
            i++;
            j--;
        }

        return s;
    }
};

