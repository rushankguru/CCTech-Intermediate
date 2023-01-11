#include "currency_exchange.h"

void display()
{
    int input, output;
    string str; 
    stringstream ss, ff;
    string str_num, input_currency,output_currency, currency;
    ifstream file;

    file.open("currency_conversion.txt");

    cout<<"This is a currency converter"<<endl;
    cout<<"Select your currency by entering its serial number or press 0 and then enter to abort the program"<<endl;
    print_currency_list(0);
    cin>>input;

    if (input==0)
    {
        abort();
    }
    

    if (0<input<10)
    {
        cout<<"Select currency to which you want to convert to by enetering its serial number"<<endl;
        print_currency_list(input);
        cin>>output;

        if (0<output<10 && input!=output)
        {
            int count = 1;
            float input_factor, output_factor;
            bool bool1=false, bool2=false;

            float number;
            cout<<"Enter the value to be converted"<<endl;
            cin>>number;
            while (getline(file, str))
            {
                if (count==input)
                {
                    input_factor = get_currency_factor(str);
                    input_currency = get_currency(str);
                    bool1 = true;
                }
                if (count==output)
                {
                    output_factor = get_currency_factor(str);
                    output_currency = get_currency(str);
                    bool2 = true;
                }
                if (bool1 && bool2)
                {
                    break;
                }
                count += 1;
            }
            float result;
            result = (input_factor/output_factor)*number;
            cout<<number<<" "<<input_currency<<" = "<<result<<" "<<output_currency<<endl;
            cout<<"\n\n";
            display();

        }
        else
        {
            cout<<"Ivalid Entry"<<endl;
            cout<<"Enter a serial number 1 to 9"<<endl;
            cout<<"\n\n";
            display();
        }
    }
    else
    {
        cout<<"Ivalid Entry"<<endl;
        cout<<"Enter a serial number 1 to 9"<<endl;
        cout<<"\n\n";
        display();
    }
    
}

void print_currency_list(int i)
{
    ifstream file;
    file.open("currency_list.txt");
    string str;
    int count;
    count=1;
    while (getline(file, str))
    {
        if (count!=i)
        {
            cout<<str<<endl;
        }
        count += 1;
    }
}

float get_currency_factor(string str)
{
    int value;
    string substr;
    stringstream ss;
    value = str.rfind(' ');
    substr = str.substr(0,value);
    value = substr.rfind(' ');
    substr = substr.substr(value+1);

    return string_to_float(substr);
}

float string_to_float(string value)
{
    int dot_index, num_digits_after, value_after;
    string after_dot_string, before_dot_string;
    stringstream ss,ff;
    float num_after, num_before;
    float total;

    dot_index = value.find('.');
    after_dot_string = value.substr(dot_index+1);
    num_digits_after = after_dot_string.length();
    ss<<after_dot_string;
    ss>>num_after;

    before_dot_string = value.substr(0,dot_index);
    ff<<before_dot_string;
    ff>>num_before;
 
    int divisor = pow(10, num_digits_after);
    total = (num_before) + (num_after/divisor);

    return total;
}

string get_currency(string str)
{
    int value;
    string substr;

    value = str.find(' ');
    substr = str.substr(value+1,3);

    return substr;
}

int main()
{  
    display();
}