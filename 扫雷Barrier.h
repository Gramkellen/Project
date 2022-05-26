#pragma once
#include<iostream>
#include<easyx.h>
#include<map>
#include<vector>
#include<algorithm>
#define w 25 //定义一小格宽度
#define B_X 270 //开始的X坐标
#define B_Y1 150
#define B_Y2 250
#define JG_X 50 //X的间隔

using namespace std;

class Barrier
{
public:
	
	Barrier(int n, int num);
	int m_n = 30;//定义默认行和列
	int m_num = 9;//定义默认雷数
	multimap<int, int>m;        //记录图片的位置
	vector<vector<int>>v;       //动态创建二维数组
	vector < vector<int>>vec;  //记录展开的个数

};
