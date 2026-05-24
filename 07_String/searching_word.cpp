
/*

if you want to know if a specific word exists inside a larger sentence? C++ gives us .find().

If .find() locates the word, it returns the index number where that word begins.

 If it can't find it, it returns a massive special number called std::string::npos
  (which basically means "No Position found").

  */



  #include <iostream>
  #include <string>

  using namespace std;

  int main()
  {
      string phrase = "Learning Python and C++ is fun!";
      size_t position = phrase.find("python");

      if(position!= string::npos)
      {
          cout<<"C++ found at index:"<<position<<endl;      }
      else{
        cout<<"Word can't found!";
      }

      return 0;
  }
