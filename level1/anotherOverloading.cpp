#include<bits/stdc++.h>
using namespace std;

int mul(int,int);
float mul(float,int);


int mul(int x, int y)
{

    return x*y;
}

float mul(float b, int v)
{

    return b*v;
}
int main()
{

    int ans1 = mul(10,10);
    float ans2 = mul(10.5f,5);

    cout<<"Answer : "<<ans1;
    cout<<"2nd answer is : "<<ans2;
}
