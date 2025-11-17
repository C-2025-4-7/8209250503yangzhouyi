#include <iostream>
#include <cctype>

int main()
{
    std::cout << "请输入一行字符，然后按回车：" << std::endl;

    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;

    char c;
    // 使用 std::cin.get 可以读取空格和回车（回车用于结束读取）
    while (std::cin.get(c)) {
        if (c == '\n') break; // 直到回车结束
        if ((c>=65 &&c<=90)|| (c >= 97 && c <= 122)) {
            ++letters;
        } else if (c == ' ') {
            ++spaces;
        } else if (c>=48&&c<=57) {
            ++digits;
        } else {
            ++others;
        }
    }

    std::cout << "英文字母个数: " << letters << std::endl;
    std::cout << "空格个数: " << spaces << std::endl;
    std::cout << "数字个数: " << digits << std::endl;
    std::cout << "其他字符个数: " << others << std::endl;

    return 0;
}
