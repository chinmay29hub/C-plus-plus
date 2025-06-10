### Core OOP Concepts with Simple C# Inline Code (Animal and Dog)
Below are the five main OOP concepts, each with a brief, simple explanation and a short C# code block using **Animal** and **Dog**. The code is inline (no artifacts), self-contained, and ready to run in a C# console app (e.g., Visual Studio).

#### 1. Classes and Objects
**What It Is**: A **class** is a template (like an animal blueprint) with properties and behaviors. An **object** is a specific instance (like a dog named Max).

**C# Code**:
```csharp
using System;

class Animal
{
    public string Name = "Max";

    public void ShowName()
    {
        Console.WriteLine($"Name: {Name}");
    }
}

class Program
{
    static void Main()
    {
        Animal dog = new Animal(); // Object
        dog.ShowName(); // Output: Name: Max
    }
}
```

**Explanation**:
- `Animal` is a class with a property (`Name`) and method (`ShowName`).
- `dog` is an object of `Animal`, like a specific dog.
- **Interview Tie**: “Classes like `Animal` let me model entities, similar to how I structured data in Audit Accelerator.”

#### 2. Encapsulation
**What It Is**: Hiding data (like a dog’s age) inside a class and controlling access with `private` and public methods, like a safe for sensitive info.

**C# Code**:
```csharp
using System;

class Animal
{
    private int age = 5; // Hidden

    public int GetAge() // Access
    {
        return age;
    }

    public void SetAge(int newAge) // Control
    {
        if (newAge >= 0)
            age = newAge;
    }
}

class Program
{
    static void Main()
    {
        Animal dog = new Animal();
        Console.WriteLine($"Age: {dog.GetAge()}"); // Output: Age: 5
        dog.SetAge(7);
        Console.WriteLine($"New Age: {dog.GetAge()}"); // Output: New Age: 7
    }
}
```

**Explanation**:
- `age` is `private`, so it’s hidden.
- `GetAge` and `SetAge` control access, ensuring valid updates.
- **Interview Tie**: “Encapsulation protects data, like I secured invoice data in Audit Accelerator.”

#### 3. Inheritance
**What It Is**: A class (like `Dog`) inherits properties and methods from another (like `Animal`), adding its own features, like a dog being a specific animal.

**C# Code**:
```csharp
using System;

class Animal
{
    public string Type = "Animal";

    public void ShowType()
    {
        Console.WriteLine($"Type: {Type}");
    }
}

class Dog : Animal
{
    public string Breed = "Labrador";

    public void ShowBreed()
    {
        Console.WriteLine($"Breed: {Breed}");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog();
        dog.ShowType(); // Output: Type: Animal
        dog.ShowBreed(); // Output: Breed: Labrador
    }
}
```

**Explanation**:
- `Animal` is the base class with `Type` and `ShowType`.
- `Dog` inherits from `Animal` (`: Animal`) and adds `Breed` and `ShowBreed`.
- `dog` uses both `Animal` and `Dog` features.
- **Interview Tie**: “Inheritance reuses code, like I reused logic in my C# plugin for Audit Accelerator.”

#### 4. Polymorphism
**What It Is**: Different classes (like `Dog`) can use the same method name (like `MakeSound`) but act differently, like a dog barking instead of a generic sound.

**C# Code**:
```csharp
using System;

class Animal
{
    public virtual void MakeSound() // Can be overridden
    {
        Console.WriteLine("Generic sound");
    }
}

class Dog : Animal
{
    public override void MakeSound() // Specific behavior
    {
        Console.WriteLine("Bark");
    }
}

class Program
{
    static void Main()
    {
        Animal dog = new Dog();
        dog.MakeSound(); // Output: Bark
    }
}
```

**Explanation**:
- `Animal` has a `virtual` method `MakeSound`.
- `Dog` overrides it with `override` to bark.
- `dog` (type `Animal`) calls `Dog`’s version due to polymorphism.
- **Interview Tie**: “Polymorphism lets different entities behave uniquely, like I customized data processing in Audit Accelerator.”

#### 5. Abstraction
**What It Is**: Hiding complex details (like sound-making logic) and showing only simple interfaces (like a `MakeSound` method), like a button hiding machinery.

**C# Code**:
```csharp
using System;

abstract class Animal
{
    public abstract void MakeSound(); // Must be implemented
}

class Dog : Animal
{
    public override void MakeSound()
    {
        Console.WriteLine("Bark");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog();
        dog.MakeSound(); // Output: Bark
    }
}
```

**Explanation**:
- `Animal` is an `abstract` class with an `abstract` method `MakeSound`.
- `Dog` must implement `MakeSound`, hiding how it works.
- `dog` only exposes the simple `MakeSound` call.
- **Interview Tie**: “Abstraction simplifies Quantum Phinance’s system, like I simplified data access in Compliance API.”

<br>
<hr>

---

