// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class timeconveter{
    public:
    int totalsecond;
    int hour;
    int minutes;
    int remindersecond;
    int second ;
    void showdetails(){
        cout<<hour<<":"<<minutes<<":"<<second<<endl;
        
    }
};
int main() {
  timeconveter t1;
  cout<<"enter the second:"<<endl;
  cin>> t1.totalsecond;
  t1.hour=t1.totalsecond/3600; 
   t1.remindersecond=t1.totalsecond%3600; 
    t1.minutes =t1.remindersecond/60; 
    t1.second =t1.remindersecond%60; 
  t1.showdetails();
    
    return 0;
}