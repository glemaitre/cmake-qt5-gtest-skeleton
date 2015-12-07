#ifndef __DUMMYCLASS_H_INCLUDED__
#define __DUMMYCLASS_H_INCLUDED__

class DummyClass 
{

public:

    DummyClass();
    ~DummyClass();

    inline int getDummyVariable(void) const { return dummy_variable; }
    inline void setDummyVariable(int a) { dummy_variable = a; }

private:
    int dummy_variable;

};

#endif // __DUMMYCLASS_H_INCLUDED__
