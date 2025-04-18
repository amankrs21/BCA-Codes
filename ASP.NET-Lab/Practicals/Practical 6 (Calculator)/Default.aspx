<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        
        Number 1 =
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        Number 2 =
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Addition" />
        <br />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="Subtraction" />
        <br />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="Multiplication" />
        <br />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="Division" />
        <br />
        <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="Modulos" />
        <br />
        <br />
        <asp:Label ID="Label1" runat="server" Text="Anwser"></asp:Label>
        
    </div>
    </form>
</body>
</html>
