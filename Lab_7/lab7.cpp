#include <iostream>
#include <math.h>
using namespace std;

double kor(float numb,int n){
    return pow(numb,1.0/n);
}
int kor(int numb,int n){
    return pow(numb,n);
}

int main()
{
    int num, n;
    float num2;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"Enter the float:"<<endl;
    cin>>num2;
    cout<<"Enter the step:"<<endl;
    cin>>n;
    cout << "Float: " << kor(num2,n) << "\nInt " <<kor(num,n);
    return 0;
}
