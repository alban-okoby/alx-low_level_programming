<h2>0x15. C - FILE I/O </h2>

<h3> General </h3>
<ul>
<li>Look for the right source of information without too much help</li>
<li> How to manipulate file </li>
</ul>

<img src="https://upload.wikimedia.org/wikipedia/commons/f/f8/File_table_and_inode_table.svg" />

<i> image source : Wikipedia </i>

<h3> 2) append_text_to_file </h3>
<p>     
	The function starts by checking if the file name (filename) is valid. If filename is NULL, the function returns -1 to indicate an error. <br>

Then the function calculates the length of the text_content string using a for loop and stores it in the len variable. <br>

Then the function uses the open() function to open the file in write-only mode and append content to the end of the file (O_APPEND). If the file does not exist, the function returns an error.
<br>
Then the function uses the write() function to add the content of text_content to the end of the file. If the write fails, the function returns -1 to indicate an error.
<br>
Finally, the function uses the close() function to close the file and returns 1 to indicate successful execution.
<br>
It is important to note that if text_content is NULL, the function will do nothing and the file will remain unchanged. If the length of text_content is 0, the function will create an empty file.
</p>
