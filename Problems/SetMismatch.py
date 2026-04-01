class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n=len(nums)
        ind=-1
        sum_a=0
        nums.sort()
        for i in range(n):
            sum_a+=nums[i]
            if i<n-1 and nums[i]==nums[i+1]:
                ind=i

        sum_n=(n*(n+1))/2
        sum_a-=nums[ind]
        ans=[]
        if sum_n>sum_a:
            ans.append(nums[ind])
            ans.append(int(sum_n-sum_a))
        else: 
            ans.append(nums[ind])
            ans.append(int(sum_a-sum_n))
        
        return ans