
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

vector<int> sort(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    return vec;
}
//------------------------------------------------- bsearch
int bp(vector<int> vec, int num)
{
    int high = vec.size()-1;
    int low = -1;

    while (high - low > 1)
    {
    int mid = (high + low) / 2;
        if (num <= vec[mid])
        {
            high = mid;
        }
        else 
        {
            low = mid;
        }
    }
    if (vec[high] == num)
    {
        return high;
    }
    else return -1;
}
//--------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int number;
    cin >> number;
    vector<int> vec(number);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    int find;
    cin >> find;
    vec = sort(vec);
    cout << "------------------------------------" << endl;
    cout << bp(vec, find) << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}