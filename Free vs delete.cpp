//Free vs delete use in c++
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int(3);
    ptr[0]=23;
    ptr[1]=24;
    ptr[2]=25;
    ptr[3]=30;
    delete(ptr);  //free(ptr);
    cout<<ptr[0];
    cout<<ptr[1];
    cout<<ptr[2];
    cout<<ptr[3];
}