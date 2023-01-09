#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

string get_currency(string str);
string get_value_substring(string str);

int main()
{
    ifstream file;
    int value;
    string substr;
    // opening the file
    file.open("currency_conversion.txt");
    if (file)
    {
        int input, output;
        string str; 
        stringstream ss, ff;
        string str_num, input_currency,output_currency, currency;

        print_currency_list();
        cout<<"Select your currency by entering its serial number"<<endl;
        cin>>input_currency;
        ss<<input_currency;
        ss>>input;
        if (input)
        {
            cout<<"Select currency to which you want to convert to by enetering its serial number"<<endl;
            cin>>output_currency;
            ff<<input_currency;
            ff>>output;
            if (output)
            {
                int count = 1, input_factor, output_factor;
                float;
                while (getline(file, str))
                {
                    if (count==input)
                    {
                        input_factor = get_factor(str);
                    }
                    else if (count==output)
                    {
                        output_factor = get_factor(str)
                    }
                    currency = get_currency(str);
                    str_num = get_value_substring(str);
                    // str.substr(0,value-2);
                    cout<<str_num<<endl;
                    cout<<currency<<endl;
                    break;
                }
            }
            else
            {
                cout<<"Enter a serial number 1 to 9"<<endl;
                display();
            }
        }
        else
        {
            cout<<"Enter a serial number 1 to 9"<<endl;
            display();
        }
    }
}


void print_currency_list()
{
    ifstream file;
    file.open("currency_list.txt");
    string str;

    while (getline(file, str))
    {
        cout<<str<<endl;
    }
}


string get_factor(string str)
{
    int value;
    string substr;
    stringstream ss;
    value = str.rfind(' ');
    substr = str.substr(0,value);
    value = substr.rfind(' ');
    substr = substr.substr(value+1);

    return substr;
}

float string_to_float(value)
{

}

string get_currency(string str)
{
    int value;
    string substr;

    value = str.find(' ');
    substr = str.substr(value+1,3);

    return substr;
}

void display()
{

}