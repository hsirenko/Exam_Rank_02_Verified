#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	//if (begin_list == NULL)
		//return ;
	t_list *list_ptr;

	list_ptr = begin_list;

	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

/*void	print_data(void *lst)
{
	char *str = lst;
	printf("data: %s\n", str);
}

int main()
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = strdup(straa);

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strdup(strbb);

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strdup(strcc);

	aa->next = bb;
	bb->next = cc;

	t_list *begin_list = aa;

	ft_list_foreach(begin_list, print_data);

	free(aa->data);
	free(bb->data);
	free(cc->data);

	free(aa);
	free(bb);
	free(cc);
}*/