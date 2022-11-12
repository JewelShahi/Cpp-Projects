/*
16  -->  1 + 6 = 7
942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
*/
#include <iostream>
int digital_root(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n=n-(n%10);
    n=n/10;
  }
  if(sum<10){
    return sum;
  }
  return digital_root(sum);
}
int main() {
  int n=0;
  std::cout << "Enter the size of the series:\n";
  std::cin >> n;
  std::cout << "The sum of digits in the number "<<n<<" is:\n"<<digital_root(n)<< std::endl;
  return 0;
}
