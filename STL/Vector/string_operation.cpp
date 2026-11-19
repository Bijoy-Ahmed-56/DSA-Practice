#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "programming";
    cout << s.length() << endl; // 10
    cout << s[0] << endl;       // p
    cout << s.substr(0, 3);     // pro
    if (s.find("abc") == string::npos)
    {
        cout << "\nnot found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    // bool found = false;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'm')
        {
            // found = true;
            count++;
        }
    }
    //
    //  if (found)
    //  {
    //      cout << "\nm found " << count << " times " << endl;
    //  }
    //  else
    //  {
    //      cout << "m not found " << endl;
    //  }

    if (count > 0)
    {
        cout << "\nm found " << count << " times " << endl
             << endl;
    }
    else
    {
        cout << "not found " << endl;
    }

    for (int i = 0; i < s.size(); i++)
    {
        bool already_seen = false;
        for (int k = 0; k < i; k++)
        {
            if (s[i] == s[k])
            {
                already_seen = true;
                break;
            }
        }
        if (already_seen)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        cout << s[i] << "  found " << count << " times " << endl;
    }

    return 0;
}