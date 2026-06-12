# C++ Object-Oriented Programming (OOP) Core Concepts

Welcome to my C++ Object-Oriented Programming repository! This collection serves as a centralized lab space documenting my transition from raw procedural programming to clean, industry-standard software design. 

Each program in this repository isolates and implements core software architectures, design patterns, and the foundational pillars of OOP.

## 📂 Repository Structure & Concept Index

The files in this repository are organized by the specific OOP pillars and programming challenges they solve:

### 1. Encapsulation & Data Hiding
* **Focus Files:** `login.cpp`
* **Core Concepts:** Access modifiers (`private`, `public`), Constructor initialization, state tracking, and memory stream management.
* **Problem Solved:** Moving sensitive system properties (like user credentials and retry maximums) out of the global scope and safely hiding them inside self-contained objects. Resolves terminal buffer vulnerabilities by standardizing input sequences inside member methods.

### 2. Inheritance & Class Hierarchies (Upcoming / In Progress)
* **Focus Files:** `UserManagement.cpp`, `BankingSystem.cpp`
* **Core Concepts:** Base vs. Derived classes, access control (`protected`), and code reusability.
* **Problem Solved:** Eliminating duplicate code blocks (DRY principle) by creating generic parent frameworks (e.g., a baseline `User` account) and extending them into specific domain models (e.g., `Student` or `Teacher` tiers).

### 3. Polymorphism & Dynamic Binding (Planned)
* **Core Concepts:** Virtual functions, runtime method overriding, and abstract classes (interfaces).
* **Problem Solved:** Designing modular systems where a single interface can trigger completely different behaviors depending on the underlying object type at runtime.

---

## 🛠️ Key Technical Solves Included

While exploring these OOP paradigms, this repository also serves as a log for mastering practical, real-world low-level programming challenges:

* **Input Stream Architecture:** Robust handling of the C++ input pipeline. Implements strategic positioning of `cin.ignore()` to prevent the classic "ghost input bug" where trailing newline characters (`\n`) left by standard extraction operators pass through and break subsequent `getline()` prompts.
* **Loop Control and State Management:** Eliminating infinite logical lockups by properly wrapping conditional boundaries and validation statements tightly within execution blocks.
* **Separation of Concerns (SoC):** Refactoring code to ensure `main()` acts strictly as a clean, high-level orchestrator while classes perform the localized heavy lifting.

---

## 💻 Compilation & Local Execution

All programs are written in standard, modern C++. You can compile and run any individual lab file using a standard C++ compiler (like `g++`).

```bash
# 1. Compile a specific OOP file using the C++17 standard
g++ -std=c++17 login2.cpp -o app_executable

# 2. Run the compiled console application
./app_executable
