<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <asp:ListBox ID="ListBox1" runat="server" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged" AutoPostBack="True"></asp:ListBox>
    <div>
    
        <asp:Image ID="Image1" runat="server" Height="267px" Width="417px" />
        <br />
        <br />
        COST =
        <asp:Label ID="Label1" runat="server"></asp:Label>
        <br />
        <br />

    
    </div>
    </form>
</body>
</html>
