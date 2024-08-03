class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title = "";
        while (columnNumber > 0) {
            // Calculate the index of the character (0-based)
            int index = (columnNumber - 1) % 26;
            // Convert the index to the corresponding character
            title += 'A' + index;
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(title.begin(), title.end());
        return title;
    }
};
