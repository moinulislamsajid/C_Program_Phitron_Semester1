#include<bits/stdc++.h>
using namespace std;

class overload

{

   public :

       static int add(int x , int y)
       {
           return x+y;
       }

       static int add(int x,int y, int z)
       {

           return x+y+z;
       }

       static double add(double a, double b)
       {

           return a*b;
       }


};

int main()

{

    overload ov;

    cout<<"first : "<<ov.add(10,20);
    cout<<"second : "<<ov.add(10,20,40);
    cout<<"first : "<<ov.add(10.5,5.5);



}
