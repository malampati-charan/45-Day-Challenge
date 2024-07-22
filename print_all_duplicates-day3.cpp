#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void printDuplicates(string str) {
    // Maintain an unordered map to find the duplicates
    unordered_map<char, int> umap;
    for (char ch : str) {
        umap[ch]++;
    }

    // Display Duplicates
    for (const auto& pair : umap) {
        if (pair.first == ' ') continue;

        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    cout << "Enter a String:";
    string str;
    cin >> str;

    printDuplicates(str);

    return 0;
}