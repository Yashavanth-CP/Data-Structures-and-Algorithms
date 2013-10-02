#include<iostream>
using namespace std;

class Shape{
            public:
                    Shape(){
                    std::cout<<" Shape constr()" <<std::endl;
                    }
                   void virtual draw()=0;
                   //  {
                     //  std::cout<<" Shape virtual draw() " << std::endl;
                    // }
                   virtual void draw1(){};
                   virtual  ~Shape(){
                    std::cout <<" Shape destructr () " << std::endl;
                    }
            };

void Shape::draw(){

                   std::cout << " Shape draw() " << std::endl;
}

class Circle : public Shape{
             public:
                    Circle(){
                     draw();
                     std::cout<<" Circle Constr() " <<std::endl;
                     }
                    void draw(){
                    std::cout<<" Circle Draw() " << std::endl;
                    }

                    void draw1(){
                    draw();
                    std::cout<< " Circle Dwar1() " << std::endl;
                    }
                   ~Circle(){
                    std::cout <<" Circle destructr () " << std::endl;
                    }

 };

class Square: public Shape{
            public:
                   Square(){
                      draw();
                      std::cout<<" Square Constr()" << std::endl;
                     }
                 
                    void draw(){
                    std::cout<<" Square Draw() " << std::endl;
                     }
                    
                    void draw1(){
                    draw();
                    std::cout<< " Square Dwar1() " << std::endl;
                    }
                    
		void upcast(Circle c){
	
        	        c.draw();
    		}

                   ~Square(){
                    std::cout <<" Square destructr () " << std::endl;
                    }
                    
};

class Triangle: public Shape{

            public:
                  Triangle(){
                     std::cout<<" Triangle COnstr() " << std::endl;
                   }

                  void draw(){
                     std::cout << " Triangle draw() " << std::endl;
                   }

                   ~Triangle(){
                    std::cout << "Tirangle destructr () " << std::endl;
                    }
};


int main(){
          Shape *Squ = new Square();
          Squ->draw1();

          Square sq;
          sq.upcast(sq);
          #if 0
          Shape *Tri = new Triangle();
          Tri->draw();
          delete Cir;
          delete Squ; 
          delete Tri;
          #endif 
          return 0;

}
