#include <stdio.h>
#include <stdlib.h>
//#include "list.h"

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int swap;

	tmp = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return(lst);
}

/*int ascending(int a, int b)
{
	return (a <= b);
}

int main()
{
	int a = 20;
	int b = 10;

	t_list *sorted;
	t_list *given_a;
	t_list *given_b;

	//t_list *list;



	given_b = malloc(sizeof(t_list));
	given_b->data = b;
	given_b->next = NULL;



	//list = given_a;
	given_a = malloc(sizeof(t_list));
	given_a->data = a;
	given_a->next = given_b;


	sorted = sort_list(given_a, ascending);
	while (sorted != NULL)
	{
		printf("sorted: %d\n", sorted->data);
		sorted = sorted->next;
	}

	free(given_a);
	free(given_b);

}*/