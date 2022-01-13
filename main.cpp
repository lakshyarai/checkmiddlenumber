#include<iostream>

using namespace std;

int main() {
  int n, m;
  cout << "Please enter a three digit number : ";
  cin>>n;
  if (n/100 < 1 || n/100 > 9) {
    cout << "It is not a 3 digit number \nPlease re run the program ";
  } else {
    m=n/10%10;
    if(m%2==0)
    {
      cout<<"even";
    }
    else
    {
      cout<<"odd";
    }
  }
}
