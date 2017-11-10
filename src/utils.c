#include <assert.h>
/*
 *parameter: id, month number id, for human usage, so range is 1-12.
 */
const char *get_month_by_id(int id)
{
	assert(id > 0 && id < 13);
	const char *months[] = {
		"Jan", "Feb", "Match", "Aprl", "May", "June", "July", "Agust", 
		"Sep", "Oct", "Nov", "Dec"
	};
	const char *ptr = months[id - 1];

	return ptr;	
}
