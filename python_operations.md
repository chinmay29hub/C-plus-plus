# 🐍 Python Data Structure Operations – Lists, Dicts, Sets, Tuples

---

## 📋 LIST (Ordered, Mutable, Allows Duplicates)

### ✅ Creation

```python
lst = [1, 2, 3, 4]
```

### 🔧 Common Operations

| Operation              | Syntax                          | Example Result |
|------------------------|----------------------------------|----------------|
| Access element         | `lst[0]`                         | `1`            |
| Slice list             | `lst[1:3]`                       | `[2, 3]`       |
| Append                 | `lst.append(5)`                  | `[1,2,3,4,5]`  |
| Insert at index        | `lst.insert(1, 10)`              | `[1,10,2,...]` |
| Remove by value        | `lst.remove(2)`                  |                |
| Remove by index        | `lst.pop(1)`                     | returns `2`    |
| Length                 | `len(lst)`                       |                |
| Sort                   | `lst.sort()`                     | In-place       |
| Reverse                | `lst.reverse()`                  | In-place       |
| Copy                   | `lst.copy()`                     |                |
| Clear all items        | `lst.clear()`                    | `[]`           |

### 🧠 Extra

```python
sum(lst), min(lst), max(lst)
```

---

## 🔑 DICTIONARY (Unordered, Mutable, No Duplicates in Keys)

### ✅ Creation

```python
d = {'a': 1, 'b': 2}
```

### 🔧 Common Operations

| Operation              | Syntax                             | Example Result    |
|------------------------|-------------------------------------|-------------------|
| Access value           | `d['a']`                            | `1`               |
| Get with default       | `d.get('x', 0)`                     | `0`               |
| Add/Update key         | `d['c'] = 3`                        |                   |
| Delete key             | `del d['a']`                        |                   |
| Length                 | `len(d)`                            |                   |
| Keys                   | `d.keys()`                          | `dict_keys([...])`|
| Values                 | `d.values()`                        | `dict_values([...])`|
| Items (key, value)     | `d.items()`                         | `dict_items([...])`|
| Loop                   | `for k, v in d.items(): ...`        |                   |
| Pop key                | `d.pop('a')`                        | returns `1`       |
| Clear dictionary       | `d.clear()`                         |                   |
| Merge dicts (3.9+)     | `d1 | d2`                           |                   |

---

## 🧺 SET (Unordered, Mutable, No Duplicates)

### ✅ Creation

```python
s = {1, 2, 3}
```

### 🔧 Common Operations

| Operation              | Syntax                             | Example Result |
|------------------------|-------------------------------------|----------------|
| Add element            | `s.add(4)`                          | `{1,2,3,4}`    |
| Remove element         | `s.remove(2)`                       | KeyError if not found |
| Discard (safe remove)  | `s.discard(2)`                      | No error       |
| Length                 | `len(s)`                            |                |
| Membership             | `2 in s`                            | True/False     |
| Union                  | `s1 | s2`                           | Union of sets  |
| Intersection           | `s1 & s2`                           | Common items   |
| Difference             | `s1 - s2`                           | Unique to s1   |
| Symmetric Difference   | `s1 ^ s2`                           | Uncommon items |
| Clear set              | `s.clear()`                         | `set()`        |

---

## 🎲 TUPLE (Ordered, Immutable, Allows Duplicates)

### ✅ Creation

```python
t = (1, 2, 3)
```

### 🔧 Common Operations

| Operation              | Syntax                             | Example Result |
|------------------------|-------------------------------------|----------------|
| Access element         | `t[0]`                              | `1`            |
| Slicing                | `t[1:3]`                            | `(2, 3)`       |
| Length                 | `len(t)`                            |                |
| Count element          | `t.count(2)`                        | `1`            |
| Index of element       | `t.index(3)`                        | `2`            |
| Nested tuples          | `t = ((1, 2), (3, 4))`              |                |
| Unpacking              | `a, b, c = t`                       |                |

---

## 🧠 Data Structure Summary Table

| Feature       | List           | Dict            | Set           | Tuple         |
|---------------|----------------|------------------|---------------|---------------|
| Ordered       | ✅              | ❌ (3.7+ it is)   | ❌             | ✅             |
| Mutable       | ✅              | ✅               | ✅             | ❌             |
| Duplicates    | ✅              | ❌ (keys only)   | ❌             | ✅             |
| Indexing      | ✅              | ❌               | ❌             | ✅             |
| Iterable      | ✅              | ✅               | ✅             | ✅             |

---

## 🧪 Interview Tips

- Know when to use `list` vs `set` for **performance** (O(1) lookup in sets).
- `dict` is great for **mapping**, `set` for **uniqueness**, `tuple` for **immutability**.
- Often used together in **real-world** problems like counting, grouping, filtering, etc.

---
