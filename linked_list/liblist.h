typedef struct node {
    char *value;
    struct node *next;
} node_t;

void    push_first(node_t **head, char *new_value);
void    push_last(node_t *head, char *new_value);
void    print_list(node_t *head);
node_t  *init_list(char *first_value);
char    *pop_first(node_t **head);
char    *pop_last(node_t *head);
char    *pop_by_index(node_t **head, int n);
char    *pop_by_value(node_t **head, char *rm_value);
