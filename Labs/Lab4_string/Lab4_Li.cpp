/*
QiuLiangJun Li
Lab 4, string and string methods
Sep 8, 2025
*/

#include<iostream> 
#include<string>

using namespace std;

int main(){
    cout<<"\n-----Exmaple 1: string indexing -----" << endl;
    string first_name = "Peter";
    cout<<"The 3rd character = " << first_name[2]<< endl;
    cout<<"The 1st character = " << first_name.at(0)<<endl;

    cout<<"\n-----Exmaple 2: amount of character in a string -----" << endl;
    int characters = first_name.length();
    cout << "There is " << characters<<" character/s in "<<first_name<<endl;

    cout<<"\n-----Exmaple 3: concatenate character/s in a string -----" << endl;
    string last_name = "Pan";
    string username = "PP123";
    cout<<"concatenated word = "<<first_name + last_name + username << endl;

    cout<<"\n-----Exmaple 4: substracting character/s in a string -----" << endl;
    string msg = "Today is a beautiful day!";
    // extract 5 characters from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = " << subst_char<< endl;

    cout<<"\n-----Exmaple 5: inserting character/s in a string -----" << endl;
    // insert the word "maybe"
    msg.insert(5," maybe");
    cout<<"After insert method = " << msg << endl;

    cout<<"\n-----Exmaple 6: inserting character/s to the end of a string -----" << endl;
    msg.append(" -- by QiuLiangJun Li");
    cout<<"After append method = " <<msg<<endl;

    cout<<"\n-----Exmaple 7: replacing character/s in a string -----" << endl;
    msg.replace(17,9,"bad");
    cout<<"After replace method = " << msg << endl;

    cout<<"\n-----Exmaple 8: erasing character/s from a string -----" << endl;
    msg.erase(0,5);
    cout<<"After erase method = " << msg << endl;

    cout<<"\n-----Exmaple 9: finding character/s in a string -----" << endl;
    // find method returns the index number of the first found
    // if the character was not found, it returns -1
    // find the word 'Qiu'

    int index_Qiu = msg.find("Qiu");
    cout << "The index of Qiu = " << index_Qiu << endl;


    cout<<"\n----- exercise: -----" << endl;
    string word;
    cout << "Leave a word : ";
    cin >> word;
    // print the 2nd character of the word. 
    cout << "The 2nd character = " << word[1] << endl;
    // Length of the word
    int Length_of_word = word.length();
    cout<<"The Message has: " << Length_of_word << endl;
    //replace 2 characters from the 3rd character with "-- $ --" . Print result
    word.replace(2,2,"$$");
    cout << "Replace message = " << word << endl;
    //remove 3 characters from the end of the word. Print result
    word.erase(Length_of_word-3,3);
    cout << "After remove 3 character from the end of the word: " << word << endl;

    return 0;
}