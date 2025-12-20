/*
题目：数字字母判断（示例名）
题型：模拟
思路：
- 读入字符串
- 遍历每个字符
- 若是数字输出 Q，否则输出 L

复杂度：
- 时间 O(n)
- 空间 O(1)

注意点：
- 输入中是否包含空格（本题没有）
*/




#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cin >> str;
  for (char c : str){
    if (c >= '0' && c <= '9'){
      cout << 'Q';
    } else {
      cout << 'L';
    }
  }
  return 0;
}
