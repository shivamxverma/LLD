# Low-Level Design (LLD) & System Design Roadmap

Welcome to the LLD & System Design workspace. This repository is dedicated to mastering Low-Level Design (LLD), Object-Oriented Programming (OOP) concepts, Design Patterns, Database Schema Designs, and highly optimized concurrent programming.

---

## Core Roadmap & Progress Tracker

Use the checklists below to track your progress as you work through each concept, design pattern, and project.

### 1. Fundamental LLD Concepts & OOPs
Mastering the core building blocks of clean, modular, and maintainable software architectures.
- [ ] **OOPs (Object-Oriented Programming)** — Inheritance, Polymorphism, Encapsulation, Abstraction
- [ ] **UML Diagrams** — Class Diagrams, Use Case Diagrams, Sequence Diagrams, State Diagrams
- [ ] **SOLID Design Principles** — Single Responsibility, Open-Closed, Liskov Substitution, Interface Segregation, Dependency Inversion

---

### 2. Design Patterns (DP)
Reusable solutions to commonly occurring software design problems. Divided into Creational, Structural, and Behavioral patterns.

#### Creational Patterns
- [ ] **Factory Pattern** — Creating objects without specifying the exact class to create
- [ ] **Singleton Pattern** — Restricting instantiation of a class to a single object
- [ ] **Builder Design Pattern** — Separating complex object construction from its representation
- [ ] **Prototype Pattern** — Creating new objects by copying an existing exemplar

#### Structural Patterns
- [ ] **Adapter Pattern** — Allowing incompatible interfaces to work together
- [ ] **Facade Pattern** — Providing a simplified interface to a complex subsystem
- [ ] **Composite Pattern** — Treating individual objects and compositions of objects uniformly
- [ ] **Proxy Design Pattern** — Providing a placeholder for another object to control access
- [ ] **Bridge Pattern** — Decoupling an abstraction from its implementation
- [ ] **Flyweight Pattern** — Minimizing memory usage by sharing common data

#### Behavioral Patterns
- [ ] **Strategy Pattern** — Defining a family of algorithms and making them interchangeable
- [ ] **Observer Pattern** — Defining a subscription mechanism to notify multiple objects
- [ ] **Command Pattern** — Encapsulating a request as an object
- [ ] **Template Method Pattern** — Defining the skeleton of an algorithm in a method
- [ ] **Chain of Responsibility Pattern** — Passing requests along a chain of handlers
- [ ] **Iterator Pattern** — Accessing elements of an aggregate object sequentially
- [ ] **State Design Pattern** — Allowing an object to alter its behavior when its internal state changes
- [ ] **Mediator Pattern** — Restricting direct communications between objects and forcing them to collaborate via a mediator
- [ ] **Visitor Pattern** — Separating an algorithm from the object structure on which it operates
- [ ] **Memento Pattern** — Capturing and restoring an object's internal state
- [ ] **Null Object Pattern** — Avoiding null references by providing a default object behavior

---

### 3. OOPs & System Design Practice
Practical implementation of complex, real-world low-level systems.

#### Foundation
- [ ] **Practice OOPs** — Basic practice questions and OOP implementation drills

#### Complex Systems
- [ ] **Google Docs** — Real-time collaborative document editing engine, document versioning
- [ ] **Zomato Food Delivery App** — Multi-actor system (User, Restaurant, Delivery Partner) with routing and order matching
- [ ] **Notification Engine** — Scalable multi-channel notification engine (Email, SMS, Push notifications)
- [ ] **Spotify** — Audio streaming service, playlist management, user tracking
- [ ] **Payment Gateway** — Reliable transaction processing, ledger systems, payment routing, and retry mechanisms
- [ ] **Discount Coupon Engine** — Dynamic cart rule evaluation, promotional strategy engines
- [ ] **Zepto / Quick Commerce App** — Micro-warehouse allocation, real-time inventory tracking, delivery matching

#### Games
- [ ] **Tic Tac Toe** — Dynamic board size, modular player inputs, win evaluation strategies
- [ ] **Snake & Ladder** — Board generation, players, dice roll strategies, snake and ladder navigation
- [ ] **Chess Game** — Full game loop, move validation, check/checkmate detection, multi-player state

---

### 4. Databases & Systems Foundation
Diving deep into database schema designs, performance tuning, and concurrency control.

- [ ] **ER Diagrams & Schema Design** — High-performance database normalization, foreign keys, constraints
- [ ] **Query Practice** — Writing complex, multi-join queries and aggregate computations
- [ ] **Query Optimization Practice** — Indexing strategies, query plan analysis, caching, and execution optimizations
- [ ] **Threading & Concurrency Practice** — Multi-threaded executions, mutexes, locks, semaphore synchronization, thread-safe structures

---

## Tech Stack & Compilation

For C++ questions and implementation files:
- **Language Standard:** C++17 or higher
- **Compiling:** Use standard `clang++` or `g++` compilation
- **Example Compilation:**
  ```bash
  clang++ -std=c++17 questions/Food-delivery-system.cpp -o questions/Food-delivery-system
  ```

---

## Guidelines
* **Readability:** Keep class and function interfaces cleanly separated from implementation where possible.
* **Extensibility:** Apply SOLID principles to allow adding new features with minimal changes.
* **Testing:** Write mock cases to demonstrate system workflows in the main driver functions.
