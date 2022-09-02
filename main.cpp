#include <bits/stdc++.h>
#include "RubiksCube3dArray.cpp"
using namespace std;



int main() {
   RubiksCube3dArray object3DArray;
   object3DArray.print();
   if(object3DArray.isSolved())cout<<"Solved"<<endl;
   object3DArray.l();
   object3DArray.print();


}
