//遍历扩展数组长度，然后再替换
class Solution {
public:
    string replaceSpace(string s) {
        int init_l=s.size();
        for(int i=0;i<init_l;i++){
            if(s[i]==' ')
                    s+="00";       
        }
        int expand_l=s.size();
        if(init_l==expand_l)
            return s;
        expand_l--;
        for(int i=init_l-1;i>=0;i--){
            if (s[i]==' '){
                s[expand_l--]='0';
                s[expand_l--]='2';
                s[expand_l--]='%';
            }
            else{
                s[expand_l--]=s[i];
            }
        }
        return s;
    }
};