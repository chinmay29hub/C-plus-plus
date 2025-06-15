# 🧠 Shallow Copy vs Deep Copy in Python

## ✅ What are copies in Python?

Copying an object means creating another object with the **same content**.  
But — in Python — how the copy behaves depends on whether it’s a **shallow** or **deep** copy.

---

## 🔹 Shallow Copy

A **shallow copy** creates a **new outer object**,  
but **inner objects are still references to the original**.

### 📌 Example:

```python
import copy

original = [[1, 2], [3, 4]]
shallow = copy.copy(original)

shallow[0][0] = 99

print(original)  # [[99, 2], [3, 4]]  ⚠ changed!
print(shallow)   # [[99, 2], [3, 4]]
```

### 🧠 Why?
- `shallow` is a new list.
- But `shallow[0]` still points to the **same inner list** as `original[0]`.

---

## 🔹 Deep Copy

A **deep copy** creates a **completely independent clone** — both outer and inner objects are copied.

### 📌 Example:

```python
import copy

original = [[1, 2], [3, 4]]
deep = copy.deepcopy(original)

deep[0][0] = 99

print(original)  # [[1, 2], [3, 4]] ✅ unchanged
print(deep)      # [[99, 2], [3, 4]]
```

### ✅ Why?
- `deep` has its own copy of every inner list.
- Changing `deep` does **not** affect `original`.

---

## 🔍 Summary Table

| Feature         | Shallow Copy             | Deep Copy                  |
|-----------------|--------------------------|----------------------------|
| Imports Needed  | `copy.copy()`            | `copy.deepcopy()`          |
| Copies outer?   | ✅ Yes                    | ✅ Yes                      |
| Copies inner?   | ❌ No (references)        | ✅ Yes (recursive)          |
| Shared objects? | ✅ Yes                    | ❌ No                       |
| Safer to use?   | ⚠ Depends                | ✅ Yes, for nested objects  |

---

## ✅ When to use what?

- Use **shallow copy** if:
  - You’re copying **flat/simple objects**
  - You **don’t plan to mutate nested items**

- Use **deep copy** if:
  - You have **nested structures** (like lists of lists, dicts of lists, etc.)
  - You need a **completely independent** copy

---

## ⚠ Gotcha: Copying with `=` is not copying!

```python
a = [1, 2, 3]
b = a           # No copy — both point to the same object

b[0] = 100
print(a)        # [100, 2, 3]  ⚠ changed!
```

Use `copy()` or `deepcopy()` instead when you really want a copy.

---

## 🧠 Interview Tip

If asked:
> What is the difference between shallow and deep copy?

Say:
> "Shallow copy only copies the outer object, but keeps references to the inner objects.  
> Deep copy recursively copies everything, so the new object is fully independent.  
> Use `copy.copy()` for shallow and `copy.deepcopy()` for deep."

