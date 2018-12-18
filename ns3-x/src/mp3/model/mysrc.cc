#include "ns3/mysrc.h"
#include <foo.h>
#include <iostream>
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE*)0)->MEMBER)
namespace ns3{
class MySrc::Impl:public Foo2{
public:
    Impl():m_foo(this){}
    void Printout(std::string name){
       m_foo.Print(name); 
    }
    void Print(std::string name) override{
        std::cout<<"call back "<<name<<std::endl;
        MySrc *outer = (MySrc *) ((char*)this - offsetof(MySrc,m_impl));
        outer->PrintOuter(name);
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
void MySrc::PrintToInner(std::string name){
   m_impl->Print(name); 
}
void MySrc::PrintOuter(std::string name){
    std::cout<<"outer "<<name<<std::endl;
}
}
