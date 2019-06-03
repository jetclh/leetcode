#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
 
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> retval;
	int complement = 0;
	unordered_map<int, int> myhash;
	for(int i = 0; i < nums.size(); i++)
	{
		myhash.insert(pair<int, int>(nums[i], i));
	}
	for(int i = 0; i < nums.size(); i++)
	{
		complement = target - nums[i];
		if(myhash.count(complement) && i != myhash[complement])
		{
			retval.push_back(i);
			retval.push_back(myhash[complement]);
			break;
		}
	}
	return retval;
}
/*int main()
{
	map<int, string> j;
	j[1] = "jjj";
	j[2] = "kkk";
	j[5] = "lll";
	j[3] = "rrr";
	j[8] = "qqq";
	j[6] = "eee";
	map<int, string>::iterator iter; 
	for(iter = j.begin(); iter != j.end(); iter++)
	{
		printf("%d, %s", iter->first, iter->second.c_str());
		//cout << iter->first;
	}
}*/