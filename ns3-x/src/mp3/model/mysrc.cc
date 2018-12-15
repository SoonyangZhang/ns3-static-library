#include "ns3/mysrc.h"
#include <foo.h>
namespace ns3{
void MySrc::Print(std::string name){
    foo_print(name);
}
}
