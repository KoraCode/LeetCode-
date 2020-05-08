class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10] = {0};// 哈希表存储每一行的每个数是否出现过，默认初始情况下，每一行每一个数都没有出现过
        // 整个board有9行，第二维的维数10是为了让下标有9，和数独中的数字9对应。
        int col[9][10] = {0};// 存储每一列的每个数是否出现过，默认初始情况下，每一列的每一个数都没有出现过
        int box[9][10] = {0};// 存储每一个box的每个数是否出现过，默认初始情况下，在每个box中，每个数都没有出现过。整个board有9个box。
        for(int i=0; i<9; i++){
            for(int j = 0; j<9; j++){
                // 遍历到第i行第j列的那个数,我们要判断这个数在其所在的行有没有出现过，
                // 同时判断这个数在其所在的列有没有出现过
                // 同时判断这个数在其所在的box中有没有出现过
                if(board[i][j] == '.') continue;
                int curNumber = board[i][j]-'0';
                if(row[i][curNumber]) return false; 
                if(col[j][curNumber]) return false;
                if(box[j/3 + (i/3)*3][curNumber]) return false;

                row[i][curNumber] = 1;// 之前都没出现过，现在出现了，就给它置为1，下次再遇见就能够直接返回false了。
                col[j][curNumber] = 1;
                box[j/3 + (i/3)*3][curNumber] = 1;
            }
        }
        return true;
    }
};

关于从数组下标到box序号的变换
 重述一遍问题：给定i和j，如何判定board[i][j]在第几个box呢？
 显然属于第几个box由i和j的组合唯一确定，例如board[2][2]一定是第0个box，board[4][7]一定是第5个box，可以画出来看一下，但是规律在哪里呢？
我们可以考虑一种简单的情况： 一个3x9的矩阵，被分成3个3x3的box，如图：
00 01 02 03 04 05 06 07 08 
10 11 12 13 14 15 16 17 18                      [i,j]
20 21 22 23 24 25 26 27 28 
 box[0]   box[1]   box[2]
30 31 32                                    j/3 + (i/3)*3
40 41 42
50 51 52
 box[3]
显然每个数属于哪个box就只取决于纵坐标，纵坐标为0/1/2的都属于box[0],纵坐标为3/4/5的都属于box[1],纵坐标为6/7/8的都属于box[2].也就是j/3.
而对于9x9的矩阵，我们光根据j/3得到0/1/2还是不够的，可能加上一个3的倍数，例如加0x3,表示本行的box，加1x3，表示在下一行的box，加2x3，表示在下两行的box， 这里的0/1/2怎么来的？和j/3差不多同理，也就是i/3。
