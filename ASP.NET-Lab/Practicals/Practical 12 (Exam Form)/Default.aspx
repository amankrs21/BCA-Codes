<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="Practical2_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <center>
            <h1>Parul Institute of Computer Application</h1>
            <u><h2>Examination Form</h2></u>
        </center>

    </div>
        <p>
            Student Name :&nbsp;
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        </p>
        <p>
            Exam Type :&nbsp;
            <asp:DropDownList ID="DropDownList2" runat="server">
                <asp:ListItem>Regular</asp:ListItem>
                <asp:ListItem>Supplementary</asp:ListItem>
            </asp:DropDownList>
        </p>
        <p>
            Year&nbsp; :&nbsp;
            <asp:DropDownList ID="DropDownList1" runat="server" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged">
                <asp:ListItem>FYBCA</asp:ListItem>
                <asp:ListItem>SYBCA</asp:ListItem>
                <asp:ListItem>TYBCA</asp:ListItem>
            </asp:DropDownList>
        </p>
        <p>
            Sem : <asp:DropDownList ID="DropDownList3" runat="server">
            </asp:DropDownList>
        </p>
    </form>
</body>
</html>
