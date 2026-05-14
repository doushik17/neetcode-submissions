class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq={}
        n=len(nums)
        for num in nums:
            freq[num]=freq.get(num,0)+1;
        ans=[]
        for i in range(k):
            mx=max(freq,key=freq.get)
            ans.append(mx)
            del freq[mx]
        return ans





        