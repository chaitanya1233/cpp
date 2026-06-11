// People accidentally add weird characters or mixed caps, and it's your job to clean it up before saving it to a database.

// Our mission is to take a messy username string, strip out a hidden flag, and format the user's final name neatly.


#include <iostream>
#include <string>

using namespace std;

int main()
{

    string rawData = "  chetan_kale:ID_8920  ";
    string userName;
    string ID;

    // extract only userName

    size_t firstLetter = rawData.find("c");
    size_t colonPos = rawData.find(":");
    userName = rawData.substr(firstLetter,colonPos-firstLetter);

    cout<<"Username is:"<<userName<<endl;


    // task B : Replace the '_' with clean space ' '

    for(char &c : userName){
        if (c=='_'){
            c = ' ';
        }
    }
    cout<<"User Name after removing '_':"<<userName<<endl;


    // TASK C: Capitalize the first letter ('c') so it looks professional!
      for(char &c : userName)
      {
        c = toupper(userName[0]);
          break;
      }


    // rawData after capitalization
    cout<<"username after capitalization:"<<userName<<endl;


    // Cleaned UserName
    cout<<"Professional Name:"<<userName<<endl;

    return 0;
}
