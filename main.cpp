
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    char Character = 0;
    int words = 0;
    int upper_case = 0;
    int lower_case = 0;
    int punctuation = 0;
    int digits = 0;
    int entered_words = 0;
    string user_filename;
    cout <<  "Enter the filename of the file containing text:\n";
    cout << "(hit the Enter key when done)\n";
    cin >> user_filename;
    ifstream MyReadFile(user_filename);

    while((MyReadFile.get(Character)) )
    {

                if (isalnum (Character))
                {
                    if (!entered_words)
                    {
                        entered_words = 1;
                        words++;
                    }
                }


                else
                {
                    if (entered_words)
                    {
                        entered_words = 0;
                    }
                }


                if (isupper(Character))
                {
                    upper_case++;
                }


                else if (islower(Character))
                {
                    lower_case++;
                }


                else if (isdigit(Character))
                {
                    digits++;
                }


                else if (ispunct(Character))
                {
                    punctuation++;
                }
    }

	MyReadFile.close();
    cout << "Total number of words is " <<  words << endl;
    cout << "Total number of digits are " <<  digits << endl;
    cout << "Total number of uppercase letters is " << upper_case << endl;
    cout << "Total number of lowercase letters is " << lower_case << endl;
    cout << "Total number of punctuation characters is " << punctuation << endl;

return 0;
} 
