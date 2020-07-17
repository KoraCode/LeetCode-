class Solution {
public:
    string multiply(string num1, string num2) {
        string ans;
        vector<int> a,b,c;
        c.resize(num1.size()+num2.size()-1);          //用于规定最终结果的最大数组范围
        for(int i =num1.size()-1;i>=0;i--)  a.push_back(num1[i]-'0');   //用于装数组num1
        for(int i =num2.size()-1;i>=0;i--)  b.push_back(num2[i]-'0');   //用于装数组num2
        for(int i = 0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                c[i+j]+=a[i]*b[j];            //将num1和num2对位相乘相加后装入vector
            }
        }

        int k =0;
        for(int i = 0;i<c.size();i++)       //开始将数组进位还原成字符串
        {
            k+=c[i];
            char a = k%10+'0';
            ans=a+ans;                      //头部添加字符
            k=k/10;
        }

        while(k)                            //直到k为0
        {
            char a=k%10+'0';
            ans=a+ans;
            k/=10;
        }

        while(ans.size()>1 && ans[0]=='0')  ans.erase(ans.begin());       //将头部的0清除
        return ans;
    }

};
