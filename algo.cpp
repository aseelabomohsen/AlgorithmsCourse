import time

# O(n) complexity 
def factorial(n):
   result = 1
   for i in range(1, n+1):
       result *= i
   return result

# O(n) complexity 

def factorial_rec(n):
   if n <= 1:
       return 1
   else:
       return n * factorial_rec(n-1)


MAX_N = 100
COUNT = 100000

t1 = time.time()
for _ in range(0, COUNT):
   factorial(MAX_N)
t2 = time.time()
print(f"Time of execution of factorial (loop) : {(t2-t1)*1000} ")

t1 = time.time()
for _ in range(0, COUNT):
   factorial_rec(MAX_N)
t2 = time.time()
print(f"Time of execution  (recursive) : {(t2-t1)*1000} ")