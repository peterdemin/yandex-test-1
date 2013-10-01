#include <tr1/memory>


class Foo
{
public:
    Foo() {}
    Foo(int j) : i(new int[j]) {}

private:
    std::tr1::shared_ptr<int> i;
};


class Bar: public Foo
{
public:
    Bar(int j) : i(new char[j]) {}
private:
    std::tr1::shared_ptr<char> i;
};


int main()
{
    Foo* f=new Foo(100);
    Foo* b=new Bar(200);
    *f=*b;
    delete f;
    delete b;
    return 0;
}
