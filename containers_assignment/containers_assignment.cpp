

#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;
void arrays() 
{
    string week[7] = {"Monday","Tuesday","Wensday","Thursday","Friday","Saturday","Sunday"};
    for (string day: week)
    {
        cout << day << endl;
    }
}

void lists() 
{
    list<string> fruits = {"apple","Orange","Banana"};
    fruits.push_back("kiwi");
    fruits.push_front("grape");
    fruits.remove("Orange");

//loop mechanic gotten from copiolt on bing
    for (std::list<string>::iterator it = fruits.begin(); it != fruits.end(); ++it)
    {
        cout << *it << endl;
    }
}

void vectors() 
{
    vector<int> nums = { 1,2,3 };
    nums.push_back(4);
    nums.push_back(42);
    nums.pop_back();
    for (int i = 0;i<nums.size();i++)
    {
        cout << nums[i] << endl;
    }
}

void maps()
{
    map<string, int> grocery = { {"apples",3},{"chips",1},{"turkey",2} };
    grocery["chips"] = 5;
    //loop mechanic gotten from copiolt on bing
    for (auto it = grocery.begin(); it != grocery.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

}

int main()
{
    arrays();
    lists();
    vectors();
    maps();
}

