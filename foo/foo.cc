#include "foo.h"
#include <iostream>
void Foo::Print(std::string content){
	cb_->Print(content);
}
