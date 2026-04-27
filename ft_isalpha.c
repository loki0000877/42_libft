int	ft_isalpha(int c)
{
	int	state;
	
	state = 0
	if ((c >= a && c <= z) || (c >= A && c <= Z))	
		state = c;
	return(state);
}
