#include <iostream>
using namespace std;

class SettingsManager {
private:
    string theme;
    int volume;
    string language;


    SettingsManager() {
        theme = "light";
        volume = 50;
        language = "EN";
    }


    SettingsManager(const SettingsManager&) = delete;
    SettingsManager& operator=(const SettingsManager&) = delete;

public:
    
    static SettingsManager& getInstance() {
        static SettingsManager instance; 
        return instance;
    }

    void setTheme(const string& newTheme) {
        if (newTheme == "light" || newTheme == "dark") {
            theme = newTheme;
        } else {
            cout << "Invalid theme! Use 'light' or 'dark'.\n";
        }
    }

    
    void setVolume(int newVolume) {
        if (newVolume >= 0 && newVolume <= 100) {
            volume = newVolume;
        } else {
            cout << "Invalid volume! Must be between 0 and 100.\n";
        }
    }

    void setLanguage(const string& newLanguage) {
        language = newLanguage;
    }


    void displaySettings() const {
        cout << "\nCurrent Settings:\n";
        cout << "Theme: " << theme << "\n";
        cout << "Volume: " << volume << "\n";
        cout << "Language: " << language << "\n";
    }
};


int main() {

    SettingsManager& settings = SettingsManager::getInstance();

    cout << "Default settings:";
    settings.displaySettings();

   
    settings.setTheme("dark");
    settings.setVolume(80);
    settings.setLanguage("FR");

    cout << "\nAfter modifying settings:";
    settings.displaySettings();

   
    SettingsManager& anotherRef = SettingsManager::getInstance();

    cout << "\nAccessing through another reference (should show same settings):";
    anotherRef.displaySettings();

    
    cout << "\nMemory address of first instance:  " << &settings << endl;
    cout << "Memory address of second instance: " << &anotherRef << endl;

    return 0;
}

    


