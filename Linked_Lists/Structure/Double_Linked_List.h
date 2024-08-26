typedef struct s_dlist {
    struct s_dlist *prev; // Previous Node
    struct s_dlist *next; // Next Node
    void           *data; // Node data
} t_dlist;
