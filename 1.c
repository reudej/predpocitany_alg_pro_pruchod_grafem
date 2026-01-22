
struct hrana_s;
typedef struct hrana_s hrana_t;

struct vrchol_s {
    unsigned int id;
    hrana_t *hrany;
};
typedef struct vrchol_s vrchol_t;

struct hrana_s {
    unsigned int id;
    unsigned int hodnota;
    vrchol_t *vrchol;
};

typedef struct {
    vrchol_t root;
    vrchol_t *vrcholy;
    hrana_t *hrany;
} graf_t;

