#include <iostream>
#include <string>
using namespace std;

string marathi(string word, string a[30])
{
    string b[30] = {"अ", "ब", "क", "ड", "ई", "एफ", "जी", "एच",
                    "आय", "जे", "के", "एल", "एम", "एन", "ओ", "पी", "क्यू", "आर",
                    "एस", "टी", "यू", "वी", "डब्ल्यू", "एक्स", "वाई", "जेड"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = b[i];
            break;
        }
    }
    return j;
}

string telugu(string word, string a[30])
{
    string c[30] = {"అ", "బ", "క", "డ", "ఈ", "ఎఫ్", "జి", "హెచ్", "ఐ",
                    "జె", "కే", "ఎల్", "ఎం", "ఎన్", "ఓ", "పి", "క్యూ", "ఆర్", "ఎస్",
                    "టి", "యూ", "వీ", "డబల్యూ", "ఎక్స్", "వై", "జెడ్"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = c[i];
            break;
        }
    }

    return j;
}

string japanese(string word, string a[30])
{
    string d[30] = {"あ", "び", "け", "ど", "い", "えふ", "じ", "えいち", "あい",
                    "じぇ", "けー", "える", "えむ", "えぬ", "おー", "ぴー", "きゅー",
                    "あーる", "えす", "てぃー", "ゆー", "ぶい", "だぶりゅー", "えっくす", "わい", "じー"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = d[i];
            break;
        }
    }

    return j;
}

string chinese(string word, string a[30])
{
    string e[30] = {"诶", "比", "西", "迪", "伊", "艾弗", "吉", "艾尺", "艾",
                    "杰", "开", "艾勒", "艾马", "艾娜", "哦", "屁", "吉吾", "艾儿",
                    "艾丝", "提", "伊吾", "维", "豆贝尔维", "艾克斯", "吾艾", "贼德"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = e[i];
            break;
        }
    }

    return j;
}

string gujarati(string word, string a[30])
{
    string g[30] = {"એ", "બી", "સી", "ડી", "ઈ", "એફ", "જી", "એચ", "આય",
                    "જે", "કે", "એલ", "એમ", "એન", "ઓ", "પી", "ક્યૂ", "આર",
                    "એસ", "ટી", "યૂ", "વી", "ડબ્લ્યૂ", "એક્સ", "વાય", "ઝેડ"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = g[i];
            break;
        }
    }

    return j;
}

string punjabi(string word, string a[30])
{
    string f[30] = {"ਅ", "ਬ", "ਕ", "ਡ", "ਇ", "ਫ", "ਗ ", "ਹ", "ਈ",
                    "ਜ", "ਕੇ", "ਲ", "ਮ", "ਨ", "ਓ", "ਪ", "ਕ਼", "ਰ",
                    "ਸ", "ਤ", "ਉ", "ਵ", "ਵ", "ਐਕਸ", "ਯ", "ਜ਼"};
    string j;
    for (int i = 0; i <= 26; i++)
    {
        if (a[i] == word)
        {
            j = f[i];
            break;
        }
    }

    return j;
}

int main()
{
    string c[30] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L",
                    "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string b;
    int a;

    cout << "----------------------------------------------" << endl;
    cout << "      Welcome to the translator in C++        " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "The available languages are:" << endl;
    cout << "1. Marathi" << endl;
    cout << "2. Telugu" << endl;
    cout << "3. Japanese" << endl;
    cout << "4. Chinese" << endl;
    cout << "5. Punjabi" << endl;
    cout << "6. Gujarati" << endl;
    cout << "7. Exit" << endl;
    cout << "Disclaimer:" << endl;
    cout << "You can only translate a single letter. For whole" << endl
         << " word translation, enter only one letter." << endl;
    cout << "For example: In Bengali, A is spoken as Kha." << endl;
    bool endofprogram = false;
    while (!endofprogram)
    {
        cout << "Enter the language you want to translate: ";
        cin >> a;

        if (a == 7)
        {
            endofprogram = true;
            continue;
        }
        cout << "Enter the letter you want to translate: ";
        cin >> b;
        string translation;
        if (a == 1)
        {
            translation = marathi(b, c);
        }
        else if (a == 2)
        {
            translation = telugu(b, c);
        }
        else if (a == 3)
        {
            translation = japanese(b, c);
        }
        else if (a == 4)
        {
            translation = chinese(b, c);
        }
        else if (a == 5)
        {
            translation = punjabi(b, c);
        }
        else if (a == 6)
        {
            translation = gujarati(b, c);
        }

        cout << "The translaton of " << b << "is:- " << translation << endl;
    }

    cout << "Exiting the translator....."<<endl;
    cout<<"Thank you 😊😊";

    return 0;
}