### OOP Topics with Simple C# Inline Code (Animal and Dog)
Below are the requested OOP topics, each with a brief, simple explanation and a short C# code block using **Animal** and **Dog**. The code is inline, self-contained, and ready to run.

#### 1. Constructor Overloading
**What It Is**: Creating multiple constructors in a class with different parameters (e.g., one for just name, another for name and age).

**C# Code**:
```csharp
using System;

class Animal
{
    public string Name;
    public int Age;

    public Animal() // No parameters
    {
        Name = "Unknown";
        Age = 0;
    }

    public Animal(string name) // One parameter
    {
        Name = name;
        Age = 0;
    }

    public Animal(string name, int age) // Two parameters
    {
        Name = name;
        Age = age;
    }

    public void ShowInfo()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}");
    }
}

class Program
{
    static void Main()
    {
        Animal dog1 = new Animal(); // Uses no-param constructor
        Animal dog2 = new Animal("Max"); // Uses one-param
        Animal dog3 = new Animal("Rex", 5); // Uses two-param
        dog1.ShowInfo(); // Output: Name: Unknown, Age: 0
        dog2.ShowInfo(); // Output: Name: Max, Age: 0
        dog3.ShowInfo(); // Output: Name: Rex, Age: 5
    }
}
```

**Explanation**:
- `Animal` has three constructors: no parameters, one parameter (`name`), and two parameters (`name`, `age`).
- Each constructor initializes fields differently, giving flexibility.
- **Interview Tie**: “Constructor overloading lets me create objects flexibly, like initializing data in Audit Accelerator.”

#### 2. Method Overloading
**What It Is**: Defining multiple methods with the same name but different parameters (number, type, or order).

**C# Code**:
```csharp
using System;

class Animal
{
    public void MakeSound()
    {
        Console.WriteLine("Generic sound");
    }

    public void MakeSound(string sound) // Different parameter
    {
        Console.WriteLine(sound);
    }

    public void MakeSound(int times) // Different type
    {
        for (int i = 0; i < times; i++)
            Console.WriteLine("Woof");
    }
}

class Program
{
    static void Main()
    {
        Animal dog = new Animal();
        dog.MakeSound(); // Output: Generic sound
        dog.MakeSound("Bark"); // Output: Bark
        dog.MakeSound(2); // Output: Woof \n Woof
    }
}
```

**Explanation**:
- `MakeSound` is overloaded with no parameters, a `string` parameter, and an `int` parameter.
- Each version behaves differently based on input.
- **Interview Tie**: “Method overloading adds flexibility, like I used varied methods in Audit Accelerator.”

#### 3. Static vs Instance Members
**What It Is**: **Static** members belong to the class (shared across all objects), while **instance** members belong to a specific object.

**C# Code**:
```csharp
using System;

class Animal
{
    public static int AnimalCount = 0; // Static, shared
    public string Name; // Instance, per object

    public Animal(string name)
    {
        Name = name;
        AnimalCount++; // Update static count
    }

    public void ShowName()
    {
        Console.WriteLine($"Name: {Name}");
    }

    public static void ShowCount()
    {
        Console.WriteLine($"Total Animals: {AnimalCount}");
    }
}

class Program
{
    static void Main()
    {
        Animal dog1 = new Animal("Max");
        Animal dog2 = new Animal("Rex");
        dog1.ShowName(); // Output: Name: Max
        Animal.ShowCount(); // Output: Total Animals: 2
    }
}
```

**Explanation**:
- `AnimalCount` is `static`, tracking total animals across all objects.
- `Name` is an instance member, unique to each `Animal` object.
- **Interview Tie**: “Static members track shared data, like I managed shared configs in Audit Accelerator.”

#### 4. ‘this’ Keyword Usage
**What It Is**: Refers to the current object, often used to distinguish instance fields from parameters in constructors or methods.

**C# Code**:
```csharp
using System;

class Animal
{
    public string name;

    public Animal(string name)
    {
        this.name = name; // 'this' distinguishes field from parameter
    }

    public void UpdateName(string name)
    {
        this.name = name; // 'this' clarifies instance field
    }

    public void ShowName()
    {
        Console.WriteLine($"Name: {this.name}"); // 'this' optional here
    }
}

class Program
{
    static void Main()
    {
        Animal dog = new Animal("Max");
        dog.ShowName(); // Output: Name: Max
        dog.UpdateName("Rex");
        dog.ShowName(); // Output: Name: Rex
    }
}
```

**Explanation**:
- `this.name` refers to the instance field, avoiding confusion with the `name` parameter.
- Used in constructor and method to clarify scope.
- **Interview Tie**: “The `this` keyword ensures clear field access, like I clarified variables in Audit Accelerator.”

#### 5. Base Keyword Usage
**What It Is**: Calls a base class constructor or method from a derived class, accessing parent functionality.

