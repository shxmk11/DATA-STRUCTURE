#include <iostream>

using namespace std;

class TV {
    public:
        int channel;
        int volumeLevel;
        bool on;

        TV() {
            channel = 1;
            volumeLevel = 1;
            on = false;
        }

        void turnOn() {
            on = true;
        }

        void turnOff() {
            on = false;
        }

        void channelUp() {
            if (channel < 120)
                channel++;
        }

        void channelDown() {
            if (channel > 1)
                channel--;
        }

        void setChannel(int newChannel) {
            if (newChannel >= 1 && newChannel <= 120)
                channel = newChannel;
        }

        void volumeUp() {
            if (volumeLevel < 7)
                volumeLevel++;
        }

        void volumeDown() {
            if (volumeLevel > 1)
                volumeLevel--;
        }

        void setVolume(int newVolumeLevel) {
            if (newVolumeLevel >= 1 && newVolumeLevel <= 7)
                volumeLevel = newVolumeLevel;
        }

};

int main() {
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(30);
    tv1.setVolume(3);

    cout << "tv1의 현재 전원: " << tv1.on << ", 채널: " << tv1.channel << ", 볼륨: " << tv1.volumeLevel << endl;

    TV tv2;
    tv2.turnOn();
    tv2.setChannel(3);
    tv2.setVolume(2);

    cout << "tv2의 현재 전원: " << tv2.on << ", 채널: " << tv2.channel << ", 볼륨: " << tv2.volumeLevel << endl;

    return 0;
}