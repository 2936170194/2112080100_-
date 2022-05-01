#include <iostream>
#include <array>
#include <random>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int>randomint(1,6);

    array<int,13>x={0};
    int sum=0;
    for(int i=1;i<=72000;i++){
        sum=randomint(engine)+sum;
        if(i%2==0){
        x[sum]++;
        sum=0;
        }
    }
    for(int i=2;i<=12;i++){
        cout<<i<<"\t"<<x[i]<<endl;
    }
    return 0;
}
