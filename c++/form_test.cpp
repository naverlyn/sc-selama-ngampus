#include <fw/>
int main()
{
	using namespace nana;

	/* buat form */
	form yea;

	/* buat label sama nampilin teks */
	label lab(yea, "Test");
	lab.format(true);

	/* buat button */
	button btn(yea,"OK");
	btn.events().click(&yea
	{
		yea.close();
	});

	/* layout management */
	yea["text"]<<lab;
	yea["button"]<<btn;
	yea.collocate();

	/* tampilkan formnya */
	yea.show();

	exec();
}