#include<iostream>
using namespace std;
class Dog{
    public:
        int age;
        int weight;
    Dog(){
        age = 5;
        weight = 15;
    }
};
int main(){
    Dog dog;
    cout<<"My dog age is "<<dog.age<<endl;
    cout<<"My dog weight is "<<dog.weight<<"kg"<<endl;
    return 0;
}