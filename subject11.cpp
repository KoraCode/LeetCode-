//整数转罗马字
class Solution {
public:
    string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string reps[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string res;
        for (int i = 0; i < 13; i ++ )  //这里不使用图里的count了，一遍一遍来就行了
            while(num >= values[i])
            {
                num -= values[i];
                res += reps[i];
            }
        return res;
    }
};

//罗马字转整数
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        map<char, int> m = { {'I',1} ,{'V', 5} ,{'X', 10},{'L', 50} ,{'C', 100} ,{'D', 500} ,{'M', 1000} };
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] >= m[s[i + 1]])
            {
                num = m[s[i]]+num;
            }
            else
            {
                num = m[s[i+1]] - m[s[i]]+ num;
                i++;
            }
        }
        return num;
    }
};
