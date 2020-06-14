class Solution:
    def replaceSpace(self, s: str) -> str:
        re_s=''
        for i in s:
            if i==" ":
                re_s+="%20"
            else:
                re_s+=i
        return re_s