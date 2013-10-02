#include<iostream>
using namespace std;

class base{

          public: 
		 base(){ std::cout <<" base(): constr " << std::endl;};
                 virtual void print(){ 
		 std::cout <<" base(): print() " << std::endl;};
         
};


class derived : public base{

                    public:  
                            derived(){
                                      print();
                                      std::cout << " derived (): constr" << std::endl;
                                 }
                               
                 void print(){ 
		 std::cout <<" base(): print() " << std::endl;};
};

/* Inside any constructor, the object may only be partially formed – you can only know that the base-class objects have been initialized, but you cannot know which classes are inherited from you. A virtual function call, however, reaches “forward” or “outward” into the inheritance hierarchy. It calls a function in a derived class. If you could do this inside a constructor, you’d be calling a function that might manipulate members that hadn’t been initialized yet, a sure recipe for disaster */




int main(){

            derived d;
            return 0;

}


