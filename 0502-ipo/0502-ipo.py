class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:

        n=len(profits)

        p=list(zip(capital,profits))

        p.sort()

        pq=[]
        i=0
     
        while k>0:

            while i<n and p[i][0]<=w:
                heapq.heappush(pq,-p[i][1])
                i+=1

            if not pq:
                break


            w+=-(heapq.heappop(pq))  
            k-=1 
        return w