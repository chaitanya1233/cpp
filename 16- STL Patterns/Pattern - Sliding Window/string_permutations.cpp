#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

bool has_permutation(string s1,string s2,int k)
{

    int n = s2.length();

    // Edge casse
    if(k>n)
    {
       return false;
    }



    vector<int> freq_s1(26,0); // For s1's character count
    vector<int> freq_s2(26,0); // for current winodw character count of s2



    // Initialize the character count for string s1 and first window of s2
    for(int i = 0;i<k;i++)
    {
        freq_s1[s1[i]-'a']++;
        freq_s2[s2[i]-'a']++;
    }


    // check if this initial window is permuted.

    if(freq_s1 == freq_s2)
    {
        return true;
    }


    // Now, slide the window across the rest of s2
    for(int i = k;i<n;i++)
    {
        freq_s2[s2[i]-'a']++; // Increment the count of the character entering in the window
        freq_s2[s2[i-k]-'a']--; // descrement the count of the character leaving the window.

        // check if next window is permuted
        if(freq_s1 == freq_s2)
        {
            return true;
        }
    }
        return false;
}

int main()
{

    // Strings input.

    string s1 = "bao";
    string s2 = "eidbaooo";

    int k = s1.length();

    bool flag = has_permutation(s1,s2,k);

    if(flag)
    {
        cout<<"s1 is permutation of s2";
    }
    else
    {
        cout<<"No permutations found.";
    }

    return 0;
}
