using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab12 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        if (DropDownList1.SelectedValue.Equals("REGULAR"))
        {
            CheckBox1.Checked = true;
        }
        else
        {
            CheckBox1.Checked = false;
        }
    }
    protected void DropDownList2_SelectedIndexChanged(object sender, EventArgs e)
    {
        DropDownList3.Items.Clear();
        DropDownList3.Items.Add("SELECT");

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
            CheckBoxList1.Items.Add("FOW");
            CheckBoxList1.Items.Add("BM");
            CheckBoxList1.Items.Add("FA");
            CheckBoxList1.Items.Add("CS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM2"))
        {
            CheckBoxList1.Items.Add("PROJECT");
            CheckBoxList1.Items.Add("PYTHON");
            CheckBoxList1.Items.Add("RDBMS");
            CheckBoxList1.Items.Add("PHP");
            CheckBoxList1.Items.Add("BIS");
            CheckBoxList1.Items.Add("CS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM3"))
        {
            CheckBoxList1.Items.Add("CS");
            CheckBoxList1.Items.Add("DS");
            CheckBoxList1.Items.Add("BSE");
            CheckBoxList1.Items.Add("DCN");
            CheckBoxList1.Items.Add("JAVA");
            CheckBoxList1.Items.Add("STASTICS");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM4"))
        {
            CheckBoxList1.Items.Add("OS");
            CheckBoxList1.Items.Add("CG");
            CheckBoxList1.Items.Add("WAD");
            CheckBoxList1.Items.Add("EMA");
            CheckBoxList1.Items.Add("PROJECT");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM5"))
        {
            CheckBoxList1.Items.Add("ANDRIOD");
            CheckBoxList1.Items.Add("PROJECT");
        }
        else if (DropDownList3.SelectedValue.Equals("SEM6"))
        {
            CheckBoxList1.Items.Add("PROJECT");
        }

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
    protected void Button1_Click(object sender, EventArgs e)
    {
        string fee;
        if (DropDownList1.SelectedValue.Equals("REGULAR"))
        {
            fee = "Rs 1000";
            Label1.Text = fee;
        }
        else if (DropDownList1.SelectedValue.Equals("SUPLEMENTRY"))
        {
            fee = "Rs 1500";
            Label1.Text = fee;
        }
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        string receipt = "<table border='1'>";
        receipt += "<tr><td width='60%' align='center'>Exam Fee Receipt</td>";
        receipt += "<tr><td width='60%' align='center'>";
        receipt += "Exam Type : " + DropDownList1.SelectedValue.ToString() + "<br><br>";
        receipt += "Name : " + TextBox1.Text + "<br><br>";
        receipt += " Year : " + DropDownList2.SelectedValue.ToString() + "<br><br> Sem :" + DropDownList3.SelectedValue.ToString() + "<br><br>";
        receipt += "Subjects : ";
        for (int i = 0; i < CheckBoxList1.Items.Count; i++)
        {
            if (CheckBoxList1.Items[i].Selected == true)
            {
                receipt += CheckBoxList1.Items[i].Value.ToString()+"<br>";
            }
        }
        receipt += "<br><br>Fees : " + TextBox1.Text;
        receipt+="</td>";
        receipt += "</table>";
        rec.InnerHtml = receipt;
    }
}