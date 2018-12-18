#include "ns3/mysrc.h"
#include <foo.h>
#include <iostream>
namespace ns3{
class MySrc::Impl:public Foo2{
public:
    Impl():m_foo(this){}
    void Printout(std::string name){
       m_foo.Print(name); 
    }
    void Print(std::string name) override{
        std::cout<<"call back "<<name<<std::endl;
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
