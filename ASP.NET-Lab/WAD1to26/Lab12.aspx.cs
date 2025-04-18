using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab11 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string[] str = new string[] { "Select", "Mobile", "Laptop", "Bike", "Car", "Headphone", "Shoes", "Bag" };
        for (int i = 0; i < str.Length; i++)
        {
            ListBox1.Items.Add(str[i]);
        }
    }
    protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
    {
        string[] str = new string[] { "Select", "Mobile", "Laptop", "Bike", "Car", "Headphone", "Shoes", "Bag" };
        string[] cost = new string[] { "0", "45000", "120000", "750000", "1600000", "6000", "2500", "1200" };
        string img = ListBox1.Text;
        Image1.ImageUrl = "~/Files/" + img + ".jpeg";

        for (int i = 0; i < cost.Length; i++)
        {
            if (str[i] == img)
            {
                Label1.Text = cost[i];
            }
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        int num = Convert.ToInt32(Label3.Text);
        if (num > 0)
        {
            num = num - 1;
        }
        Label3.Text = num.ToString();

        int total = num * Convert.ToInt32(Label1.Text);

        Label2.Text = "Rs " + total.ToString();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        int num = Convert.ToInt32(Label3.Text);
        num = num + 1;
        Label3.Text = num.ToString();

        int total = num * Convert.ToInt32(Label1.Text);

        Label2.Text = "Rs " + total.ToString();
    }
}