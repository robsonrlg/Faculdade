namespace AppFlyoutPage;

public partial class Menu : ContentPage
{
	public Menu()
	{
		InitializeComponent();
	}

    private void OnButtonClicked1(object sender, EventArgs e)
    {
        ((FlyoutPageMenu)App.Current.MainPage).Detail = new Page1();
    }

    private void OnButtonClicked2(object sender, EventArgs e)
    {
        ((FlyoutPageMenu)App.Current.MainPage).Detail = new Page2();
    }

    private void OnButtonClicked3(object sender, EventArgs e)
    {
        ((FlyoutPageMenu)App.Current.MainPage).Detail = new Page3();
    }
}