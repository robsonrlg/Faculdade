using System;
using Microsoft.Maui.Controls;

namespace Calculadora
{
    public partial class MainPage : ContentPage
    {
        private string currentInput = string.Empty;
        private string operatorClicked;
        private double result = 0;

        public MainPage()
        {
            InitializeComponent();
        }

        private void OnNumberClicked(object sender, EventArgs e)
        {
            if (sender is Button button)
            {
                currentInput += button.Text;
                DisplayLabel.Text = currentInput;
            }
        }

        private void OnOperatorClicked(object sender, EventArgs e)
        {
            if (sender is Button button)
            {
                if (!string.IsNullOrEmpty(currentInput))
                {
                    result = double.Parse(currentInput);
                    operatorClicked = button.Text;
                    currentInput = string.Empty;
                }
            }
        }

        private void OnEqualClicked(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(currentInput))
            {
                double secondOperand = double.Parse(currentInput);
                switch (operatorClicked)
                {
                    case "+":
                        result += secondOperand;
                        break;
                    case "-":
                        result -= secondOperand;
                        break;
                    case "x":
                        result *= secondOperand;
                        break;
                    case "/":
                        result /= secondOperand;
                        break;
                }
                DisplayLabel.Text = result.ToString();
                currentInput = string.Empty;
            }
        }

        private void OnClearClicked(object sender, EventArgs e)
        {
            currentInput = string.Empty;
            result = 0;
            DisplayLabel.Text = "0";
        }

        private void OnBackspaceClicked(object sender, EventArgs e)
        {
            if (currentInput.Length > 0)
            {
                currentInput = currentInput.Remove(currentInput.Length - 1);
                DisplayLabel.Text = string.IsNullOrEmpty(currentInput) ? "0" : currentInput;
            }
        }
    }
}

