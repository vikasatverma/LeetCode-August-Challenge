class Solution:
    def toGoatLatin(self, S: str) -> str:
        i=0
        ans=''
        for word in S.split():
            i=i+1
            # print(word)
            if(word[0] in 'aeeiouAEIOU'):
                # print(word+'ma'+'a'*i)
                ans=ans+word+'ma'+'a'*i+' '
            else:
                # print(word[1:]+word[0]+'ma'+'a'*i)
                ans=ans+word[1:]+word[0]+'ma'+'a'*i+' '
        ans = ans.rstrip()
        return ans
