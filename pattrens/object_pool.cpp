#include<iostream>
#include<assert.h>
#include<list>
using namespace std;

/* this file implements the object pool pattren used, when
   1. The cost of object initialisation is high.
   2. The cost of object creation is high.
   3. Number of objects created are to be kept at low numbers
*/

/* Class resource */
class resource {

public:
    int data;
    resource() {};
    void reset() {
        data =0;
    }
    int get_data() {
        return data;
    };
    void set_data(int d) {
        data = d;
    };

};

/* Pool is another class which maintains the pool of resources objects.
   1.Pool is a singleton, so that only one instance controls the number of
     created objects.
   2.Pool will not destroy the objects and keep it untill the destructor is called,
     this behavior can be changes (eg: to hold certian number of objects)
*/

class pool {

private:
    pool() {};
    std::list<resource*> objects;
    static pool* instance;
public:
    static pool* getinstance() {

        if(instance == NULL) {
            std::cout<<" Creating the Singleton instance here" << std::endl;
            instance = new pool();
            assert(instance!= NULL);
            return instance;
        }
        else
            return NULL;

    }

    resource*  get_resource() {

        if(objects.empty()) {
            std::cout<<" No objects are available : creating new one " << std::endl;
            resource* toAdd =new resource();
            assert(toAdd != NULL);
            return toAdd;
        }
        else
        {
            std::cout<<" Objects already available in pool" <<std::endl;
            resource *toAdd = objects.front();
            objects.pop_front();
            return toAdd;
        }
    }

    void release_resource(resource *r) {
        std::cout<< " releasing the object to the pool" << std::endl;
        objects.push_back(r);
    }

    int get_size() {
        return objects.size();
    }

    ~pool() {
        std::cout<<" Destroying all... no Mem leak " << std::endl;
        resource *del;
        while(!objects.empty()) {
            del = objects.front();
            delete del;
            objects.pop_front();
            std::cout<<" Deleteing the nodes in the list "<< std::endl;
        }
    }
};

/* initialise the static instance of the pool */
pool* pool::instance =0;


int main() {
    /* singleton functionality is working */
    pool* inst1 = pool::getinstance();
    assert(inst1 != NULL);
    //  pool* inst2 = pool::getinstance();
    // assert(inst2!= NULL);
    resource* one;
    resource* two;
    one = inst1->get_resource();
    two = inst1->get_resource();
    std::cout<< " Size of the pool is : " << inst1->get_size() <<std::endl;
    inst1->release_resource(one);
    std::cout<< " Size of the pool is : " << inst1->get_size() <<std::endl;
    inst1->release_resource(two);
    std::cout<< " Size of the pool is : " << inst1->get_size() <<std::endl;
    delete inst1;
    return 0;

}
