from collections import deque

# Create a queue
queue = deque()

# Enqueue
queue.append(10)
queue.append(20)
queue.append(30)
print("Queue:", list(queue))  # [10, 20, 30]

# Dequeue
print("Dequeued:", queue.popleft())  # 10
print("Queue after dequeue:", list(queue))  # [20, 30]

# Front and Rear
print("Front:", queue[0])    # 20
print("Rear:", queue[-1])    # 30

# Size and check if empty
print("Size:", len(queue))         # 2
print("Is Empty:", len(queue) == 0)  # False
