#include "ns3/mysrc.h"
#include <iostream>
namespace ns3{
MySrc::MySrc():foo(this){
}
MySrc::~MySrc(){
}
void MySrc::Print(std::string name){
   std::cout<<"foo "<<name<<std::endl;
   foo.Print(name); 
}
void MySrc::Foo2Print(std::string name){
    std::cout<<"foo2 "<<name<<std::endl;
}
}
