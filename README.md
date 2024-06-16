# Roman To Integer

LeetCode Q # 13.

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Each symbol having their own value as </br></br>I = 1</br>V = 5</br>X = 10</br>L = 50</br>C = 100</br>D = 500</br>M = 1000

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

-> I can be placed before V (5) and X (10) to make 4 and 9. </br>-> X can be placed before L (50) and C (100) to make 40 and 90. </br>-> C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.

Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Roman-To-Integer-LeetCode/assets/171427226/ff1d668a-0fb5-4cdb-9897-c5b64308c5e6)

Time Complexity: O(n).
</div>
