#include<iostream>
 using namespace std;
 int main(){
    int sum;
    cout<<"Initial value of sum:-"<<sum<<endl;
    /*for(int i=1;i<=10;i++){
        sum=sum+i;
        cout<<"Sum is:-"<<sum<<endl;
}*/

    //when we want single o/p we write it after loops body
//    cout<<"Sum is:-"<<sum<<endl;
    //infinite loop
    for(int i=1;;i++)
        cout<<i;
    return 0;
 }
