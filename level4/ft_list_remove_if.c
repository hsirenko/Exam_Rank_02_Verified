#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct      s_list
{
	struct s_list   *next;
	void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current = *begin_list;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp);
}

/*void print_list(t_list **list)
{
	t_list *current = *list;

	while (current)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
}

int main()
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->data = straa;
	aa->next = 0;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->data = strbb;
	bb->next = 0;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->data = strcc;
	cc->next = NULL;

	aa->next = bb;
	bb->next = cc;

	t_list **naughty_toy = &aa;
	print_list(naughty_toy);
	printf("______\n");

	ft_list_remove_if(naughty_toy, strbb, strcmp);
	print_list(naughty_toy);
}*/