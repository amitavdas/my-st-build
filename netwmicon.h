extern int  _binary_icon_png_size;
extern FILE _binary_icon_png_start;
extern FILE _binary_icon_png_end;

char *png_file_Ptr = &_binary_icon_png_start;
size_t png_file_size = (size_t) _binary_icon_png_size;  /* Data size */
