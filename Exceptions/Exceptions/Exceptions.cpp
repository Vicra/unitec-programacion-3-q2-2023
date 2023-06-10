#include <iostream>
#include <stdexcept>
#include <list>
#include "NetworkRequest.h"

#define SERVER_HOST "198.205.0.1"
#define MAX_TRIES 3

int main()
{
    // Upload files to a FTP server
    
        try {
            NetworkRequest networkRequest;
            // intentar ejecutar codigo
            std::list <std::string> fileList;
            fileList.push_back("img1.png");
            fileList.push_back("img2.png");
            fileList.push_back("img3.png");
            fileList.push_back("img4.png");
            fileList.push_back("img5.png");
            fileList.push_back("img6.png");

            for (std::string file : fileList)
            {
                int count = 0;
                while (count < MAX_TRIES) {
                    try {
                        count++;
                        networkRequest.makeRequest(SERVER_HOST, file);
                        std::cout << "Success " << file << std::endl;
                        break;
                    }
                    catch (std::string error) {
                        std::cout << "Error: " << error ;
                        if (count >= MAX_TRIES) {
                            std::cout << " Moving to next... " << std::endl;
                            continue;
                        }
                        else {
                            // sleep
                            std::cout << " Trying again: " << std::endl;
                        }
                    }
                }
            }
        }
        catch (std::string message) {
            // codigo que se ejecuta si algo falla o truena (throw)
            std::cout << "Error: " << message << std::endl;
        }
    }
