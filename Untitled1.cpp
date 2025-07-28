#include <iostream>
#include <string>
using namespace std;

struct weatherRecorder {
    string day;
    float temperature;
    int precipitationPercent;
};

void weatherRemarks(float temp) {
    if (temp < 15)
        cout << "Cold Day";
    else if (temp <= 30)
        cout << "Pleasant Day";
    else
        cout << " Hot Day";
}

void precipitationRemarks(int percent) {
    cout << " --> ";
    if (percent <= 20)
        cout << " Dry Weather (No rain expected)";
    else if (percent <= 50)
        cout << " Light Chance (Slight chance of rain)";
    else if (percent <= 80)
        cout << " Possible Rain (May need umbrella)";
    else
        cout << " Very Likely (High chance of rain)";
}

int main() {
    weatherRecorder week[7];

    for (int i = 0; i < 7; i++) {
        cout << "\nEntering data for Day " << i + 1 << ":\n";

        cout << "Enter day: ";
        cin >> week[i].day;

        cout << "Enter temperature (°C): ";
        cin >> week[i].temperature;

        cout << "Enter precipitation chance (%): ";
        cin >> week[i].precipitationPercent;
    }

    cout << "\n========== Weekly Weather Report ==========\n";

    for (int i = 0; i < 7; i++) {
        cout << "\nDay: " << week[i].day;

        cout << "\nTemperature: " << week[i].temperature << "°C --> ";
        weatherRemarks(week[i].temperature);

        cout << "\nPrecipitation: " << week[i].precipitationPercent << "%";
        precipitationRemarks(week[i].precipitationPercent);

        cout << "\n------------------------------------------";
    }

    return 0;
}








