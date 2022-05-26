#include"Barrier.h"

Barrier::Barrier(int n,int num)
{
	this->m_n = n;
	this->m_num = num;
	for (int i = 0; i < this->m_n; i++) {
		vector<int>v1;
		vector<int>v2;
		for (int j = 0; j < this->m_n; j++) {
			v1.push_back(0);
			v2.push_back(1);
			this->m.insert(pair<int,int>(i * 25, j * 25));
		}
		this->v.push_back(v1);
		this->vec.push_back(v2);
	}

}

