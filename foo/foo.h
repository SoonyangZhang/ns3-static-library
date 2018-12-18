#ifndef FOO_H_
#define FOO_H_
#include <string>
class Foo2{
public:
    virtual ~Foo2(){}
    virtual void Print(std::string content)=0;
};
class Foo{
public:
    Foo(Foo2 *cb):cb_(cb){}
	void Print(std::string content);
private:
    Foo2 *cb_;
};
#endif /* FOO_H_ */
