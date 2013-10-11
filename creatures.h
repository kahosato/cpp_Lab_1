#if !defined(CREATURES_H)
#define CREATURES_H
class Creature
{
    public:
        Creature ();
        Creature(const Creature&);
        /* It's ok to define pure virtual function */
        virtual void makeNoise() = 0;
};

class Monkey : public Creature
{
    public:
        void makeNoise();
};

class Pig: public Creature
{
    public:
        void makeNoise();
};

class Duck: public Creature
{
    public:
        void makeNoise();
};


#endif
