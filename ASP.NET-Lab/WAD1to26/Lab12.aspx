<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab12.aspx.cs" Inherits="Lab11" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan">
    <form id="form1" runat="server">
    <div>
    
        <asp:ListBox ID="ListBox1" runat="server" Height="153px" Width="135px" AutoPostBack="True" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged"></asp:ListBox>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong> Cost per Piece :
        <asp:Label ID="Label1" runat="server" ForeColor="#FF3300"></asp:Label>
        </strong>
        <br />
        <br />
        <br />
        <asp:Image ID="Image1" runat="server" Height="277px" Width="359px" />
        <br />
        <br />
        <br />
        <strong>Enter Total Quantity to Buy :&nbsp;
        <asp:Button ID="Button1" runat="server" BackColor="#99CCFF" OnClick="Button1_Click" Text="-" Width="31px" />
&nbsp;&nbsp;
        </strong>
        <asp:Label ID="Label3" runat="server" style="font-weight: 700; font-size: x-large">0</asp:Label>
&nbsp;&nbsp;
        <asp:Button ID="Button2" runat="server" BackColor="#99CCFF" OnClick="Button2_Click" Text="+" Width="38px" />
        <br />
        <br />
        <br /><h2>
        Total Amount You have to Pay :
        <asp:Label ID="Label2" runat="server" ForeColor="#0000CC"></asp:Label></h2>
    
    </div>
    </form>
</body>
</html>
