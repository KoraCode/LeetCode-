//使用字符串
class Solution {
public:
    bool isPalindrome(int x) {
      string tmp=to_string(x);
      string tmp2=tmp;
      reverse(tmp2.begin(),tmp2.end());
      if(tmp==tmp2) return true;
      return false;
    }
};

//使用数字颠倒
class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0||x%10==0) return false;
    if(x>0&&x%10==0) return false;
    long y=0;
    int temp=x;
    while(temp!=0){
        y=y*10+temp%10;
        temp/=10;
    }
    if(y==x)
        return true;
    return false;
    }
};
