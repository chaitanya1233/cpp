


// Domain name always recides within www and .com

// so, our first goal is to find the ending point of the www and starting point of the .com
// in order to get our domain name.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    // url as a string
    string url =  "www.chetandsa10210.com";

    // Task : Extract domain name : chaitanya234001

    // A : First find the starting index  of the domain
    int start_index = url.find("www.") + 4;

    // B : Find the lenght of the .com

    int len = url.find(".com");
    cout<<len<<endl;

    // C : Find the last index of the domain

    // lenght of the url

    int url_len = url.length();

    cout<<"url length:"<<url_len<<endl;


    int pos_len =  len - start_index;

    string domain = url.substr(start_index,pos_len);
    cout<<"Domain:"<<domain<<endl;
    return 0;
}
