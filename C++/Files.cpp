#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void readFromFile()
{
    string s;
    ifstream file("text.txt");
    if (file.is_open())
    {
        while (getline(file, s))
        {
            cout << s << endl;
        }
        file.close();
    }
    else
    {
        cout << "File Opening Fail" << endl;
    }
}
void writeToFile()
{
    ofstream file("text.txt");
    if (file.is_open())
    {
        file << "Hello World\n";
        file << "New Line\n";
        file.close();
    }
    else
    {
        cout << "File Opening Fail" << endl;
    }
}
void readAndWrite()
{
    char input[75];
    ofstream os;
    os.open("text.txt");
    cout << "Writing to a text file:" << endl;
    cout << "Please Enter your name: ";
    cin.getline(input, 100);
    os << input << endl;
    cout << "Please Enter your age: ";
    cin >> input;
    cin.ignore();
    os << input << endl;
    os.close();

    ifstream is;
    is.open("text.txt");
    string line;
    cout << "Reading from a text file:" << endl;
    while (getline(is, line))
    {
        cout << line << endl;
    }
    is.close();
}
int main()
{

    readAndWrite();
}