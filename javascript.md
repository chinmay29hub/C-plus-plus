```markdown
# ⭐️ JavaScript Interview Notes ⭐️

## ⌨️ (0:00:00) Intro
These notes cover the most common JavaScript interview topics, focusing on core concepts like functions, closures, currying, and more.

---

## ⌨️ (0:01:48) Function Declaration
**Definition**: A named function defined using the `function` keyword.

```js
function greet() {
  console.log("Hello");
}
greet(); // Output: Hello
```

✅ Hoisted (can be used before it's declared)

---

## ⌨️ (0:02:13) Function Expression
**Definition**: A function assigned to a variable.

```js
const greet = function() {
  console.log("Hi");
};
greet(); // Output: Hi
```

⚠️ Not hoisted like declarations.

---

## ⌨️ (0:02:34) Anonymous Function
**Definition**: A function without a name, usually used as a callback.

```js
setTimeout(function() {
  console.log("Anonymous function");
}, 1000);
```

---

## ⌨️ (0:03:25) First Class Functions
**Definition**: JavaScript treats functions as values.

- You can pass them as arguments
- Return them from other functions
- Assign to variables

```js
function sayHi() {
  return "Hi!";
}
function greet(fn) {
  console.log(fn());
}
greet(sayHi); // Output: Hi!
```

---

## ⌨️ (0:04:54) What is IIFE?
**Immediately Invoked Function Expression**: Runs as soon as it's defined.

```js
(function() {
  console.log("IIFE executed");
})();
```

🔒 Used to avoid polluting global scope.

---

## ⌨️ (0:06:05) IIFE - Interview Question
**Q: Why use IIFE?**
- Data privacy
- Module creation before ES6
- Encapsulation

---

## ⌨️ (0:06:59) Closures
**Definition**: Functions that remember their outer scope even after the outer function has executed.

```js
function outer() {
  let count = 0;
  return function inner() {
    return ++count;
  };
}
const counter = outer();
console.log(counter()); // 1
console.log(counter()); // 2
```

---

## ⌨️ (0:07:27) Function Scopes
**Definition**: Scope defines variable access. `var` is function scoped; `let/const` are block scoped.

```js
function example() {
  var a = 1;
  if (true) {
    let b = 2;
  }
  console.log(a); // OK
  // console.log(b); // Error
}
```

---

## ⌨️ (0:09:10) Function Scope - Interview Question
**Q: Why doesn't `let` leak outside a block like `var`?**

`let`/`const` are block scoped. `var` is function scoped — hence accessible outside `{}`.

---

## ⌨️ (0:10:18) Hoisting in Functions
Function declarations are hoisted. Function expressions are not.

```js
hoisted(); // Works
function hoisted() {
  console.log("Hoisted function");
}

