#ifndef _FACTORY_H_
#define _FACTORY_H_

#include<iostream>
using namespace std;

/* This factory method implements,
*   1. Abstract class for the contacts.
*   2. Different contact classes that are derived from the abstract contact class.
*   3. A Contacts Factory class which acts as an interface for the creation of contacts from the client.
*      ( We can remove the Contacts Factory class by simply using static function in the abstract class)
*       For simple understading and clarity, I am using another sepearate class.
*   4. For testing this pattren, use ==> factorytest.cpp
*/

/* Abstract class at the top of the hiearachy */

class Contact{
       
              private: 
                      string f_name;
                      string l_name;
              public:
                      string contact_type;
                      string get_f_name(){ return f_name;};
                      string get_l_name(){ return l_name;};
                      bool   set_f_name(string f_n){
                                         if(f_n.empty())
                                            return false;
                                         else{
                                            f_name = f_n;
                                            return true;
                                            }
                                            }
                      bool   set_l_name(string l_n){
                                         if(l_n.empty())
                                            return false;
                                         else{
                                            l_name = l_n;
                                            return true;
                                            }
                                         }
                      virtual void   set_contact_type() = 0;
                      string get_contact_type(){ return contact_type;};
};

class Telephone: public Contact{

              private: 
                      long tel_num;
              public:

                      void set_contact_type(){ contact_type ="Telephone"; };
                      Telephone():tel_num(123456567){contact_type = "Telephone"; };
                      long get_tel_num(){ return tel_num;};
                      bool set_tel_num(long num){ 
                                            if(num <0)
                                               return false;
                                            else{
                                                tel_num = num;
                                                return true;
                                               }
                                        
                                        }
                        };
                      

class Email: public Contact{

              private: 
                      string email_id;
              public:
                      
                      void set_contact_type(){ contact_type ="Email"; };
                      Email():email_id("Exmaple@gmail.edu"){ contact_type ="Email";};
                      string get_email_id(){ return email_id;};
                      bool set_email_id(string emil){ 
                                            if(emil.empty())
                                               return false;
                                            else{
                                                email_id = emil;
                                                return true;
                                               }
                                        
                                        }
};


class Facebook: public Contact{

              private: 
                      string login_id;
              public:
                      void set_contact_type(){ contact_type = "Facebook";};
                      Facebook():login_id("monsters"){ contact_type ="Facebook";};
                      string get_login_id(){ return login_id;};
                      bool set_login_id(string login){ 
                                            if(login.empty())
                                               return false;
                                            else{
                                                login_id = login;
                                                return true;
                                               }
                                        
                                        }
};

class Factory{
           
               public: 
                   static Contact* get_contact(string type){
                            
                                  if(type == "Tel")
                                    return new Telephone();
                                  else if(type == "Email")
 			            return new Email();
                                  else if(type == "Facebook")
                                    return new Facebook();
                                  else
                                    return NULL;
                            }
};
#endif
