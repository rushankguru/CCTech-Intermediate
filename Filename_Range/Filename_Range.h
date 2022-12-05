#include <iostream>
#include <string>

using namespace std;
string copy_input;

class FileNameRange
{
    string string_before_last_dot(string word)
    {
        int dot_last_index = word.find_last_of(".");
        word = word.substr(0, dot_last_index);
        // cout<<word<<"1"<<endl;
        return string_after_last_slash(word);
    }

    string string_after_last_slash(string word)
    {
        if (word.find('/')+1)
        {
            int slash_last_index = word.find_last_of('/');
            word = word.substr(slash_last_index +1, word.length());
            // cout<<word<<"2"<<endl;
        }

        return remove_key_words(word);
    }

    string string_tolower(string word)
    {
        string lower_string = "";

        for (int i = 0; i < word.length(); i++) 
        {
            char ch = tolower(word[i]);
            lower_string = lower_string + ch;
        }
        return lower_string;
    }


    string remove_key_words(string word)
    {
        string lower_string  = string_tolower(word);
        const char* words_to_check[]={"tests", "test", "spec", "step"}; 
        for (int j=0;j<2;j++)
            {
                for (int i=0;i<4;i++)
                {
                    if (lower_string.find(words_to_check[i])+1)
                    {
                        int index = lower_string.find(words_to_check[i]);
                        
                        if (index==0)
                        {
                            word = word.substr(string (words_to_check[i]).length(), lower_string.length());
                            // lower_string =  lower_string.substr(string (words_to_check[i]).length(), lower_string.length());
                            break;
                        }
                        else
                        {
                            word = word.substr(0, index);
                            // lower_string = lower_string.substr(0, index);
                            break;
                        }
                        
                    }
                }
                lower_string = string_tolower(word);
            }
        // cout<<word<<"3"<<endl;
        return remove_symbols_from_end(word);
    }



    string remove_symbols_from_end(string word)
    {
        const char* all_symbols = "-_.";
        for (int i=word.length()-1;i>=0;i--)
        {
            char ch  = word[i];
            if (string(all_symbols).find(ch)+1)
            {
                word.erase(i,1);
                // cout<<split<<endl;
            }
            else
            {
                break;
            }
        }
        // cout<<word<<"4"<<endl;
        return remove_symbols_from_start(word);
    }



    string remove_symbols_from_start(string word)
    {
        const char* all_symbols = "-_.";
        for (int i=0;i<word.length();i++)
        {
            char ch  = word[i];
            if (string(all_symbols).find(ch)+1)
            {
                word.erase(i,1);
                // cout<<split<<endl;
            }
            else
            {
                break;
            }
        }
        // cout<<word<<"5"<<endl;
        return word;
    }



    string get_index_array(string word,string word_input)
    {
        int a = word_input.find(word);
        int b = word_input.find(word)+word.length();
        string output = "[" + to_string(a) +","+ to_string(b)+ "]";
        // cout<<word<<"6"<<endl;
        // cout<<word_input<<" input word "<<endl;
        return output;
    }

    public:
    string filename_range(string input)
    {
        // string input;
        string split;
        string copy_input;

        // getline(cin,input);
        copy_input = input;

        split = string_before_last_dot(input);
        string range = get_index_array(split, copy_input);

        return range;

    }
};



