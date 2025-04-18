<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Username =&nbsp;
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="*Invalid Entry" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        Fav Color =&nbsp;
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" ErrorMessage="*Invalid Entry" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        Year =&nbsp;
        <asp:DropDownList ID="DropDownList1" runat="server">
            <asp:ListItem>Select </asp:ListItem>
            <asp:ListItem>FY</asp:ListItem>
            <asp:ListItem>SY</asp:ListItem>
            <asp:ListItem>TY</asp:ListItem>
        </asp:DropDownList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="DropDownList1" ErrorMessage="*Invalid Entry" ForeColor="Red" InitialValue="Select"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
    
    </div>
    </form>
</body>
</html>
