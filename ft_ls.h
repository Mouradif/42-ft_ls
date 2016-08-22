typedef struct	s_elt
{
	char			*filename;
	size_t			ts_edit;
	size_t			ts_create;
	size_t			ts_access;
	struct s_elt	*next;
}				t_elt;

typedef struct	s_etree
{
	t_elt 			*elt;
	struct s_etree	*left;
	struct s_etree	*right;
}				t_etree;
