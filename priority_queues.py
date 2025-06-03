import heapq

# Create an empty priority queue
priority_queue = []

# 👇 heappush: Add tasks with priorities (lower number = higher priority)
heapq.heappush(priority_queue, (3, "Check emails"))
heapq.heappush(priority_queue, (1, "Fix critical bug"))
heapq.heappush(priority_queue, (4, "Schedule meeting"))
heapq.heappush(priority_queue, (2, "Code review"))

print("Initial Priority Queue (min-heap):")
print(priority_queue)
# Output: [(1, 'Fix critical bug'), (2, 'Code review'), (4, 'Schedule meeting'), (3, 'Check emails')]

# 👀 Peek at the top-priority task
print("\nTop priority task (peek):", priority_queue[0])
# Output: (1, 'Fix critical bug')

# 🧹 heappop: Remove tasks in order of priority
print("\nProcessing tasks by priority:")
while priority_queue:
    priority, task = heapq.heappop(priority_queue)
    print(f"✅ Done: {task} (Priority {priority})")

# Output:
# ✅ Done: Fix critical bug (Priority 1)
# ✅ Done: Code review (Priority 2)
# ✅ Done: Check emails (Priority 3)
# ✅ Done: Schedule meeting (Priority 4)

# 🔁 heappushpop: Push new task and pop the smallest in a single step
# The new task (1, "Write tests") has higher priority than (2, "Update docs"), so it stays
heapq.heappush(priority_queue, (2, "Update docs"))
result = heapq.heappushpop(priority_queue, (1, "Write tests"))
print("\nheappushpop: pushed (1, 'Write tests') and popped:", result)
print("Queue after heappushpop:", priority_queue)
# Output:
# heappushpop: pushed (1, 'Write tests') and popped: (1, 'Write tests')
# Queue after heappushpop: [(2, 'Update docs')]

# 🔁 heapreplace: Pop smallest, then push new task
# First removes (2, 'Update docs'), then adds (3, 'Deploy app')
result = heapq.heapreplace(priority_queue, (3, "Deploy app"))
print("\nheapreplace: removed:", result)
print("Queue after heapreplace:", priority_queue)
# Output:
# heapreplace: removed: (2, 'Update docs')
# Queue after heapreplace: [(3, 'Deploy app')]

# ✅ Final state
print("\nFinal queue state:", priority_queue)
# Output: [(3, 'Deploy app')]
