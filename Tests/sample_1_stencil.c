int main() 
{
	stencil gx{1,2} = {{ 1, 0, -1 }, { 2, 0, 2 }, { -1, 0, -1 }}; 
	stencil gy{1,2} = {{ 1, 2, 1 }, { 0, 0, 0 }, { 1, 2, 1 }};
	return 0;
}