class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        answer=list()
        n=len(nums)
        s=list(set(nums))
        freq=[0]*len(s)
        for i in range(n):
            for j in range(len(s)):
                if nums[i]==s[j]:
                    freq[j]+=1
        while k>0:
            max=freq[0]
            idx=0
            for i in range(1,len(s)):
                if freq[i]>max:
                    max=freq[i]
                    idx=i
            answer.append(s[idx])
            freq[idx]=0
            k-=1
        return answer





        