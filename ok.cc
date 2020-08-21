#include <iostream>
using namespace std;

class N_class {
public:
      int int_var;
};

int main() {

//UAF example 1
   int* int_ptr = new int(3);
   delete int_ptr;

   int sum = *int_ptr + 4;

   cout << sum;

//UAF example 2
   N_class* n_object = new Nclass;
   n_object->int_var = 3;
   delete n_object;

   sum = n_object->int_var + 4;
   
   cout << sum;
}
