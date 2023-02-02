typedef struct StateRep *State;

struct StateRep {
    int *ex;
    int *lvl;
    int score[5];
};

bool addition(State game);
bool subtraction(State game);
bool multiplication(State game);
bool division(State game);
bool percentages(State game);
