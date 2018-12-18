#ifndef MY_SRC_H_
#define MY_SRC_H_
#include <string>
//#include <foo.h> fatal error: foo.h: No such file or directory
// move it to the source file
namespace ns3{
class MySrc{
public:
    MySrc();
    ~MySrc();
    void PrintToInner(std::string name);
    void PrintOuter(std::string name);
private:
    class Impl;
    Impl *m_impl{NULL};
};
}
#endif
