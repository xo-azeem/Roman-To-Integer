// Code

class Solution {
public:
    int value(char c)
    {   
        switch (c)
        {
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break;
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break;
        }
        return -1;
    }

    int romanToInt(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (value(s[i]) < value(s[i+1]))
            {
                ans += value(s[i+1]) - value(s[i]);
                i++;
            }
            else
                ans += value(s[i]);
        }

        return ans;
    }
};
