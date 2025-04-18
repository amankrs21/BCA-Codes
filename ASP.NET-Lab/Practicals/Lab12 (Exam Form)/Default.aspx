<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <center>
    <form id="form1" runat="server">
        <br />

        <h1> PARUL UNIVERSITY </h1>

        <h2> Examination Form </h2>
        <br />

        Student Name :
        <asp:TextBox ID="TextBox1" runat="server" Height="19px" Width="217px"></asp:TextBox>
        <br />
        <br />

        Exam Type :
        <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged">
            <asp:ListItem>Select</asp:ListItem>
            <asp:ListItem>Regular</asp:ListItem>
            <asp:ListItem>Supplementary</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />

        Year :
        <asp:DropDownList ID="DropDownList2" runat="server" AutoPostBack="True" OnSelectedIndexChanged="DropDownList2_SelectedIndexChanged">
            <asp:ListItem>Select</asp:ListItem>
            <asp:ListItem>FYBCA</asp:ListItem>
            <asp:ListItem>SYBCA</asp:ListItem>
            <asp:ListItem>TYBCA</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />

        Semester :
        <asp:DropDownList ID="DropDownList3" runat="server" AutoPostBack="True" OnSelectedIndexChanged="DropDownList3_SelectedIndexChanged">
        </asp:DropDownList>
        <br />
        <br />

        Subject :
        <asp:CheckBox ID="CheckBox1" runat="server" AutoPostBack="True" OnCheckedChanged="CheckBox1_CheckedChanged" Text="Select All"/>
        <asp:CheckBoxList ID="CheckBoxList1" runat="server" AutoPostBack="True" OnSelectedIndexChanged="CheckBoxList1_SelectedIndexChanged">
            <asp:ListItem> </asp:ListItem>
        </asp:CheckBoxList>
        <br />
        <asp:Button ID="Button1" runat="server" Text="CALCULATE FEES" OnClick="Button1_Click" />
        <br />
        <br />

        FEE :
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button2" runat="server" Text="SUBMIT" OnClick="Button2_Click" />
    </form>
    </center>
</body>
</html>
