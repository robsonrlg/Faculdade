namespace AppFlyoutPage
{
    public partial class App : Application
    {
        public App()
        {
            InitializeComponent();

            MainPage = new FlyoutPageMenu(); //Definir a pagina que sera chamada
        }
    }
}
