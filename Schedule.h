#pragma once
#include <iostream>
#include <string>
using namespace std;

constexpr auto MAX_ARY = 500;

//const MAX_ARY = 500

class Entry {
private:
    int m_hour;
    int m_minute;
    string m_todo;

public:
    Entry();
 
    void setData(int hour, int minute, const char* td);
    void setData(Entry& e);

    //This routine prints a line that would look something like:
    // 12:30 Take a Walk
    void printEntry();

    int getHour();
    int getMin();
    string getToDo();
};



class Schedule
{
private:
    // Array of Entry
    Entry* m_entryArr;

    // User defined size of the Array
    int m_maxEntries;

    // Number of entries filled in with setData (starts out = 0)
    int m_actualEntryCount;

    
public:
    // This Constructor will initialize 2 ints and define the m_entryArr. Make sure MAX_ARY is not exceeded
    Schedule(int maxEntries);

    // Copy Constructor – it is done for you
    Schedule(Schedule& s);
    ~Schedule();
    // addEntry returns true if it succeeds, false if we are out of space
    // Note that addEntry will merely call setData to fill in the next entry
    // in the array and increment the m_actualEntryCount
    bool addEntry(int hour, int minute, const char* todo);

    // This routine prints out all entries (i.e. as specified by m_actualEntryCount) 

    
    void printSchedule();
    

};


