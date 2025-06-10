# 🐍 Python OOP Concepts – Interview-Ready Notes

---

## 📦 What is OOP?

**Object-Oriented Programming (OOP)** is a programming paradigm that organizes code into **objects** that bundle **data** (attributes) and **behavior** (methods).

Python supports all major OOP principles:  
🔸 Class & Object  
🔸 Encapsulation  
🔸 Inheritance  
🔸 Polymorphism  
🔸 Abstraction  
🔸 Special Methods (`__init__`, `__str__`, etc.)  
🔸 Classmethods, Staticmethods  
🔸 Composition vs Inheritance

---

## 🧱 1. Class and Object

### 🔹 Class: A blueprint
### 🔹 Object: An instance of a class

```python
class Dog:
    def __init__(self, name):
        self.name = name
    
    def bark(self):
        print(f"{self.name} says woof!")

dog1 = Dog("Tommy")
dog1.bark()  # Tommy says woof!
```

---

## 🔐 2. Encapsulation

Encapsulation means **hiding internal details** and exposing only what's necessary.

### 🔹 Use `_` (protected) or `__` (private) to restrict access:

```python
class BankAccount:
    def __init__(self):
        self.__balance = 0  # private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def get_balance(self):
        return self.__balance

acct = BankAccount()
acct.deposit(1000)
print(acct.get_balance())  # 1000
# print(acct.__balance)    ❌ AttributeError
```

---

## 🧬 3. Inheritance

Allows one class to **inherit** properties and methods from another.

```python
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):
        print("Dog barks")

d = Dog()
d.speak()  # Dog barks
```

---

## 🧠 4. Polymorphism

Polymorphism means **same method name, different behavior**.

```python
class Bird:
    def fly(self):
        print("Bird flies")

class Airplane:
    def fly(self):
        print("Airplane flies")

def lift_off(entity):
    entity.fly()

lift_off(Bird())       # Bird flies
lift_off(Airplane())   # Airplane flies
```

---

## 🧊 5. Abstraction

Abstraction means hiding complex logic and exposing only what’s needed.

In Python, use **abstract base classes** (ABCs) using the `abc` module.

```python
from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def start(self):
        pass

class Car(Vehicle):
    def start(self):
        print("Car started")

c = Car()
c.start()
```

---

## 🧪 6. Special (Magic/Dunder) Methods

These are methods that start and end with `__`, used to customize behavior.

| Method        | Purpose                          |
|---------------|----------------------------------|
| `__init__`    | Constructor                      |
| `__str__`     | String representation            |
| `__len__`     | Length using `len()`             |
| `__eq__`      | Equality `==`                    |
| `__repr__`    | Official string representation   |

```python
class Book:
    def __init__(self, title):
        self.title = title
    
    def __str__(self):
        return f"Book: {self.title}"

b = Book("Python 101")
print(b)  # Book: Python 101
```

---

## 🧭 7. Classmethod vs Staticmethod

### 🔸 `@classmethod`: works with the class (`cls`)
### 🔸 `@staticmethod`: behaves like a normal function inside a class

```python
class Person:
    count = 0

    def __init__(self, name):
        self.name = name
        Person.count += 1

    @classmethod
    def get_count(cls):
        return cls.count

    @staticmethod
    def is_adult(age):
        return age >= 18

print(Person.is_adult(20))     # True
print(Person.get_count())      # 0
```

---

## 🧱 8. Composition

**Composition** means using objects of other classes in a class, like "has-a" relationship.

```python
class Engine:
    def start(self):
        print("Engine starts")

class Car:
    def __init__(self):
        self.engine = Engine()  # composition

    def drive(self):
        self.engine.start()
        print("Car is moving")

c = Car()
c.drive()
```

---

## 🧮 9. Multiple Inheritance

Python allows a class to inherit from **multiple classes**.

```python
class A:
    def show(self):
        print("A")

class B:
    def show(self):
        print("B")

class C(A, B):
    pass

obj = C()
obj.show()  # A (MRO: left to right)
```

---

## 🔄 10. Method Overriding

A child class **overrides** a method from parent class.

```python
class Parent:
    def greet(self):
        print("Hello from Parent")

class Child(Parent):
    def greet(self):
        print("Hello from Child")

c = Child()
c.greet()  # Hello from Child
```

---

## 🧰 11. `super()`

Used to call **parent class methods** inside child class.

```python
class Animal:
    def sound(self):
        print("Generic sound")

class Dog(Animal):
    def sound(self):
        super().sound()
        print("Bark")

d = Dog()
d.sound()
# ➝ Generic sound
# ➝ Bark
```

---

## ✅ Summary Table

| Concept           | Description                                      |
|-------------------|--------------------------------------------------|
| Class/Object      | Blueprint and instances                         |
| Encapsulation     | Hide internal details                           |
| Inheritance       | Reuse code from base class                      |
| Polymorphism      | One interface, many implementations             |
| Abstraction       | Expose only essential parts                     |
| Magic Methods     | Customize object behavior                       |
| Classmethod       | Method that gets the class (`cls`)              |
| Staticmethod      | Independent function inside a class             |
| Composition       | “Has-a” relationship (uses another class)       |
| super()           | Call methods of parent class                    |

---

🧠 **Interview Tip**:  
Explain OOP with real-life examples like `Car`, `Engine`, `Vehicle`, `Animal`, etc. Be ready to **implement or debug class-based code** in Python.

