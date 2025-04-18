<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab23.aspx.cs" Inherits="Lab22" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            font-size: large;
        }
    </style>
</head>
<body bgcolor="cyan">
    <form id="form1" runat="server">
        <br />
        <br />
        <span class="auto-style1">Email : </span>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style1" TextMode="Email"></asp:TextBox>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RegularExpressionValidator" ForeColor="Red" SetFocusOnError="True" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*">*should be in the form abc@email.com</asp:RegularExpressionValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Website : </span>
        <asp:TextBox ID="TextBox2" runat="server" CssClass="auto-style1" TextMode="Url"></asp:TextBox>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="TextBox2" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RegularExpressionValidator" ForeColor="Red" SetFocusOnError="True" ValidationExpression="http(s)?://([\w-]+\.)+[\w-]+(/[\w- ./?%&amp;=]*)?">*please enter valid URL</asp:RegularExpressionValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:Button ID="Button1" runat="server" BackColor="#99FF33" CssClass="auto-style1" OnClick="Button1_Click" Text="Submit" />
        <br />
        <br />
        <br />
        <asp:Label ID="Label1" runat="server" style="font-size: xx-large"></asp:Label>
    </form>
</body>
</html>
