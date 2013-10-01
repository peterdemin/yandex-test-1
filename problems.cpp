class Foo
{
public:
    Foo(int j) { i=new int[j]; }
    ~Foo() { delete i; }
private:
    int* i;
};

class Bar: Foo
{
public:
    Bar(int j) { i=new char[j]; }
    ~Bar() { delete i; }
private:
    char* i;
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
