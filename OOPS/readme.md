# OPPS Explained in cpp
In this guide, we will start by learning the basic syntax of creating a class in C++. We will then dive deeper into more advanced concepts. Let's get started!


### Step 1: Class Declaration and Object Creation

In this step, we define a class called `MyClass` with a public member variable `myInt` and a member function `myFunction()`. We then create an object of the class and demonstrate how to access the member variables and call the member function.

### Step 2: Access Specifiers

Access specifiers (`public`, `private`, and `protected`) control the visibility and accessibility of class members. Public members can be accessed from anywhere, private members are only accessible within the class, and protected members are accessible within the class and its derived classes.

### Step 3: Constructors and Destructors

Constructors are special member functions that are called when an object of a class is created. In this step, we define a default constructor for `MyClass` that initializes the `myInt` member variable. We also define a destructor that is called when the object goes out of scope. We demonstrate object creation and destruction in the `main()` function.

### Step 4: Member Functions and Data Access

Member functions provide the behavior of a class. In this step, we define member functions `setInt()` and `getInt()` to modify and access the `myInt` member variable, respectively. We demonstrate how to use these member functions to set and retrieve the value of `myInt`.

### Step 5: Static Members

Static members are shared among all instances of a class. They are declared using the `static` keyword. In this step, we define a static member variable `staticInt` and a static member function `staticFunction()` in the `MyClass` class. We show how to access the static member variable and call the static member function.

These steps cover the basic concepts of creating classes and working with object-oriented programming in C++. As you progress, you can explore more advanced topics like inheritance, polymorphism, and other OOP concepts. Keep practicing and experimenting with different class structures to strengthen your understanding.



### Step 1: Class Declaration and Object Creation

```cpp
class MyClass {
public:
    int myInt;

    void myFunction() {
        std::cout << "Hello from myFunction!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.myInt = 42;
    obj.myFunction();

    return 0;
}
```

### Step 2: Access Specifiers

```cpp
class MyClass {
public:
    int publicInt;

private:
    int privateInt;

protected:
    int protectedInt;
};
```

### Step 3: Constructors and Destructors

```cpp
class MyClass {
public:
    int myInt;

    MyClass() {
        myInt = 0;
        std::cout << "Constructor called!" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.myInt = 42;
    std::cout << obj.myInt << std::endl;

    return 0;
}
```

### Step 4: Member Functions and Data Access

```cpp
class MyClass {
public:
    int myInt;

    void setInt(int value) {
        myInt = value;
    }

    int getInt() {
        return myInt;
    }
};

int main() {
    MyClass obj;
    obj.setInt(42);

    int value = obj.getInt();
    std::cout << value << std::endl;

    return 0;
}
```

### Step 5: Static Members

```cpp
class MyClass {
public:
    static int staticInt;

    static void staticFunction() {
        std::cout << "Static function called!" << std::endl;
    }
};

int MyClass::staticInt = 0;

int main() {
    MyClass::staticInt = 42;
    std::cout << MyClass::staticInt << std::endl;

    MyClass::staticFunction();

    return 0;
}
```



### Inheritance

Inheritance is a fundamental concept in OOP that allows you to create a new class (derived class) from an existing class (base class). The derived class inherits the properties and behaviors of the base class, and you can add or modify them as needed. This promotes code reuse and supports the "is-a" relationship between classes. In C++, you can specify the inheritance relationship using the `class` keyword followed by a colon and the access specifier.

```cpp
class BaseClass {
    // Base class members
};

class DerivedClass : public BaseClass {
    // Derived class members
};
```

### Polymorphism

Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables you to write code that can work with objects of multiple derived classes through a common interface. This allows for code flexibility, extensibility, and modularity. Polymorphism can be achieved through virtual functions and function overriding.

```cpp
class BaseClass {
public:
    virtual void someFunction() {
        // Base class implementation
    }
};

class DerivedClass : public BaseClass {
public:
    void someFunction() override {
        // Derived class implementation
    }
};

// Usage
BaseClass* obj = new DerivedClass();
obj->someFunction(); // Calls the derived class implementation
```

### Abstraction

Abstraction is the process of simplifying complex systems by breaking them down into more manageable and understandable components. It focuses on the essential features and hides unnecessary details. In OOP, abstraction is achieved through classes and interfaces, where the internal workings of the class are hidden, and only the essential interfaces and behaviors are exposed.

```cpp
class AbstractClass {
public:
    virtual void someFunction() = 0;
    // Other pure virtual functions or regular member functions
};

class ConcreteClass : public AbstractClass {
public:
    void someFunction() override {
        // Concrete implementation
    }
};
```

