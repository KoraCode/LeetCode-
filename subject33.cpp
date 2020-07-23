观察旋转的特点，相对于图案，相当于第i行第j列的元素，变成第j行第n-i列的元素。那么我们就可以通过i和j的对称交换，
使第i行第j列的元素和第j行第i列的元素进行交换，然后通过对第j列元素的排序，就可以让第j列变为第n-j列。在这个转化
的过程中，原先第j行第i列的元素会先移动到第i行第j列，然后转移到第i行第n-j列，同样符合旋转过程中行列变化的规律。


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len=matrix.size(),high,low;
        for(int i=0;i<len;i++)
        for(int j=i;j<len;j++)    swap( matrix[i][j],matrix[j][i]);
        for(int i=0;i<len;i++)
        {
            low=0;high=len-1;
            while(low<high)    swap( matrix[i][low++],matrix[i][high--]);
        }
    }
};
