size_t str_arr_size(char **str_arr)
{
	size_t count = 0;

	while (str_arr[count])
		++count;
	return (count);
}
