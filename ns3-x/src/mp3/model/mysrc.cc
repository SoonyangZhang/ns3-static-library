#include "ns3/mysrc.h"
#include <foo.h>
namespace ns3{
class MySrc::Impl{
public:
    Impl(){}
    void Print(std::string name){
       m_foo.Print(name); 
    }
private:
    Foo m_foo;
};
MySrc::MySrc(){
    m_impl=new Impl();
}
MySrc::~MySrc(){
    if(m_impl){
    delete m_impl;
}
}
void MySrc::Print(std::string name){
   m_impl->Print(name); 
}
}
