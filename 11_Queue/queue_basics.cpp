#include<iostream>
#include<queue>
#include <string>


using namespace std;

int main()
{
    std::queue<std::string> printerQueue;


    // Insert some documents in the queue
    printerQueue.push("Document1.pdf");
    printerQueue.push("Invoice.docx");
    printerQueue.push("Photo.png");

    // Displays the current size of the queue
    std::cout<<"Size of the queue:"<<printerQueue.size()<<endl;

    // oldest document inserted
    std::cout<<"Oldest Document:"<<printerQueue.front()<<endl;

    // Latest document inserted
    std::cout<<"Latest Document:"<<printerQueue.back()<<endl;


    // Process elements of the queue
    while(!printerQueue.empty())
    {
        std::cout<<"Processed document:"<<printerQueue.front()<<endl;
        printerQueue.pop();
        std::cout<<"Remaining Jobs:"<<printerQueue.size()<<endl;
    }

    return 0;
}
