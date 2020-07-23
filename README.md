1.两数之和  
  给定 nums = [2, 7, 11, 15], target = 9  
  nums[0] + nums[1] = 2 + 7 = 9  
  返回 [0,1]  
  解法：使用unordered_map来保存所淘汰元素，然后使用find算法快速匹配  

2.两数相加  
  给出两个“非空”的链表用来表示两个非负的整数。其中，它们各自的位数是按照逆序的方式存储的，并且它们的每个节点只能存储1个数字。  
  如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。  
  输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)  
  输出：7 -> 0 -> 8  
  原因：342 + 465 = 807  
  解法：使用了链表的定义 val、next；然后定义一个标志变量来添加进位  
  
3.圆圈中剩下的数  
  0,1,,n-1这n个数字排成一个圆圈，从数字0开始，每次从这个圆圈里删除第m个数字。求出这个圆圈里剩下的最后一个数字。  
  例如，0、1、2、3、4这5个数字组成一个圆圈，从数字0开始每次删除第3个数字，则删除的前4个数字依次是2、0、4、1，因此最后剩下的数字是3。  
  解法：使用逆推，最后一个元素的位置一定是0，每次删除的元素是 m%n--  
  
4.无重复字符的最长子串  
  给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。  
  解法：窗口滑动；使用一个vector装界定元素，定义两个标志元素，一个在遍历子串，一个用来保存不重复的界限  
  
5.给定一个字符串 s，找到 s 中最长的回文子串。  
  输入: "babad"   输出: "bab"  
  解法：中心扩展法，分开一个中心和两个中心  
  
6.判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。  
  解法：第一种可以颠倒数字，第二种转换为字符串操作  

7.将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。  
  输入: s = "LEETCODEISHIRING", numRows = 3  
  输出: "LCIRETOESIIGEDHN"  
  解法：建立与行数相等的装字符的容器数（小心字符数小于行数），再添加一个标志符来转头，在0和n-1处  
  
8.给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。  
  假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。  
  解法：留意溢出，数字反转

9.请你来实现一个 atoi 函数，使其能将字符串转换成整数。  
  首先，该函数会根据需要丢弃无用的开头空格字符，直到寻找到第一个非空格的字符为止。  
  当我们寻找到的第一个非空字符为正或者负号时，则将该符号与之后面尽可能多的连续数字组合起来，作为该整数的正负号；假如第一个非空字符是数字，则直接将     与之后连续的数字字符组合起来，形成整数。  
10.给你 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。找出   其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。  
  解法：双指针
  
11.给定一个整数，将其转为罗马数字。输入确保在 1 到 3999 的范围内。  
  罗马数字包含以下七种字符： I， V， X， L，C，D 和 M。  
  int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  
  string reps[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  
  解法：贪心算法   
  
12.编写一个函数来查找字符串数组中的最长公共前缀。  
  如果不存在公共前缀，返回空字符串 ""。  
  输入: ["flower","flow","flight"]  
  输出: "fl"  
  解法：双指针法  
  
13.给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有满足条件且不重复的三元组。   
  注意：答案中不可以包含重复的三元组。  
  解法：重新排序+双指针法，重点是去重  
  
14.给定一个包括 n 个整数的数组 nums 和 一个目标值 target。找出 nums 中的三个整数，使得它们的和与 target 最接近。返回这三个数的和。假定每组输入只     存在唯一答案。  
  解法：重排序+双指针  

15.给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。  
   给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。  
   解法：Hash+DFS
   
16.给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？        找出所有满足条件且不重复的四元组。  
   解法：重排序+双指针，重点去重
   
17.给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。  

18.给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。  
   有效字符串需满足：  
   左括号必须用相同类型的右括号闭合。  
   左括号必须以正确的顺序闭合。  
   注意空字符串可被认为是有效字符串。  
   解法：运用栈，ASCII码对应的字符，如果扩后闭合，即对应的ASCII码相邻1或2；否则不闭合。  
   
19.将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。   
   解法：迭代、递归
   
20.数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。  
   解法：回溯法+DFS  
   
21.给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。  
   你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。  
   解法：递归、迭代
   
22.给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。  
   不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。  
   解法：双指针  

23.给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。  
   不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。  
   元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。  
   解法：双指针  
  
24.给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。  
   解法：KMP算法   
 
25.假设按照升序排序的数组在预先未知的某个点上进行了旋转。  
   ( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。  
   搜索一个给定的目标值，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。  
   你可以假设数组中不存在重复的元素。  
   你的算法时间复杂度必须是 O(log n) 级别。  
   解法：二分查找

26.给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。  
   你的算法时间复杂度必须是 O(log n) 级别。  
   如果数组中不存在目标值，返回 [-1, -1]。  
   解法：二分查找（分别找左右边界)  
   
27.给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。  
   你可以假设数组中无重复元素。  
   解法：二分查找  
   
28.判断一个 9x9 的数独是否有效。只需要根据以下规则，验证已经填入的数字是否有效即可。  
   数字 1-9 在每一行只能出现一次。  
   数字 1-9 在每一列只能出现一次。  
   数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。  
   解法：哈希表，可以记录每一个数据

29.给定一个正整数 n（1 ≤ n ≤ 30），输出外观数列的第 n 项。  
   注意：整数序列中的每一项将表示为一个字符串。  
   第一项是数字 1  
   描述前一项，这个数是 1 即 “一个 1 ”，记作 11  
   描述前一项，这个数是 11 即 “两个 1 ” ，记作 21  
   描述前一项，这个数是 21 即 “一个 2 一个 1 ” ，记作 1211     
   描述前一项，这个数是 1211 即 “一个 1 一个 2 两个 1 ” ，记作 111221  
   解法：递归+for  
   
30.给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。  
    candidates 中的数字可以无限制重复被选取。   
    解法：DFS回溯法  

31.给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。  
   解法：数组 竖式  
   
32.给定一个可包含重复数字的序列，返回所有不重复的全排列。  
   解法：DFS回溯，重点：去重  
   
33.给定一个 n × n 的二维矩阵表示一个图像。  
   将图像顺时针旋转 90 度。  
   说明：  你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。  
   
34.给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。  
