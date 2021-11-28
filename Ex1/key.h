#ifndef KEY_H
#define KEY_H

class Key {
    private:
        int _value;

    public:
        Key();
        Key(int value);
        int getValue();
        void setValue(int v);
        bool operator==(Key k);
};

#endif
