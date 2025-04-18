using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!Page.IsPostBack) 
        { 
            string[] str = new string[] { "Select", "Bike", "Car", "House", "Shoes"};
            for (int i=0; i<str.Length; i++)
            {
                ListBox1.Items.Add(str[i]);
            }
        }
    }
    protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
    {
        string[] str = new string[] { "Select", "Bike", "Car", "House", "Shoes"};
        string[] cost = new string[] { "0", "100000", "200000", "50000", "4500"};
        string img = ListBox1.Text;
        Image1.ImageUrl = "~/img/" + img + ".jfif";

        for (int i = 0; i < str.Length; i++)
        {
            for (int j = 0; j < cost.Length; j++)
            {
                if (str[i] == img)
                {
                    Label1.Text = cost[i];
                    break;
                } 
            }
        }
    }
}