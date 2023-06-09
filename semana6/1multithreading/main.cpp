#include <iostream>
#include <thread>
#include <vector>

class KeyListener {
public:
    KeyListener() {
        // Initialize the threads vector with thread names
        threads = {
            { "Thread 1", nullptr },
            { "Thread 2", nullptr },
            { "Thread 3", nullptr }
        };
    }

    void startListening() {
        char key;
        while (true) {
            std::cin >> key;

            // Calculate index based on key value
            int index = key - 'A';

            // Check if the index is within bounds
            if (index >= 0 && index < threads.size()) {
                std::pair<std::string, std::thread*>& threadPair = threads[index];
                if (threadPair.second && threadPair.second->joinable()) {
                    // A thread is already running for this key
                    std::cout << "Thread " << threadPair.first << " is already executing." << std::endl;
                } else {
                    // Start a new thread for the key
                    std::cout << "Starting thread " << threadPair.first << "." << std::endl;
                    threadPair.second = new std::thread(&KeyListener::executeThread, this, threadPair.first);
                }
            } else {
                std::cout << "Invalid key. Please try again." << std::endl;
            }
        }
    }

    void executeThread(const std::string& threadName) {
        std::cout << "Executing " << threadName << " thread." << std::endl;
        // Simulate some work
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << threadName << " thread finished." << std::endl;
    }

    ~KeyListener() {
        // Clean up the threads
        for (auto& pair : threads) {
            if (pair.second && pair.second->joinable()) {
                pair.second->join();
            }
            delete pair.second;
        }
    }

private:
    std::vector<std::pair<std::string, std::thread*>> threads;
};

int main() {
    KeyListener listener;
    listener.startListening();

    return 0;
}
