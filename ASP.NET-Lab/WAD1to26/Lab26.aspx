<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab26.aspx.cs" Inherits="Lab24" %>

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
    
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Username : </span>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style1"></asp:TextBox>
&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RequiredFieldValidator" ForeColor="Red" SetFocusOnError="True">*This field is Required</asp:RequiredFieldValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Password : </span>
        <asp:TextBox ID="TextBox2" runat="server" CssClass="auto-style1" TextMode="Password"></asp:TextBox>
&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RequiredFieldValidator" ForeColor="Red" SetFocusOnError="True">*This field is Required</asp:RequiredFieldValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Confirm Password : </span>
        <asp:TextBox ID="TextBox3" runat="server" CssClass="auto-style1" TextMode="Password"></asp:TextBox>
&nbsp;<asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="TextBox2" ControlToValidate="TextBox3" CssClass="auto-style1" Display="Dynamic" ErrorMessage="CompareValidator" ForeColor="Red" SetFocusOnError="True">Password doesn&#39;t match</asp:CompareValidator>
        <br />
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:Button ID="Button1" runat="server" BackColor="#66FF33" CssClass="auto-style1" Text="Login" Width="107px" />
        <br />
        <br />
    
    </div>
    </form>
</body>
</html>
