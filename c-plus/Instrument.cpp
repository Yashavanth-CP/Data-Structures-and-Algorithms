#include<iostream>
using namespace std;

class Instrument{
           public:
           void virtual play() const {
                     std::cout << " Instrument: play() " << std::endl;  
                     }
            void prepare() const {
                     std::cout << " Instrument: prepare() " << std::endl;  
                     }

};
 

class Wind: public Instrument{
           public:
           void play() const{

                   std::cout << " Wind : Play() " << std::endl;
              }
           
           virtual void prepare() const {
                     std::cout << "Wind: prepare() " << std::endl;  
                     }

};

void tune( Instrument & I){

                   I.play();

              };

void tunep(Instrument *I){
                  if(I != NULL)
                  I->play();
                  I->prepare();
              };


int main(){

            Wind* w = new Wind();
            tunep(w);
            return 0;

 }
