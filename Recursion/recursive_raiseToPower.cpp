#include <iostream>
using namespace std;

int RaiseToPower(int baseVal, int exponentVal){
   int resultVal;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * /* Your solution goes here  */ ;
   }

   return resultVal;
}

int main() {
   int userBase;
   int userExponent;

   cin >> userBase;
   cin >> userExponent;
   cout << userBase << "^" << userExponent << " = "
        << RaiseToPower(userBase, userExponent) << endl;

   return 0;
}
