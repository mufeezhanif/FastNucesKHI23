#include <iostream>

using namespace std;
void parseData(string something){
    if(something == "txt"){
        throw 502;
    }
    else {
        cout << "Data Parsing Done" << endl;
    }
}
void processData(string ext)
{
    try
    {
        cout << "Parsing Data" << endl;
        parseData(ext);
    }
    catch (int i)
    {
        cout << "Error occured with code " << i << endl;
        throw 0;
    }
}
int main()
{
    try
    {
        processData("txt");
        cout << "Data processed successfully" << endl;
    }
    catch (int x)
    {
        cout << "Error occured with code " << endl;
    }
    //UNCOMMENT THE CODE BELOW TO PROCESS DATA WITHOUT ANY ERROR
    // try
    // {
    //     processData("jpg");
    //     cout << "Data processed successfully" << endl;
    // }
    // catch (int x)
    // {
    //     cout << "Error occured with code " << endl;
    // }
    return 0;
}