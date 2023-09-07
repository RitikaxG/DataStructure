
# Expected Time Complexity : O(N)
# Expected Auxilliary Space : O(1)
import math
def digitsInFactorial(N):
        # code here
    # fact=1
    # count=0
    # for i in range(1,N+1):
    #     fact=fact*i
        
    # while(fact>0):
    #     count=count+1
    #     fact=fact//10
    # return count
    result=0
    if N==0 | N==1:
        return 1
            
    for i in range(2,N+1):
        result+=math.log10(i)

        
    return math.floor(result)+1

result=digitsInFactorial(5)
print(result)
