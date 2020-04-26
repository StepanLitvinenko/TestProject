#include <iostream>
#include <vector>



class Wiget
{
public:
    int a;
    int b;

};

template <typename T>
void f (const T& param){
    using std::cout;
    cout<<"T =     "<<typeid(T).name()<<std::endl;

    cout<<"param = "<<typeid(param).name()<<std::endl;
}





int main()
{

    std::vector <Wiget> createVec;
    const auto vw = createVec;

    if (vw.empty()){
        f(&vw);
    }

    return 0;
}
