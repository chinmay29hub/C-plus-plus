# 🧠 Python Comprehensions (Interview Ready Notes)

Comprehensions are a short and elegant way to create sequences like lists, dictionaries, and sets.

---

## ✅ 1. List Comprehension

### 📌 Syntax

```python
[expression for item in iterable if condition]
```

### ✅ Examples

**Squares of numbers:**

```python
squares = [x * x for x in range(5)]
print(squares)  # ➝ [0, 1, 4, 9, 16]
```

**Even numbers only:**

```python
evens = [x for x in range(10) if x % 2 == 0]
print(evens)  # ➝ [0, 2, 4, 6, 8]
```

**Lowercase conversion:**

```python
names = ["Chinmay", "ALICE", "BOB"]
lower_names = [name.lower() for name in names]
print(lower_names)  # ➝ ['chinmay', 'alice', 'bob']
```

---

## ✅ 2. Dictionary Comprehension

### 📌 Syntax

```python
{key_expr: value_expr for item in iterable if condition}
```

### ✅ Examples

**Number ➝ Square map:**

```python
squares = {x: x**2 for x in range(5)}
print(squares)  # ➝ {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}
```

**Filter dictionary values:**

```python
original = {'a': 1, 'b': 2, 'c': 3}
filtered = {k: v for k, v in original.items() if v % 2 != 0}
print(filtered)  # ➝ {'a': 1, 'c': 3}
```

---

## ✅ 3. Set Comprehension

### 📌 Syntax

```python
{expression for item in iterable if condition}
```

### ✅ Example

```python
names = ["Alice", "Bob", "Chinmay", "Eve", "Bob"]
lengths = {len(name) for name in names}
print(lengths)  # ➝ {3, 5, 7}
```

---

## ✅ Nested List Comprehension

```python
matrix = [[1, 2], [3, 4]]
flattened = [num for row in matrix for num in row]
print(flattened)  # ➝ [1, 2, 3, 4]
```

---

## 🔄 List vs Generator Comprehension

```python
gen = (x*x for x in range(10))  # generator (lazy)
lst = [x*x for x in range(10)]  # list (eager)
```

Generators are memory-efficient — values are produced one at a time.

---

## 🧪 Interview Tip

**Q: Can you write a comprehension with a condition?**

A:

```python
[x for x in range(10) if x % 3 == 0]
```

---

## 📋 Summary Table

| Type | Syntax | Description |
|------|--------|-------------|
| List | `[x for x in iterable]` | Keeps order, allows duplicates |
| Dict | `{k: v for k, v in iterable}` | Key-value mapping |
| Set  | `{x for x in iterable}` | Unique values only |

---
