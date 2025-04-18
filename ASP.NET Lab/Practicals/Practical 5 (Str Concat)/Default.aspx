<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        
        String 1 =
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        String 2 =
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Concate" />
        <br />
        <br />
        <asp:Label ID="Label1" runat="server"></asp:Label>
        
    </div>
    </form>
</body>
</html>
