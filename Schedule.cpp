#include "Schedule.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
Entry::Entry()
{
    m_hour = -1;
    m_minute = -1;
    m_todo = "N/A";
}

void Entry::setData(int hour, int minute, const char* td) {

    this->m_hour = hour;
    this->m_minute = minute;
    this->m_todo = td;
}
void Entry::setData(Entry& e) {
    this->m_hour=e.m_hour;
    this->m_minute =e.m_minute;
    this->m_todo=e.m_todo;
}
int Entry::getHour() {

    return m_hour;
}
int Entry::getMin() {

    return m_minute;
}
string Entry::getToDo() {

    return  m_todo;
}

void Entry::printEntry() {
    cout << m_hour << ":" << m_minute << "  " << m_todo << endl;
}

//Schedul part:


Schedule::Schedule(int maxEntries) {
    m_maxEntries = maxEntries;
    m_actualEntryCount = 0;
    m_entryArr = new Entry[m_actualEntryCount];
   
    if (maxEntries > 500) {
        cout << "Invalid Enter." << endl;
    }
 
}


Schedule::Schedule(Schedule& s) {
    m_actualEntryCount = s.m_actualEntryCount;
    m_maxEntries = s.m_maxEntries;
    m_entryArr = new Entry[m_maxEntries];
    for (int i = 0; i < m_actualEntryCount; i++) {
    
        m_entryArr[i].setData(s.m_entryArr[i]);
    }
}

Schedule::~Schedule() {  
    delete[] m_entryArr;

}
bool Schedule::addEntry(int hour, int minute, const char* todo) {
   
     if(m_actualEntryCount== m_maxEntries-1){

        return false;
    }
     
         m_entryArr[m_actualEntryCount].setData(hour, minute, todo);
         m_actualEntryCount++;
         return true; 
      
}
void Schedule::printSchedule() {
    
   
    for (int index = 0; index < m_actualEntryCount; index++) {
        m_entryArr[index].printEntry();
    }
}




