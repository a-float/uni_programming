#include<iostream>
using namespace std;

/*Napisać program obliczający pierwiastek całkowitoliczbowy z
liczby naturalnej korzystając z zależności 1+3+5+... = n^2*/

int pierw(int n){
      int s = 0;
      int tmp = 1;
      int ans = 0;

      while(s < n){
         s+=tmp;
         tmp+=2;
         ans++;
      }
      return ans;
   }

int main(){
   int n;
   cin>>n;
   cout<<pierw(n);
return 0;
}
