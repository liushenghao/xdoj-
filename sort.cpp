#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int cmp (const int a, const int b)
{
    return a > b;
}
int main()
{
    int data[5];
    for(int i = 0; i < 5; i++)
        cin >> data[i];
    sort(data, data + 5, cmp);
    for(int i = 0; i < 5; i++)
        printf("%d ",data[i]);
    return 0;
}
