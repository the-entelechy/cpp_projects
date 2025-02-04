#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <filesystem>
int main(){
    //std::string User = getlogin();
    //std::cout << getlogin();
    char url = system("find / -type d -name 'lightdm-gtk-greeter.conf.d' 2>/dev/null"); 
    //search directory of url to find *.conf
    //open .conf file and search for string "background="
    //remove anything after the equal sign
    //append selected image to "background="
    //rename file with .bak and save file as original
    std::cout << url;
    char conf = system("find " + url + ".conf" 
    //std::string urlBase = 
    //std::ifstream file{};
};
