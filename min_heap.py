import heapq

# Start with an empty list to represent the heap
heap = []

# 1. heappush: Add elements to the heap
heapq.heappush(heap, 20)
heapq.heappush(heap, 10)
heapq.heappush(heap, 30)
heapq.heappush(heap, 5)
heapq.heappush(heap, 15)
print("After heappush:", heap)
# Output: [5, 10, 30, 20, 15] -> heap invariant maintained

# 2. heappop: Removes and returns the smallest element
smallest = heapq.heappop(heap)
print("heappop:", smallest)
# Output: 5

# 3. Peek: View the smallest element without popping
print("Peek (heap[0]):", heap[0])
# Output: 10

# 4. heappushpop: Push item and then pop smallest item (faster than separate push and pop)
result = heapq.heappushpop(heap, 8)
print("heappushpop (pushed 8):", result)
print("Heap after heappushpop:", heap)
# Output: 8 (since it's smaller than current min), heap updated

# 5. heapreplace: Pop and then push item (always removes and adds)
result = heapq.heapreplace(heap, 17)
print("heapreplace (replaced with 17):", result)
print("Heap after heapreplace:", heap)
# Output: 10 (popped), 17 pushed

# 6. heapify: Turn any list into a heap
data = [25, 3, 18, 9, 40]
heapq.heapify(data)
print("After heapify:", data)
# Output: [3, 9, 18, 25, 40] (valid min-heap)

# 7. nlargest and nsmallest
nums = [5, 2, 9, 1, 12, 7]
print("3 largest:", heapq.nlargest(3, nums))
# Output: [12, 9, 7]
print("3 smallest:", heapq.nsmallest(3, nums))
# Output: [1, 2, 5]
