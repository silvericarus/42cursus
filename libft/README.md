<h1>🧰Libft🔧</h1>
<h2>Your very first own library</h2>
<a href="https://creativecommons.org/licenses/by-nc-sa/4.0/"><img src="https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png" alt="CC BY-NC-SA 4.0 License"></a><br>
Functions in the library:
<table>
<thead>
<tr>
<th>Function Name</th>
<th>Function Description</th>
</tr>
</thead>
<tbody>
<tr>
<td>isalpha</td>
<td>Checks if a character is an alphabetic character</td>
</tr>
<tr>
<td>isdigit</td>
<td>Checks if a character is a decimal digit</td>
</tr>
<tr>
<td>isalnum</td>
<td>Checks if a character is an alphabetic or numeric digit</td>
</tr>
<tr>
<td>isascii</td>
<td>Checks if a character is an ASCII character</td>
</tr>
<tr>
<td>isprint</td>
<td>Checks if a character is a printable character</td>
</tr>
<tr>
<td>strlen</td>
<td>Calculates the length of a string</td>
</tr>
<tr>
<td>memset</td>
<td>Fills a block of memory with a specified value</td>
</tr>
<tr>
<td>bzero</td>
<td>Sets a block of memory to zero</td>
</tr>
<tr>
<td>memcpy</td>
<td>Copies a block of memory from one location to another</td>
</tr>
<tr>
<td>memmove</td>
<td>Copies a block of memory, handling overlapping regions</td>
</tr>
<tr>
<td>strlcpy</td>
<td>Safely copies a string into a fixed-size buffer</td>
</tr>
<tr>
<td>strlcat</td>
<td>Safely concatenates two strings into a fixed-size buffer</td>
</tr>
<tr>
<td>toupper</td>
<td>Converts a character to uppercase</td>
</tr>
<tr>
<td>tolower</td>
<td>Converts a character to lowercase</td>
</tr>
<tr>
<td>strchr</td>
<td>Finds the first occurrence of a character in a string</td>
</tr>
<tr>
<td>strrchr</td>
<td>Finds the last occurrence of a character in a string</td>
</tr>
<tr>
<td>strncmp</td>
<td>Compares two strings up to a specified number of characters</td>
</tr>
<tr>
<td>memchr</td>
<td>Searches a block of memory for a specific character</td>
</tr>
<tr>
<td>memcmp</td>
<td>Compares two blocks of memory</td>
</tr>
<tr>
<td>strnstr</td>
<td>Searches for a substring within a string</td>
</tr>
<tr>
<td>atoi</td>
<td>Converts a string to an integer</td>
</tr>
<tr>
<td>calloc</td>
<td>Allocates and initializes a block of memory</td>
</tr>
<tr>
<td>strdup</td>
<td>Creates a duplicate of a string</td>
</tr>
</tbody>
</table>
<h3>Bonus</h3>
<p>You must integrate the <code>t_list</code> struct into libft.h for the bonus to work, the struct is set to these values:</p>
<pre><code>typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
</code></pre>
<p>Bonus functions:</p>
<table>
<thead>
<tr>
<th>Function Name</th>
<th>Function Description</th>
</tr>
</thead>
<tbody>
<tr>
<td>ft_lstnew</td>
<td>Allocates (with malloc(3)) and returns a new node.</td>
</tr>
<tr>
<td>ft_lstadd_front</td>
<td>Adds the node 'new' at the beginning of the list.</td>
</tr>
<tr>
<td>ft_lstsize</td>
<td>Counts the number of nodes in a list.</td>
</tr>
<tr>
<td>ft_lstlast</td>
<td>Returns the last node of the list.</td>
</tr>
<tr>
<td>ft_lstadd_back</td>
<td>Adds the node 'new' at the end of the list.</td>
</tr>
<tr>
<td>ft_lstdelone</td>
<td>
<p>Takes as a parameter a node and frees the memory of the node's content using the function 'del' given as a parameter and free the node. The memory of 'next' must not be freed.</p>
</td>
</tr>
<tr>
<td>ft_lstclear</td>
<td>
<p>Deletes and frees the given node and every successor of that node, using the function 'del' and free(3). Finally, the pointer to the list must be set to NULL.</p>
</td>
</tr>
<tr>
<td>ft_lstiter</td>
<td>Iterates the list 'lst' and applies the function 'f' on the content of each node.</td>
</tr>
<tr>
<td>ft_lstmap</td>
<td>
<p>Iterates the list 'lst' and applies the function 'f' on the content of each node. Creates a new list resulting from the successive applications of the function 'f'. The 'del' function is used to delete the content of a node if needed.</p>
</td>
</tr>
</tbody>
</table>
<h3>Extra functions after push_swap</h3>
<table>
    <tr>
      <td><code>int ft_abs(int nbr);</code></td>
      <td>Returns the absolute value of nbr</td>
    </tr>
    <tr>
      <td><code>size_t ft_arrsize(void *arr);</code></td>
      <td>Returns the size of arr</td>
    </tr>
    <tr>
      <td><code>long  ft_atoli(const char *str);</code></td>
      <td>Does the same as ft_atoi, but returns the number as long</td>
  </tr>
  <tr>
    <td><code>size_t  ft_matrix_size(char **arr);</code></td>
    <td>Returns the size of a matrix (number of inner pointers it contains)</td>
  </tr>
  <tr>
    <td><code>char  *ft_strtrim_left(char const *s1, char const *set);</code></td>
    <td>Trim all the elements in the 'set' string away from 's1' starting at the start until it finds a char that isn't in 'set'. The string returned is allocated with malloc(3).</td>
  </tr>
</table>
<h1>ft_printf</h1>
<h2>Because ft_putnbr() and ft_putstr() aren't enough</h2>
<p>You have to implement the following conversions:</p>
<ul>
<li>%c Prints a single character.</li>
<li>%s Prints a string (as defined by the common C convention).</li>
<li>%p The void * pointer argument has to be printed in hexadecimal format.</li>
<li>%d Prints a decimal (base 10) number.</li>
<li>%i Prints an integer in base 10.</li>
<li>%u Prints an unsigned decimal (base 10) number.</li>
<li>%x Prints a number in hexadecimal (base 16) lowercase format.</li>
<li>%X Prints a number in hexadecimal (base 16) uppercase format.</li>
<li>%% Prints a percent sign.</li>
</ul>
<h1>get_next_line</h1>
<h2>Reading a line from a fd is way too tedious</h2>
<table>
<tr>
<td>Function name</td>
<td>get_next_line</td>
</tr>
<tr>
<td>Prototype</td>
<td>char *get_next_line(int fd);</td>
</tr>
<tr>
<td>Turn in files</td>
<td>get_next_line.c, get_next_line_utils.c, get_next_line.h</td>
</tr>
<tr>
<td>Parameters</td>
<td>fd: The file descriptor to read from</td>
</tr>
<tr>
<td>Return value</td>
<td>
<p>Read line: correct behavior</p>
<p>NULL: there is nothing else to read, or an error occurred</p>
</td>
</tr>
<tr>
<td>External functs.</td>
<td>read, malloc, free</td>
</tr>
<tr>
<td>Description</td>
<td>Write a function that returns a line read from a file descriptor</td>
</tr>
</table>
