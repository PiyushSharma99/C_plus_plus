#include <iostream.h>
using namespace std;
class test {
public:
int y, z;
test()
{
y = 7;
z = 13;
}
};
int main()
{
test a;
cout <<"the sum is: "<< a.y+a.z;
return 1;
}