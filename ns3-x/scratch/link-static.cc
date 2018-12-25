#include "ns3/mysrc.h"
using namespace ns3;
int main(){
    MySrc src;
    std::string name("foo");
    src.Print(name);
}
