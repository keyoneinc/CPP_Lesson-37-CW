#include "AudioRecord.h"

AudioRecord::AudioRecord()
{
    name = "undefined";
    singer = "undefined";
    year = 0;
}

AudioRecord::AudioRecord(string name, string singer, int year)
{
    this->name = name;
    this->singer = singer;
    this->year = year;
}

string AudioRecord::getName() const
{
    return name;
}

string AudioRecord::getSinger() const
{
    return singer;
}

int AudioRecord::getYear() const
{
    return year;
}

void AudioRecord::showInfo() const
{
    cout << "Singer: " << singer << endl;
    cout << "Name of composition: " << name << endl;
    cout << "Year: " << year << endl << endl;
}
