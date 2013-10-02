#include<iostream>
#include<assert.h>
using namespace std;

class singleton {

private:
    singleton() {};
    int data;
    static singleton* instance;
public:
    static singleton* get_instance() {

        if(instance == 0)
        {
            std::cout<<" Creating a instance" << std::endl;
            instance = new singleton();
            assert( instance != NULL);
            return instance;
        }
        else
            return NULL;
    }

};

singleton* singleton::instance =0;

int main() {
    singleton* s;
    s = singleton::get_instance();
    assert(s != NULL);
    singleton* s1;
    s1 = singleton::get_instance();
    assert(s1!= NULL);

    return 0;
}
