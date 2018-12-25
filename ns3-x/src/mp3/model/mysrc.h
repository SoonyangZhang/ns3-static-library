#ifndef MY_SRC_H_
#define MY_SRC_H_
#include <string>
#include <foo.h>
namespace ns3{
class MySrc:Foo2{
public:
    MySrc();
    ~MySrc();
    void Print(std::string name);
private:
    void Foo2Print(std::string name) override;
    Foo foo;
};
}
#endif
