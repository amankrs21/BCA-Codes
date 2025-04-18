<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab24.aspx.cs" Inherits="Lab23" %>

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
    <div>
    
        <br />
        <br />
        <span class="auto-style1">Enter Usename :
        </span>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style1"></asp:TextBox>
&nbsp;<asp:CustomValidator ID="CustomValidator1" runat="server" ControlToValidate="TextBox1" Display="Dynamic" ErrorMessage="CustomValidator" ForeColor="Red" SetFocusOnError="True" Width="331px" CssClass="auto-style1" OnServerValidate="CustomValidator1_ServerValidate">*Maximum 10 characters allowed</asp:CustomValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Password :
        </span>
        <asp:TextBox ID="TextBox2" runat="server" TextMode="Password" CssClass="auto-style1"></asp:TextBox>
&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox2" Display="Dynamic" ErrorMessage="RequiredFieldValidator" ForeColor="Red" SetFocusOnError="True" CssClass="auto-style1">*This filed is Required</asp:RequiredFieldValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:Button ID="Button1" runat="server" BackColor="Lime" OnClick="Button1_Click" Text="Submit" CssClass="auto-style1" />
        <br />
        <br />
        <br />
        <br />
    
    </div>
    </form>
</body>
</html>
