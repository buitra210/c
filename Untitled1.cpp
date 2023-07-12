#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHAR = 26;

int commonCharacterCount(string s1, string s2) {
    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};
    int common = 0;

    // Đếm số lần xuất hiện của các ký tự trong chuỗi s1
    for (int i = 0; i < s1.length(); i++) {
        count1[s1[i] - 'a']++;
    }

    // Đếm số lần xuất hiện của các ký tự trong chuỗi s2
    for (int i = 0; i < s2.length(); i++) {
        count2[s2[i] - 'a']++;
    }

    // Tính số lượng ký tự chung giữa hai chuỗi
    for (int i = 0; i < MAX_CHAR; i++) {
        common += (count1[i] < count2[i] ? count1[i] : count2[i]);
    }

    return common;
}

int main() {
    string s1, s2;
    cout << "Nhap chuoi s1: ";
    cin >> s1;
    cout << "Nhap chuoi s2: ";
    cin >> s2;
    int common = commonCharacterCount(s1, s2);
    cout << "So ky tu chung: " << common << endl;
    return 0;
}