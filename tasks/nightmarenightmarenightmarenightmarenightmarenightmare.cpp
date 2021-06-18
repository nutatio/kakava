#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

void myprint(set <int> myset) {
	cout << myset.size()<<endl;
	
	set<int >::iterator it;
	for (it = myset.begin(); it != myset.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main(){
	int N, M, num;
	vector <int> anne;
	vector <int> bor;
	vector <int> v_inter;
	set <int> s;

	cin >> N >> M;
	for (int i=0; i < N; i++) {
		cin >> num;
		anne.push_back(num);
	}
	for (int i=0; i < M; i++) {
		cin >> num;
		bor.push_back(num);
	}
	sort(anne.begin(), anne.end());
	sort(bor.begin(), bor.end());

	set_intersection(begin(anne), end(anne), begin(bor), end(bor), back_inserter(v_inter));
	s.insert(v_inter.begin(), v_inter.end());
	myprint(s);

	v_inter.clear();
	s.clear();
	
	set_difference(begin(anne), end(anne), begin(bor), end(bor), back_inserter(v_inter));
	s.insert(v_inter.begin(), v_inter.end());
	myprint(s);

	v_inter.clear();
	s.clear();
		
	set_difference(begin(bor), end(bor), begin(anne), end(anne), back_inserter(v_inter));
	s.insert(v_inter.begin(), v_inter.end());
	myprint(s);
}

  
