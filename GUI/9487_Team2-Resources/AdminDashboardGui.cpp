#include "AdminDashboardGui.h"

int registerUser(string username, string password, string clinicPostfix)
{
    ifstream filereader{ "Resource Files/database/users.txt" };
    string line;
    string element;

    // first check if username already exists,
    // if it does exists, send error message, and exit method
    while (filereader)
    {
        getline(filereader, line);
        element = line.substr(0, line.find(","));

        if (username == element)
        {
            cout << "username is already taken." << endl;
            return 0;
        }
    }

    filereader.close();

    // else if it does not exist, write username and clinic assigned to database
    filereader.open("Resource Files/database/users.txt");
    ofstream filewriter;
    filewriter.open("Resource Files/database/temp.txt", ofstream::out);

    bool firstLine = true;
    getline(filereader, line);

    // rewrite contents of users.txt into temp.txt
    while (filereader)
    {
        // to handle pesky bug for the first line
        if (firstLine)
        {
            filewriter << line;
            firstLine = false;
            getline(filereader, line);
        }
        else
        {
            cout << line << endl;
            filewriter << "\n"
                << line;
            getline(filereader, line);
        }
    }

    // append newly registered user details to temp.txt
    string newLine = "\n" + username + "," + password + "," + "clinic_" + clinicPostfix;
    filewriter << newLine;

    filereader.close();
    filewriter.close();

    string fileLocation = "Resource Files/database/users.txt";
    // delete original file
    remove(fileLocation.c_str());
    // rename temporary file
    string fileName = "Resource Files/database/users.txt";
    rename("database/temp.txt", fileName.c_str());
}
void deleteUser(string username)
{
    // rewrite contents of users.txt
    // but when username matches, skip that line
    ifstream filereader{ "Resource Files/database/users.txt" };
    ofstream filewriter;
    filewriter.open("Resource Files/database/temp.txt", ofstream::out);
    string line;

    bool firstLine = true;
    getline(filereader, line);
    bool found = false;

    // rewrite contents of users.txt into temp.txt
    while (filereader)
    {
        if (username == line.substr(0, line.find(',')))
        {
            // do nothing, skip that line
            getline(filereader, line);
            found = true;
        }
        else
        {
            // to handle pesky bug for the first line
            if (firstLine)
            {
                filewriter << line;
                firstLine = false;
                getline(filereader, line);
            }
            else
            {
                cout << line << endl;
                filewriter << "\n" << line;
                getline(filereader, line);
            }
        }
    }

    filereader.close();
    filewriter.close();

    string fileLocation = "Resource Files/database/users.txt";
    // delete original file
    remove(fileLocation.c_str());
    // rename temporary file
    string fileName = "Resource Files/database/users.txt";
    rename("Resource Files/database/temp.txt", fileName.c_str());

    if (found)
    {
        cout << "user deletion success" << endl;
    }
    else
    {
        cout << "user not found, deletion cancelled." << endl;
    }
}

