class Solution:
    def minArray(self, numbers: List[int]) -> int:
        min,max=0,len(numbers)-1
        while(min<max):
            mid=int((min+max)/2)
            if numbers[mid]>numbers[max]:
                min=mid+1
            elif numbers[mid]<numbers[max]:
                max=mid
            else:
                max-=1
        return numbers[min]