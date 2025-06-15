# 🧊 Python `frozenset` - Complete Guide

## ✅ What is a `frozenset`?

A `frozenset` is an **immutable version of a `set`**. Once created, its elements **cannot be changed** (no add/remove).  
It's also **hashable**, which means it **can be used as a key in a dictionary** or **stored inside another set**.

---

## 📌 Key Differences: `set` vs `frozenset`

| Feature         | `set`            | `frozenset`      |
|-----------------|------------------|------------------|
| Mutable         | ✅ Yes           | ❌ No            |
| Hashable        | ❌ No            | ✅ Yes           |
| Can be dict key | ❌ No            | ✅ Yes           |
| Methods         | All set methods  | Only read-only   |

---

## 🛠️ Creating a `frozenset`

```python
fs = frozenset([1, 2, 3])
print(fs)  # ➝ frozenset({1, 2, 3})
```

---

## ❌ Not allowed on `frozenset`

```python
fs.add(4)        # ❌ AttributeError
fs.remove(2)     # ❌ AttributeError
```

---

## ✅ Allowed operations

```python
a = frozenset([1, 2, 3])
b = frozenset([3, 4, 5])

print(a | b)     # Union: frozenset({1, 2, 3, 4, 5})
print(a & b)     # Intersection: frozenset({3})
print(a - b)     # Difference: frozenset({1, 2})
print(3 in a)    # True
```

---

## 🧠 Why use `frozenset`?

- When you need an **immutable set**
- To use as a **dict key** or inside another `set`

```python
fs1 = frozenset(["Python", "Django"])
fs2 = frozenset(["React", "Node"])

tech_stack = {
    fs1: "Backend Dev",
    fs2: "Frontend Dev"
}

print(tech_stack[fs1])  # Backend Dev
```

---

## 🔁 Summary

- ✅ `frozenset` is just like a `set`, but immutable.
- ✅ Use it when you want a **fixed set of values** that can be **hashed**.
- ❌ You cannot add/remove elements after creation.