// notHoisted(); // Error
const notHoisted = function() {
  console.log("Not hoisted");
};
```

---

## ⌨️ (0:13:40) Hoisting - Interview Question
**Q: What gets hoisted in functions?**
- Declarations are hoisted.
- Initializations are not.

---

## ⌨️ (0:15:46) Params vs Arguments
- **Parameters**: variables in function definition
- **Arguments**: values passed when calling

```js
function add(a, b) { // a, b = parameters
  return a + b;
}
add(2, 3); // 2, 3 = arguments
```

---

## ⌨️ (0:16:25) Spread vs Rest Operators

### Spread `...` (expands items):
```js
let arr = [1, 2, 3];
console.log(...arr); // 1 2 3
```

### Rest `...` (gathers into array):
```js
function sum(...args) {
  return args.reduce((a, b) => a + b);
}
sum(1, 2, 3); // 6
```

---

## ⌨️ (0:17:43) Interview Question on params, args, spread, rest
**Q: Difference between rest and arguments object?**
- `arguments` is array-like, rest is real array.
- `arguments` doesn't exist in arrow functions.

---

## ⌨️ (0:19:03) Callback Function
A function passed to another function to be executed later.

```js
function greet(name, callback) {
  callback(name);
}
greet("Chinmay", function(n) {
  console.log("Hello " + n);
});
```

---

## ⌨️ (0:20:02) Callback Function - Interview Questions
**Q: Why use callbacks?**
- Async tasks (e.g. API, setTimeout)
- Functional composition

---

## ⌨️ (0:20:58) Arrow Functions

```js
const add = (a, b) => a + b;
```

✅ Short syntax  
❌ No own `this`, `arguments`, `super`, or `new.target`

---

## ⌨️ (0:21:59) Arrow function vs Normal Function

| Feature       | Arrow Function | Normal Function |
|---------------|----------------|-----------------|
| `this`        | Inherited      | Own binding     |
| `arguments`   | Not available  | Available       |
| Constructor   | ❌             | ✅              |

---

## ⌨️ (0:25:13) Closures
Covered above — revisit if needed.

---

## ⌨️ (0:25:50) What is Lexical Scope?
**Definition**: Scope is determined by **where** a function is defined, not where it's called.

---

## ⌨️ (0:27:39) Lexical Scope - Interview Question
**Q: How does lexical scope differ from dynamic scope?**
Lexical = compile-time  
Dynamic = runtime (not in JS)

---

## ⌨️ (0:28:53) What is Closure?
Already explained — it's a function + its lexical environment.

---

## ⌨️ (0:29:44) Example of Closures
```js
function makeMultiplier(x) {
  return function(y) {
    return x * y;
  };
}
const double = makeMultiplier(2);
console.log(double(5)); // 10
```

---

## ⌨️ (0:30:57) Why Closure?
- Data encapsulation
- Persistent state
- Implement modules

---

## ⌨️ (0:32:20) Closure Scope Chain
Closures can access:
- Their own scope
- Outer function scopes
- Global scope

---

## ⌨️ (0:35:13) Ques 1 - What will it print?

```js
for (var i = 0; i < 5; i++) {
  setTimeout(() => console.log(i), 1000);
}
// Output: 5 5 5 5 5
```

Fix:
```js
for (let i = 0; i < 5; i++) {
  setTimeout(() => console.log(i), 1000);
}
```

---

## ⌨️ (0:37:10) Ques 2 - Write a function for this
Create a counter:
```js
function createCounter() {
  let count = 0;
  return function() {
    return ++count;
  };
}
const counter = createCounter();
console.log(counter()); // 1
```

---

## ⌨️ (0:39:29) Ques 3 - Time Optimisation with Closures
Cache heavy calculation:
```js
function heavyCalc() {
  let cache = {};
  return function(n) {
    if (cache[n]) return cache[n];
    console.log("Calculating...");
    return (cache[n] = n * n);
  };
}
const square = heavyCalc();
square(4); // Calculating...
square(4); // Uses cache
```

---

## ⌨️ (0:42:08) Ques 4 - setTimeout + block scope
```js
for (var i = 0; i < 3; i++) {
  ((j) => {
    setTimeout(() => console.log(j), 1000);
  })(i);
}
```

---

## ⌨️ (0:47:08) Ques 5 - Create a private counter
See above → `createCounter()` uses closure for privacy.

---

## ⌨️ (0:49:49) Ques 6 - What is Module Pattern?
A way to create private + public access.

```js
const CounterModule = (function() {
  let count = 0;
  return {
    increment: () => ++count,
    reset: () => count = 0,
  };
})();
```

---

## ⌨️ (0:51:40) Ques 7 - Make this run only once
```js
function once(fn) {
  let called = false;
  return function(...args) {
    if (!called) {
      called = true;
      return fn(...args);
    }
  };
}
```

---

## ⌨️ (0:54:18) Ques 8 - Once Polyfill Implementation
Same as above. Real-world use: `addEventListener` cleanup, config-only initializations.

---

## ⌨️ (0:58:11) Ques 9 - Memoise/Caching Implementation
```js
function memoize(fn) {
  const cache = {};
  return function(...args) {
    const key = JSON.stringify(args);
    if (cache[key]) return cache[key];
    return (cache[key] = fn(...args));
  };
}
```

---

## ⌨️ (1:03:46) Ques 10 - Closure vs Scope
- **Scope**: Where variables are accessible
- **Closure**: Function with preserved scope chain

---

## ⌨️ (1:04:25) Currying
Transform function with multiple args into a chain of functions.

```js
function curry(a) {
  return function(b) {
    return function(c) {
      return a + b + c;
    };
  };
}
```

---

## ⌨️ (1:04:55) What is Currying in JavaScript?
Technique to break a function `f(a, b, c)` into `f(a)(b)(c)`

---

## ⌨️ (1:05:23) Example of Currying
See above. Use-case: reusability, partial function application.

---

## ⌨️ (1:08:17) Ques 1 - Implement sum(2)(6)(1)
```js
function sum(a) {
  return function(b) {
    return function(c) {
      return a + b + c;
    };
  };
}
```

---

## ⌨️ (1:11:02) Ques 2 - Reusing Variable for logic
```js
const add = a => b => a + b;
const add5 = add(5);
console.log(add5(10)); // 15
```

---

## ⌨️ (1:14:09) Ques 3 - Infinite Currying
```js
function sum(a) {
  return function(b) {
    if (b) return sum(a + b);
    return a;
  };
}
console.log(sum(2)(3)(4)()); // 9
```

---

## ⌨️ (1:18:27) Ques 4 - Currying vs Partial Application

- **Currying**: Transforms a function of N args into N functions
- **Partial**: Pre-fills some arguments

```js
function partialSum(a, b, c) {
  return a + b + c;
}
const partial = partialSum.bind(null, 2);
partial(3, 4); // 9
```

---

## ⌨️ (1:20:37) Ques 5 - Manipulating DOM
```js
document.getElementById("btn").addEventListener("click", function() {
  alert("Clicked!");
});
```

---

## ⌨️ (1:23:01) Ques 6 - curry() implementation
```js
function curry(fn) {
  return function curried(...args) {
    if (args.length >= fn.length) {
      return fn(...args);
    } else {
      return function(...next) {
        return curried(...args, ...next);
      };
    }
  };
}
```

---
```
