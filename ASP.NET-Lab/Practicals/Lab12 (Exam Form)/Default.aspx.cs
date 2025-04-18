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

    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        if (DropDownList1.SelectedIndex.Equals("REGULAR"))
        {
            CheckBox1.Checked = true;
        }
    }
    protected void DropDownList2_SelectedIndexChanged(object sender, EventArgs e)
    {
        DropDownList3.Items.Clear();
        DropDownList3.Items.Add("Select");
        DropDownList3.SelectedIndex = 0;
        if (DropDownList2.SelectedValue.Equals("FYBCA"))
        {
            DropDownList3.Items.Add("SEM1");
            DropDownList3.Items.Add("SEM2");
        }
        else if (DropDownList2.SelectedValue.Equals("SYBCA"))
        {
            DropDownList3.Items.Add("SEM3");
            DropDownList3.Items.Add("SEM4");
        }
        else if (DropDownList2.SelectedValue.Equals("TYBCA"))
        {
            DropDownList3.Items.Add("SEM5");
            DropDownList3.Items.Add("SEM6");
        }
    }
    protected void DropDownList3_SelectedIndexChanged(object sender, EventArgs e)
    {
        CheckBoxList1.Items.Clear();
        if (DropDownList3.SelectedValue.Equals("SEM1"))
        {
            CheckBoxList1.Items.Add("FOP");
            CheckBoxList1.Items.Add("FOC");
            CheckBoxList1.Items.Add("FOw");
            CheckBoxList1.Items.Add("CS");
            CheckBoxList1.Items.Add("BM");
            CheckBoxList1.Items.Add("ACCOUNTS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM2"))
        {
            CheckBoxList1.Items.Add("PYTHON");
            CheckBoxList1.Items.Add("PHP");
            CheckBoxList1.Items.Add("PROJECT");
            CheckBoxList1.Items.Add("RDBMS");
            CheckBoxList1.Items.Add("CS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM3"))
        {
            CheckBoxList1.Items.Add("DS");
            CheckBoxList1.Items.Add("JAVA");
            CheckBoxList1.Items.Add("BSE");
            CheckBoxList1.Items.Add("CS");
            CheckBoxList1.Items.Add("DCN");
            CheckBoxList1.Items.Add("STATICS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM4"))
        {
            CheckBoxList1.Items.Add("OS");
            CheckBoxList1.Items.Add("ASP.NET");
            CheckBoxList1.Items.Add("CG");
            CheckBoxList1.Items.Add("PROJECT");
            CheckBoxList1.Items.Add("EMA");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM5"))
        {
            CheckBoxList1.Items.Add("ANDROID");
            CheckBoxList1.Items.Add("PROJECT");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM6"))
        {
            CheckBoxList1.Items.Add("PROJECT");
        }
    }
    protected void CheckBox1_CheckedChanged(object sender, EventArgs e)
    {
        if (CheckBox1.Checked == true)
        {
            for (int i = 0; i < CheckBoxList1.Items.Count; i++)
            {
                CheckBoxList1.Items[i].Selected = true;
            }
        }
        else
        {
            for (int i = 0; i < CheckBoxList1.Items.Count; i++)
            {
                CheckBoxList1.Items[i].Selected = false;
            }
        }
    }
    protected void CheckBoxList1_SelectedIndexChanged(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        int c = 0, fees = 0;
        for (int i=0; i<CheckBoxList1.Items.Count; i++)
        {
            if (CheckBoxList1.Items[i].Selected == true)
            {
                ++c;
            }
        }
        if (c <= 2)
        {
            fees = 500;
        }
        else
        {
            fees = 1500;
        }
        Label1.Text = fees.ToString();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        string receipt = "<table>";
        receipt = "(table border = '1')";
        receipt = "<tr> <td width='60%' align='center'> Exam Fee Receipt </td>";
        receipt += "<tr> <td width='60%' align='center'>";
        receipt += " Student Name : " + TextBox1.Text;

        receipt += "Exam Type : " + DropDownList1.SelectedValue.ToString() + "</br> </br>";
        receipt += "YEAR : " + DropDownList2.SelectedValue.ToString() + "</br> </br>";
        receipt += "SEMESTER : " + DropDownList3.SelectedValue.ToString() + "</br> </br>";

        receipt = "table border = '1'";
        receipt = "Subjects : ";
        for (int i=0; i<CheckBoxList1.Items.Count; i++)
        {
            if (CheckBoxList1.Items[i].Selected == true)
            {
                receipt += CheckBoxList1.Items[i].Value.ToString() + "</br>";
            }
        }

        receipt += "</br> FEES : " + Label1.Text;
        receipt = "</td>";
        receipt = "</table>";

        // rec.InnerHtml = receipt;
    }
}