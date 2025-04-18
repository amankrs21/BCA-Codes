<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical22.aspx.cs" Inherits="Practical22" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Email :-
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
&nbsp;<asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="Url Must Be correct" ForeColor="Red" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
        <br />
        <br />
        Url :-
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
&nbsp;<asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="TextBox2" ErrorMessage="Enter Valid Email" ForeColor="Red" ValidationExpression="http(s)?://([\w-]+\.)+[\w-]+(/[\w- ./?%&amp;=]*)?"></asp:RegularExpressionValidator>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
    
    </div>
    </form>
</body>
</html>
