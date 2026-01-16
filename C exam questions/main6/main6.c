/////////////////////////////////////////////////
// WHAT'S THE DIFFERENT BETWEEN MALLOC AND CALLOC
/////////////////////////////////////////////////



// Malloc
// - Allocates one block of memory
// - Memory is not initalized (contains garbage values)
// - Faster than calloc (cuz not initalized and contains garbage values)
// - Size given in bytes

// Syntax
// int *arr=malloc(5*sizeof(int));


// Calloc
// - Allocates memory for n elements
// - Memort is initalized to zero
// - Slightly slower than malloc (cuz initalize values)
// - Size given as count x size

// Syntax
// int *arr=calloc(5,sizeof(int));