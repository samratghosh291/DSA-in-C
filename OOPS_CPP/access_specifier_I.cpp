
class MyClass {  // The class
  public:        // Access specifier
    // class members goes here
};



// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
//   myObj.y = 50;  // Not allowed (private)
  return 0;
}

// If you try to access a private member, an error occurs: y is private