**C# Code**:
```csharp
using System;

class Animal
{
    public string Type;

    public Animal(string type)
    {
        Type = type;
    }

    public virtual void ShowType()
    {
        Console.WriteLine($"Type: {Type}");
    }
}

class Dog : Animal
{
    public string Breed;

    public Dog(string type, string breed) : base(type) // Call base constructor
    {
        Breed = breed;
    }

    public override void ShowType()
    {
        base.ShowType(); // Call base method
        Console.WriteLine($"Breed: {Breed}");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog("Canine", "Labrador");
        dog.ShowType(); // Output: Type: Canine \n Breed: Labrador
    }
}
```

**Explanation**:
- `: base(type)` calls `Animal`’s constructor from `Dog`.
- `base.ShowType()` calls `Animal`’s method before adding `Dog`’s logic.
- **Interview Tie**: “The `base` keyword reuses parent logic, like I reused code in Audit Accelerator.”

#### 6. Access Modifiers
**What It Is**: Control access to class members (`public`: anyone, `private`: class only, `protected`: class and derived, `internal`: same assembly).

**C# Code**:
```csharp
using System;

class Animal
{
    public string Name = "Max"; // Anyone can access
    private int age = 5; // Only Animal can access
    protected string type = "Canine"; // Animal and derived
    internal int Id = 1; // Same assembly

    public void ShowDetails()
    {
        Console.WriteLine($"Name: {Name}, Age: {age}, Type: {type}, ID: {Id}");
    }
}

class Dog : Animal
{
    public void ShowType()
    {
        Console.WriteLine($"Type: {type}"); // Access protected
    }
}

class Program
{
    static void Main()
    {
        Animal animal = new Animal();
        animal.ShowDetails(); // Output: Name: Max, Age: 5, Type: Canine, ID: 1
        Dog dog = new Dog();
        dog.ShowType(); // Output: Type: Canine
    }
}
```

**Explanation**:
- `Name` (`public`) is accessible everywhere.
- `age` (`private`) is only in `Animal`.
- `type` (`protected`) is in `Animal` and `Dog`.
- `Id` (`internal`) is assembly-wide.
- **Interview Tie**: “Access modifiers control data, like I protected data in Compliance API.”

#### 7. Sealed Classes and Methods
**What It Is**: A `sealed` class prevents inheritance; a `sealed` method prevents overriding, locking behavior.

**C# Code**:
```csharp
using System;

class Animal
{
    public virtual void MakeSound()
    {
        Console.WriteLine("Generic sound");
    }
}

sealed class Dog : Animal // No further inheritance
{
    public override sealed void MakeSound() // No further overriding
    {
        Console.WriteLine("Bark");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog();
        dog.MakeSound(); // Output: Bark
    }
}
```

**Explanation**:
- `Dog` is `sealed`, so no class can inherit from it.
- `MakeSound` is `sealed`, so no derived class can override it.
- **Interview Tie**: “Sealed classes lock functionality, like I finalized logic in Audit Accelerator.”

#### 8. Interfaces
**What It Is**: A contract defining methods a class must implement, providing pure abstraction without implementation.

**C# Code**:
```csharp
using System;

interface IAnimal
{
    void MakeSound(); // Contract
}

class Dog : IAnimal
{
    public void MakeSound()
    {
        Console.WriteLine("Bark");
    }
}

class Program
{
    static void Main()
    {
        Dog dog = new Dog();
        dog.MakeSound(); // Output: Bark
    }
}
```

**Explanation**:
- `IAnimal` defines `MakeSound`, which `Dog` must implement.
- Ensures `Dog` follows the contract, like a standard interface.
- **Interview Tie**: “Interfaces ensure consistent behavior, like I ensured standards in Compliance API.”

#### 9. Constructor Chaining
**What It Is**: Using `: this()` or `: base()` to call another constructor in the same or base class, reusing initialization logic.

**C# Code**:
```csharp
using System;

class Animal
{
    public string Name;
    public int Age;

    public Animal() : this("Unknown", 0) // Chain to two-param
    {
    }

    public Animal(string name, int age)
    {
        Name = name;
        Age = age;
    }
}

class Dog : Animal
{
    public string Breed;

    public Dog(string name, int age, string breed) : base(name, age) // Chain to base
    {
        Breed = breed;
    }
}

class Program
{
    static void Main()
    {
        Animal animal = new Animal();
        Dog dog = new Dog("Max", 5, "Labrador");
        Console.WriteLine($"Animal: {animal.Name}, {animal.Age}"); // Output: Animal: Unknown, 0
        Console.WriteLine($"Dog: {dog.Name}, {dog.Breed}"); // Output: Dog: Max, Labrador
    }
}
```

**Explanation**:
- `Animal`’s no-param constructor chains to its two-param constructor with `: this("Unknown", 0)`.
- `Dog` chains to `Animal`’s constructor with `: base(name, age)`.
- **Interview Tie**: “Constructor chaining reuses initialization, like I reused setup in Audit Accelerator.”

---
