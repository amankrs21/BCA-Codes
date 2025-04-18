using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab10 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string[] str = new string[] { "SELECT", "BIKE", "CAR", "MOBILE", "LAPTOP", "SMARTWATCH", "HEADPHONE", "BUDS", "PODS", "SHOES", "BAG" };
        for (int i = 0; i < str.Length; i++)
        {
            ListBox1.Items.Add(str[i]);
        }
    }
    protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
    {
        string[] str = new string[] { "SELECT", "BIKE", "CAR", "MOBILE", "LAPTOP", "SMARTWATCH", "HEADPHONE", "BUDS", "PODS", "SHOES", "BAG" };
        string[] cost = new string[] { "0", "100000", "800000", "25000", "95000", "3000", "6000", "1500", "2000", "2500", "1200" };
        string img = ListBox1.Text;
        Image1.ImageUrl = "~/Files/" + img + ".jpeg";

        for (int i = 0; i < cost.Length; i++)
        {
            if (str[i] == img)
            {
                Label1.Text = "Rs " + cost[i];
            }
        }
    }
}