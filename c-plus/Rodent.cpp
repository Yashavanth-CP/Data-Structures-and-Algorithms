#include<iostream>
#include<vector>
using namespace std;

class Rodent{
           
            public:
            virtual   void  method() =0;
            #if 0
            {
                       std::cout << " Rodent : method() "<< std::endl;
                 
             }
           #endif
           virtual ~Rodent() =0;
};



Rodent:: ~Rodent(){
                       std::cout<< " Rodent: Destr "<< std::endl; 
              }


class Mouse: public Rodent{
           
            public:
                 void  method(){
                       std::cout << " Mouse : method() "<< std::endl;
                 }

  };


class Gerbil: public Rodent{
           
            public:
               void  method(){
                       std::cout << " Gerbil : method() "<< std::endl;
                 }

  };


class Hamster: public Gerbil{
           
            public:
                 void  method(){
                       std::cout << " Hamster : method() "<< std::endl;
                 }

  };

class Bluehamster : public Hamster {
            public:
                void method(){
                      std::cout<< " Blue Hamster : method() " << std::endl;
                }   

       ~Bluehamster(){
                   std::cout<< " Blue Hamster Destr () "<< std::endl;
         }    

};


int main(){
            #if 0
           // Rodent* [] A = {new Rodent, new Mouse, new Gerbil, new Hamster};
            std::vector<Rodent*>* A = new std::vector<Rodent*>();
            //Rodent* tempR = new Rodent();
            A->push_back(tempR);  
            tempR = new Mouse();
            A->push_back(tempR);  
            tempR = new Gerbil();
            A->push_back(tempR);  
            tempR = new Hamster();
            A->push_back(tempR);  
            for(std::vector<Rodent*>::iterator i= A->begin(); i != A->end(); i++){
                 (*i)->method(); 
            }
            #endif
            Rodent* tempR = new Rodent();
            delete tempR;
            //Gerbil* B[] = { new Rodent, new Mouse, new Gerbil, new Hamster};
            //for(int i=0; i<4; i++){
              //  B[i]->method(); 
           // }
            return 0;
}
