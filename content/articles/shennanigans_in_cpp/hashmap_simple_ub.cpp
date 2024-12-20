#include <map>
#include <string>
class T1 {
public:
  T1(); // needed to allow convenient random access via [] operator
  T1(std::string const &t1)
      : mName(t1) {};
  std::string mName;
  std::string prop1;
};
class T2 {
public:
  std::map<std::string, T1> mapex1;
  void AddT1(std::string const &t1str) {
    T1 t1obj(t1str);
    mapex1.emplace(t1str, t1obj);
    mapex1[t1str].prop1 = "blabla"; // potential footgun
  }
};
