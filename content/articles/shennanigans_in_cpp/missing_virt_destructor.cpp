class ISomeInterface {
public:
  virtual int SomeMethod() = 0;
};
class CSomeClass : ISomeInterface {
  CSomeClass();

public:
  int SomeMethod() override { return 1; }
  virtual ~CSomeClass(); // missing virtual technical UB
};
class CSomeDerivedClass : CSomeClass {
  CSomeDerivedClass();

public:
  int SomeMethod() override final { return 2; }
  virtual ~CSomeDerivedClass(); // optional virtual
};
