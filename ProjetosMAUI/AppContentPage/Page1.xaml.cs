namespace AppContentPage;

public partial class Page1 : ContentPage
{
	public Page1()
	{
		InitializeComponent();
	}

    private void IrPagina2(object sender, EventArgs e)
    {
		Navigation.PushAsync(new Page2()); //Chamando a pagina 2
    }
}