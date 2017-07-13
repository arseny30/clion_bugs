#pragma once
namespace A {
class Object;
}
namespace B {
class Object;
}
void bug_with_header(const A::Object &);
void bug_with_header(const B::Object &);

