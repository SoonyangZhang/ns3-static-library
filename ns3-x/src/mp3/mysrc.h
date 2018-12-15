#include <string>
//#include <foo.h> fatal error: foo.h: No such file or directory
// move it to the source file
namespace ns3{
class MySrc{
public:
    void Print(std::string name);  
};
}
