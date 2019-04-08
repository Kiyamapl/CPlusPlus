#include <iostream>
class zespolone{
public:
    double re, im;
    zespolone(){
        this->im=0;
        this->re=0;
    }
};
zespolone operator +(const zespolone & a, const zespolone &b){
    zespolone z;
    z.im=a.im+b.im;
    z.re=a.re+b.re;
    return z;
}
zespolone operator -(const zespolone & a, const zespolone &b){
    zespolone z;
    z.im=a.im-b.im;
    z.re=a.re-b.re;
    return z;
}
zespolone operator *(const zespolone &a, const zespolone &b){
    zespolone z;
    z.re=a.re*b.re-a.im*b.im;
    z.im=a.im*b.re+a.re*b.im;
    return z;
}
zespolone operator /(const zespolone &a, const zespolone &b){
    zespolone z;
    z.re=(a.re∗b.re+a.im∗b.im)/(b.re∗b.re+b.im∗b.im);
    z.im=(a.im∗b.re−a.re∗b.im)/(b.re∗b.re+b.im∗b.im);
}
std::ostream& operator<<(std::ostream& out, const zespolone& z){
    out<<"re_=_"<<z.re<<"_im_=_"<<z.im;
    return out;
}
std::istream& operator>>(std::istream& in, zespolone& z){
    in>>z.re>>z.im;
    return in;
}
int main(){
    zespolone a;
    zespolone b;
    zespolone z;
    a.im=2;
    a.re=4;
    b.im=3;
    b.re=2;
    std::cin>>z;
    std::cout<<z<<std::endl;
}
