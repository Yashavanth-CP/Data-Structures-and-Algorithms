#ifndef _STRINGSET_H_
#define _STRINGSET_H_

#include<iostream>
using namespace std;

class stringset{

                 public:
                       stringset();
                       stringset( const stringset& other);
                 bool  add(const string&);
                 bool  del(const string&);
                 bool  contains(const string&) const;
                 bool  operator==(const stringset& other) const;
                 
                 private:
                      
                      const  static int MAX =100;
                       int count;
                       string *Arr;
};


#endif
