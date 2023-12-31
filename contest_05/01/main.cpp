class Cat {
public:
    bool is_alive() {
        return alive;
    }
    
    void set_alive(bool value) {
        alive = value;
    }

private:
    bool alive = true;
};

class Box {
public:
    Cat open() {
        Cat cat;
        int random = rand() % 2;
        
        if (random == 0) {
            cat.set_alive(true);
        } else {
            cat.set_alive(false);
        }
        
        return cat;
    }
};
