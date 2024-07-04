#include <iostream>
#include "MyQueue.h"
#include "AudioRecord.h"
#include <vector>
#include <string>
#include <Windows.h>
#include "PriorityQueue.h"
using namespace std;

int main()
{
    //MyQueue::Queue<string> pv311;

    //pv311.push_back("Oleg");
    //pv311.push_back("Danylo");
    //pv311.push_back("Yaroslav");
    //pv311.showInfo();

    //cout << "--------------------------------------\n";
    //while (!pv311.isEmpty()) {
    //    pv311.showInfo();
    //    cout << pv311.first() << endl << endl;
    //    pv311.pop_front();
    //}

    // -------------------------------------------------------------------------

    //vector<AudioRecord> ar;

    //ar.push_back(AudioRecord("Single Ladies", "Beyonce", 2008));
    //ar.push_back(AudioRecord("Umbrella", "Rihanna featuring Jay-Z", 2007));
    //ar.push_back(AudioRecord("Shake it Off", "Taylor Swift", 2016));
    //ar.push_back(AudioRecord("Toxic", "Britney Spears", 2003));
    //ar.push_back(AudioRecord("Rolling in the Deep", "Adele", 2011));
    //ar.push_back(AudioRecord("Firework", "Katy Perry", 2010));
    //ar.push_back(AudioRecord("Blinding Lights", "The Weeknd", 2019));
    //
    //// created audio player with queue of tracks
    //MyQueue::Queue<AudioRecord> player;
    //player.push_back(ar[2]);
    //player.push_back(ar[3]);
    //player.push_back(ar[5]);

    //cout << "Playing: " << endl;
    //while (!player.isEmpty()) {
    //    player.first().showInfo();
    //    Sleep(2000);
    //    player.pop_front();
    //    system("cls");

    //}


    // -------------------------------------------------------------------------


    MyQueue::PriorityQueue<int> a;

    a.push_back(34);
    a.push_back(64);
    a.push_back(57);
    a.push_back(12);
    a.push_back(92);
    a.showInfo();
    cout << "______________________________\n";
    while (!a.isEmpty())
    {
        a.showInfo();
        cout << a.first() << endl << endl;
        a.pop_front();
    }



}
