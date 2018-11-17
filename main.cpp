#include <iostream>
#include <vector>
#include <set>
using namespace std;


//int countSubsetSumWays(vector<int> & set, int target);
int countSubsetSumWays(set<int> & set1, int target);
int main()
{
//    int arr[]={1,2,3,4,5};
//    vector<int> sampleSet;
//    for(int i=0;i<5;i++)
//    {
//        sampleSet.push_back(arr[i]);
//    }
set<int>sampleSet;
for(int i=0;i<5;i++)
    sampleSet.insert(5-i);

    cout<<countSubsetSumWays(sampleSet,5)<<endl;
    cout<<endl;
    cout<<countSubsetSumWays(sampleSet,11)<<endl;
    cout<<endl;
    cout<<countSubsetSumWays(sampleSet,0);
    cout<<endl;



}

int countSubsetSumWays(set<int> & set1, int target)

{


    if(target==0){return 1;}


    else if(target < 0 || set1.empty()){return 0;}

    else {
		set<int>::iterator element = set1.begin();
        int e=*element;
		set<int> rest ;
		set1.erase(element);
		rest=set1;
	 	return countSubsetSumWays(rest, target) + countSubsetSumWays(rest, (target - e));
	}
}

