#include <iostream>
using namespace std;
int main()
{
    int arg1;
    arg1= -1;
    {
        char arg1 = 'A';
    }
    cout <<arg1<<"\n";//because cout is within the outer block the arg1 in the outer block will be output
    return 0;
}