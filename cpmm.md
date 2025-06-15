# 🧠 Python: Multiprocessing vs Multithreading vs Concurrency vs Parallelism

---

## 🔄 What is Concurrency?

> **Concurrency** is about **managing multiple tasks** at the same time — even if they're not truly running in parallel.

- Tasks may take turns using the CPU
- Useful when waiting (e.g. file, network, sleep)
- Doesn’t always improve speed, but keeps the app responsive

### ✅ Example (Concurrency with `threading`)

```python
import threading
import time

def download():
    print("Start download")
    time.sleep(2)
    print("Download complete")

thread1 = threading.Thread(target=download)
thread2 = threading.Thread(target=download)

thread1.start()
thread2.start()
```

Even with **1 CPU core**, both threads switch during `sleep()` → concurrency

---

## ⚡ What is Parallelism?

> **Parallelism** is about **truly doing multiple tasks at the same time** — using **multiple CPU cores**.

- Improves speed for **CPU-heavy** tasks
- Needs multiprocessing

### ✅ Example (Parallelism with `multiprocessing`)

```python
from multiprocessing import Process

def compute():
    print("Start CPU task")
    x = sum(i*i for i in range(10**6))
    print("Done")

p1 = Process(target=compute)
p2 = Process(target=compute)

p1.start()
p2.start()
```

Runs on **separate CPU cores** → true parallel execution

---

## 🧵 What is Multithreading?

> Running multiple threads inside one Python process.

- Good for **I/O-bound** tasks
- Limited by GIL (Global Interpreter Lock)
- Not good for CPU-bound work in CPython

### ✅ Good for:
- Reading files
- Web scraping
- API calls

---

## 🧠 What is Multiprocessing?

> Running multiple **independent Python processes**, each with its own memory and GIL.

- Great for **CPU-bound** tasks
- Achieves **true parallelism**

### ✅ Good for:
- Heavy computation (math, ML)
- Long loops
- Data processing

---

## 🔄 GIL and Python

- Python (CPython) has a **Global Interpreter Lock (GIL)**
- GIL allows only **1 thread to run Python code at a time**
- This limits **multithreading performance** for CPU-bound code

✅ Solution: Use **`multiprocessing`** for CPU-heavy tasks

---

## 📌 Summary Table

| Concept         | Uses Threads? | Uses Cores? | Good for         | Python Tool         |
|-----------------|---------------|-------------|------------------|----------------------|
| Concurrency     | ✅ Yes         | ❌ Not always | I/O-bound, switching | `threading`, `asyncio` |
| Parallelism     | ❌ Not always  | ✅ Yes        | CPU-bound         | `multiprocessing`   |
| Multithreading  | ✅ Yes         | ❌ One core   | I/O-bound         | `threading`         |
| Multiprocessing | ❌ Processes   | ✅ Yes        | CPU-bound         | `multiprocessing`   |

---

## ✅ Interview Answer (Short Version)

> “Multithreading allows tasks to switch while waiting (good for I/O), but it's limited by GIL in Python.  
Multiprocessing creates separate processes that run in parallel on multiple cores — ideal for CPU-heavy work.  
Concurrency is about structuring code to manage multiple tasks at once, while parallelism means actually doing them at the same time.”

