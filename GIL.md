# 🔐 GIL in Python — Global Interpreter Lock

## ✅ What is GIL?

**GIL (Global Interpreter Lock)** is a mutex (mutual exclusion lock) in **CPython** (the default Python implementation) that **allows only one thread to execute Python bytecode at a time**.

This means:
> Even if your Python program has multiple threads, **only one thread can run Python code at once** (per process).

---

## 🔧 Why Does GIL Exist?

- Python’s memory management (especially reference counting for garbage collection) is **not thread-safe**.
- GIL ensures **memory safety** without requiring complex locking mechanisms inside Python objects.

---

## ⚠️ Effect of GIL

| Scenario                    | Behavior with GIL           |
|-----------------------------|-----------------------------|
| CPU-bound multi-threading   | ❌ GIL becomes a bottleneck |
| I/O-bound multi-threading   | ✅ Works well (threads yield during I/O) |
| Multi-processing            | ✅ Bypasses GIL (each process has its own GIL) |

---

## 🔍 CPU-bound vs I/O-bound Example

### ❌ CPU-bound Multi-threading (GIL hurts performance)

```python
import threading

def count():
    x = 0
    for _ in range(10**7):
        x += 1

threads = [threading.Thread(target=count) for _ in range(4)]
for t in threads: t.start()
for t in threads: t.join()
```

> Even though 4 threads are running, **GIL makes them run one at a time** → no real speedup.

---

### ✅ I/O-bound Multi-threading (GIL doesn’t matter)

```python
import threading
import time

def fetch_data():
    print("Start fetching")
    time.sleep(2)  # Simulate I/O
    print("Done fetching")

threads = [threading.Thread(target=fetch_data) for _ in range(3)]
for t in threads: t.start()
for t in threads: t.join()
```

> Works well, since threads yield GIL during `sleep()` or other I/O.

---

## 🧪 Bypassing GIL with `multiprocessing`

```python
from multiprocessing import Process

def compute():
    x = 0
    for _ in range(10**7):
        x += 1

processes = [Process(target=compute) for _ in range(4)]
for p in processes: p.start()
for p in processes: p.join()
```

> Each process has its own Python interpreter and **its own GIL**, so true parallelism is achieved.

---

## ✅ Key Takeaways

- GIL is a CPython-specific feature (not in Jython, IronPython).
- It limits **parallel execution** of threads, especially for CPU-heavy tasks.
- **Use `multiprocessing`** for CPU-bound workloads.
- **Use `threading`** for I/O-bound tasks (e.g., web scraping, file I/O).

---

## 🧠 Interview Answer (1-minute version)

> “GIL stands for Global Interpreter Lock. It's a CPython mechanism that ensures only one thread executes Python bytecode at a time. This simplifies memory management but prevents true multi-threading for CPU-bound tasks. For parallel processing, Python supports multiprocessing, where each process has its own GIL. For I/O-bound tasks, threading works fine because threads can yield during blocking I/O.”

