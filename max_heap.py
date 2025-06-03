import heapq

# Helper functions to simulate max-heap behavior
def max_heappush(heap, item):
    heapq.heappush(heap, -item)

def max_heappop(heap):
    return -heapq.heappop(heap)

def max_heappushpop(heap, item):
    return -heapq.heappushpop(heap, -item)

def max_heapreplace(heap, item):
    return -heapq.heapreplace(heap, -item)

# Start with an empty list for max-heap
max_heap = []

# 1. max_heappush: Add elements
max_heappush(max_heap, 20)
max_heappush(max_heap, 10)
max_heappush(max_heap, 30)
max_heappush(max_heap, 5)
max_heappush(max_heap, 15)
print("After max_heappush:", [-i for i in max_heap])
# Output: [30, 15, 20, 5, 10] (simulated max-heap)

# 2. max_heappop: Removes and returns the largest element
largest = max_heappop(max_heap)
print("max_heappop:", largest)
# Output: 30

# 3. Peek: View the largest without popping
print("Peek (largest):", -max_heap[0])
# Output: 20

# 4. max_heappushpop: Push then pop the largest
res = max_heappushpop(max_heap, 25)
print("max_heappushpop (pushed 25):", res)
print("Heap after max_heappushpop:", [-i for i in max_heap])
# Output: 25 (smaller than current max), heap updated

# 5. max_heapreplace: Pop then push
res = max_heapreplace(max_heap, 12)
print("max_heapreplace (replaced with 12):", res)
print("Heap after max_heapreplace:", [-i for i in max_heap])
# Output: 25 (popped), 12 pushed

# 6. heapify for max-heap
data = [25, 3, 18, 9, 40]
max_heap_data = [-x for x in data]
heapq.heapify(max_heap_data)
print("After max-heapify:", [-i for i in max_heap_data])
# Output: [40, 25, 18, 9, 3]

# 7. nlargest and nsmallest work the same way
nums = [5, 2, 9, 1, 12, 7]
print("3 largest:", heapq.nlargest(3, nums))
# Output: [12, 9, 7]
print("3 smallest:", heapq.nsmallest(3, nums))
# Output: [1, 2, 5]
