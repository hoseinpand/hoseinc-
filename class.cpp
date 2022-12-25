#include <iostream>
#include <conio.h>
using namespace std;

class test{

    private:
    int a;
    public:
    void enter(){
        cin>>a;
    }
    int result(){
        return a*a;
    }

};


int main()
{

    test a;
    a.enter();
    cout<<(a.result());
	
  return 0;
}
