///to find the maximum number of activities that can run on uniprocessor
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<pair<int,int>>activity;
    int n,start,endd;
    cout<<"enter the number of activity\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>start>>endd;
        activity.push_back(make_pair(endd,start));
    }

    sort(activity.begin(),activity.end());

    int count=0;
    int correctend=-1;

    for(int i=0;i<n;i++)
    {
        if(activity[i].second>correctend)
        {
            count++;
            correctend=activity[i].first;
        }
    }
    cout<<count<<endl;
}


///minimum number of processor to run all the activities
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of activities:\n";
    cin >> n;

    vector<pair<int, int>> events;

    int start, endd;
    for (int i = 0; i < n; i++)
    {
        cin >> start >> endd;
        events.push_back({start, 1});
        events.push_back({endd, -1});
    }

    sort(events.begin(), events.end());

    int maxProcessors = 0;
    int current = 0;

    for (auto event : events)
    {
        current += event.second;
        maxProcessors = max(maxProcessors, current);
    }

    cout << "Minimum number of processors required: " << maxProcessors << endl;

    return 0;
}
