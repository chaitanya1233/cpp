#include <iostream>
#include <string>

using namespace std;

int main()
{
    string email =  "ckale5156@gmail.com";
    int start_index = 0;
    // First of all we know , start_index of the user_name is 0.
    // Our goal is to find the length of the user_name.

    // length of user_name = legth of string - length of(@gmail.com)

    // find the length of the email

    int email_len = email.length();
    cout<<"Length of the email is:"<<email_len<<endl;

    // Find the length of the @gmail.com
    // Find the length of the @gmail.com

    int end_index = email.find("@")-1;

    cout<<"End index of the user_name is:"<<end_index<<endl;

    // means , strting from 0 - 8th index is  our user_name .

    // length of user_name  = end_index + 1
    int len = end_index + 1;

    // so, our start_index =  0 and len =  8

    string user_name =  email.substr(start_index ,len);
    cout<<"User_name is :"<<user_name<<endl;
    return 0;
}
