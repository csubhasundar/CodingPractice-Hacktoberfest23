# LeetCode Problem : https://leetcode.com/problems/can-place-flowers/?envType=study-plan-v2&envId=leetcode-75
class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        y=0
        if len(flowerbed)==1 and flowerbed[0]==0 and n==1:
            return True
        if len(flowerbed)>1:
            if flowerbed[0]==flowerbed[1]==0:
                y+=1
                flowerbed[0]=1
            if  flowerbed[-1]==flowerbed[-2]==0:
                y+=1
                flowerbed[-1]=1
        for i in range(1,len(flowerbed)-1):
            if flowerbed[i-1]==flowerbed[i]==flowerbed[i+1]==0:
                flowerbed[i]=1
                y+=1
        if y>=n:
            return True
        else: 
            return False