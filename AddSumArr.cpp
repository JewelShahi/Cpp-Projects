#include <utility>
using namespace std;
pair<size_t, size_t> two_sum(const vector<int>& n, int tar) {

	// making a pair
      pair<size_t, size_t> p;

	// finding from the vector numbers that are equal to entered number from the user
      for(size_t i=0; i<n.size(); i++){
        for(size_t j=0; j<n.size(); j++){
          if(n[i]+n[j]==tar&&i!=j){// the number musn't be it self
            p.first=i;
            p.second=j;
            break;
          }
        }
      }
    return p;// returns the indexes
}
int main(){
	vector<int> a;
	a.push_back(5);
	a.push_back(8);
	a.push_back(1)
	a.push_back(1);
	a.push_back(4);
	cout<<two_sum(a, 6)<<endl;
	return 0;
}
