import heapq

# Create an empty max-heap priority queue
priority_queue = []

# 👇 heappush: Add tasks with inverted priorities (higher number = higher priority)
heapq.heappush(priority_queue, (-3, "Check emails"))
heapq.heappush(priority_queue, (-1, "Fix critical bug"))
heapq.heappush(priority_queue, (-4, "Schedule meeting"))
heapq.heappush(priority_queue, (-2, "Code review"))

print("Initial Priority Queue (max-heap simulation):")
print(priority_queue)
# Output: [(-4, 'Schedule meeting'), (-2, 'Code review'), (-3, 'Check emails'), (-1, 'Fix critical bug')]

# 👀 Peek at the top-priority task
print("\nTop priority task (peek):", (-priority_queue[0][0], priority_queue[0][1]))
# Output: (4, 'Schedule meeting')

# 🧹 heappop: Remove tasks in order of max-priority
print("\nProcessing tasks by priority:")
while priority_queue:
    neg_priority, task = heapq.heappop(priority_queue)
    priority = -neg_priority
    print(f"✅ Done: {task} (Priority {priority})")

# 🔁 heappushpop: Push new task and pop the highest in a single step
heapq.heappush(priority_queue, (-2, "Update docs"))
result = heapq.heappushpop(priority_queue, (-1, "Write tests"))
print("\nheappushpop: pushed (1, 'Write tests') and popped:", (-result[0], result[1]))
print("Queue after heappushpop:", [(-p, t) for p, t in priority_queue])

# 🔁 heapreplace: Pop highest, then push new task
result = heapq.heapreplace(priority_queue, (-3, "Deploy app"))
print("\nheapreplace: removed:", (-result[0], result[1]))
print("Queue after heapreplace:", [(-p, t) for p, t in priority_queue])

# ✅ Final state
print("\nFinal queue state:", [(-p, t) for p, t in priority_queue])
