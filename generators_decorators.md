# ⚙️ Python Interview Notes: Generators & Decorators

---

## ✅ 1. Generators

### 🧠 What is a Generator?

Generators are **functions that return an iterator** and allow you to iterate over a sequence **lazily** — meaning values are produced **on the fly**, which is memory efficient.

---

### 📌 Why Use Generators?

- Better **performance** for large data.
- No need to store the whole sequence in memory.
- Used with `for`, `next()`, and in `for line in file`.

---

### 📦 Creating a Generator – Two Ways

#### ✅ A. Using `yield`

```python
def count_up_to(n):
    i = 1
    while i <= n:
        yield i
        i += 1

gen = count_up_to(3)
print(next(gen))  # ➝ 1
print(next(gen))  # ➝ 2
print(next(gen))  # ➝ 3
# next(gen) ➝ StopIteration
```

✅ **Key Point:** `yield` "pauses" the function and resumes on the next call.

---

#### ✅ B. Using Generator Expression

Similar to list comprehension but uses `()` instead of `[]`.

```python
gen = (x * x for x in range(4))
for num in gen:
    print(num)
# ➝ 0, 1, 4, 9
```

---

### 🔄 Generator vs List

| Feature        | Generator            | List                 |
|----------------|----------------------|----------------------|
| Syntax         | `()`                 | `[]`                 |
| Memory usage   | Low (lazy eval)      | High (eager)         |
| Use case       | Large/unknown data   | Small data sets      |

---

### 🧪 Interview Tip

**Q: When do you prefer a generator over a list?**  
A: When working with large datasets or infinite sequences to avoid memory overload.

---

## ✅ 2. Decorators

### 🧠 What is a Decorator?

A decorator is a function that **wraps another function** to **extend its behavior** without changing its code.

---

### 📌 Use Cases

- Logging
- Authentication
- Timing execution
- Access control

---

### 🏗️ Basic Syntax

```python
def decorator(func):
    def wrapper():
        print("Before function call")
        func()
        print("After function call")
    return wrapper

@decorator
def say_hello():
    print("Hello!")

say_hello()
# Output:
# Before function call
# Hello!
# After function call
```

---

### 🔁 Decorators with Arguments

```python
def greet_decorator(func):
    def wrapper(name):
        print("Starting...")
        func(name)
        print("Ending...")
    return wrapper

@greet_decorator
def greet(name):
    print(f"Hi, {name}!")

greet("Chinmay")
# ➝ Starting...
# ➝ Hi, Chinmay!
# ➝ Ending...
```

---

### 🧱 Chaining Decorators

```python
def decorator1(func):
    def wrapper():
        print("Decorator 1")
        func()
    return wrapper

def decorator2(func):
    def wrapper():
        print("Decorator 2")
        func()
    return wrapper

@decorator1
@decorator2
def hello():
    print("Hello")

hello()
# Output:
# Decorator 1
# Decorator 2
# Hello
```

---

### 💡 Real Example – Timing Execution

```python
import time

def timer(func):
    def wrapper():
        start = time.time()
        func()
        end = time.time()
        print(f"Time taken: {end - start:.4f} sec")
    return wrapper

@timer
def slow_function():
    time.sleep(1)
    print("Done sleeping.")

slow_function()
```

---

### 🧪 Interview Tip

**Q: Can decorators be used on class methods?**  
A: Yes, but `self` must be handled properly inside the wrapper.

---

## 📋 Summary Table

| Feature      | Generators                            | Decorators                                   |
|--------------|----------------------------------------|----------------------------------------------|
| Purpose      | Yield values lazily (efficient loops) | Extend/modify function behavior              |
| Syntax       | `yield` or `(x for x in y)`            | `@decorator_name`                            |
| Common Uses  | Iterating large files, streams         | Logging, access control, pre/post processing |
| Key Benefit  | Memory efficiency                      | Code modularity & DRY                        |

---
