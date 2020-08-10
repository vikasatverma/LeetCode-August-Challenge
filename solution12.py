class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        ans=[]
        for i in strs:
            ana="".join(sorted(i))
            if(ana in d):
                # l = d.get(ana)
                # print("i=",i,"and l=",l)
                # d[ana] = [d[ana]].append(i)
                d[ana] = d.get(ana) + [i]
            else:
                d[ana] = [i]
        for i in d:
            ans.append(d.get(i))
        return ans
