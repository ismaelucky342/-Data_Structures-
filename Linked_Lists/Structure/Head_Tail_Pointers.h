typedef struct s_dlist {
    struct s_dlist *prev; // Pointer to the previous node
    struct s_dlist *next; // Pointer to the next node
    void           *data; // Generic pointer to the data
} t_dlist;

typedef struct {
    t_dlist *head; // Pointer to the first node
    t_dlist *tail; // Pointer to the last node
} t_dlist_head;

//To make operations like inserting at the beginning or end of the list more efficient