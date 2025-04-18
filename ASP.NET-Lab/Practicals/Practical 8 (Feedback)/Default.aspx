<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Name =
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        Email =
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <br />
        Feedback =
        <asp:TextBox ID="TextBox3" runat="server" Height="76px" Width="178px"></asp:TextBox>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
    
    </div>

    <div>

    </div>
    </form>
</body>
</html>
