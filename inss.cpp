#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>

class Decoration {
private:
    std::string name;
    std::string placement;
    std::string style;

public:
    Decoration(const std::string& n, const std::string& p, const std::string& s);

    // Getter methods
    std::string getName() const;
    std::string getPlacement() const;
    std::string getStyle() const;
};

class Activity {
private:
    std::string name;
    std::string type;
    int duration;

public:
    Activity(const std::string& n, const std::string& t, int d);

    // Getter methods
    std::string getName() const;
    std::string getType() const;
    int getDuration() const;
};

class Catering {
private:
    std::string menu;
    int staff;

public:
    Catering(const std::string& m, int s);

    // Getter methods
    std::string getMenu() const;
    int getStaff() const;
};

class Guest {
private:
    std::string name;
    std::string relationship;
    std::string rsvp;

public:
    Guest(const std::string& n, const std::string& r, const std::string& rsvp);

    // Getter methods
    std::string getName() const;
    std::string getRelationship() const;
    std::string getRSVP() const;
};

class Event {
private:
    std::string type;
    std::string date;
    std::string location;
    std::string theme;
    std::vector<Decoration> decorations;
    std::vector<Activity> activities;
    std::vector<Guest> guests;

public:
    Event(const std::string& t, const std::string& d, const std::string& l, const std::string& th);

    // Getter methods
    std::string getType() const;
    std::string getDate() const;
    std::string getLocation() const;
    std::string getTheme() const;
    std::vector<Decoration>& getDecorations();
    std::vector<Activity>& getActivities();
    std::vector<Guest>& getGuests();

    // Add methods
    void addDecoration(const Decoration& decoration);
    void addActivity(const Activity& activity);
    void addGuest(const Guest& guest);
};

#endif // EVENT_H
