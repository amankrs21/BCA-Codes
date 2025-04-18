<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab21.aspx.cs" Inherits="Lab20" %>

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
    <div style="height: 466px">
    
        <br />
        <br />
        <span class="auto-style1">Username : </span>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style1"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RequiredFieldValidator" ForeColor="Red" SetFocusOnError="True">*This field is Required</asp:RequiredFieldValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Age : </span>
        <asp:TextBox ID="TextBox2" runat="server" AutoPostBack="True" CssClass="auto-style1" TextMode="Number"></asp:TextBox>
        <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox2" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RangeValidator" ForeColor="Red" MaximumValue="45" MinimumValue="18" SetFocusOnError="True" Type="Integer">*Age Should be between 18-45</asp:RangeValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Date of Birth : </span>
        <asp:TextBox ID="TextBox3" runat="server" AutoPostBack="True" CssClass="auto-style1" TextMode="Date"></asp:TextBox>
        <asp:RangeValidator ID="RangeValidator2" runat="server" ControlToValidate="TextBox3" CssClass="auto-style1" Display="Dynamic" ErrorMessage="RangeValidator" ForeColor="Red" MaximumValue="01-01-2003" MinimumValue="01-01-1957" SetFocusOnError="True" Type="Date">*DOB should be blw 18-45</asp:RangeValidator>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:Button ID="Button1" runat="server" BackColor="#99CCFF" CssClass="auto-style1" OnClick="Button1_Click" Text="Submit" />
        <br />
        <br />
    
    </div>
    <div style="height: 182px">

        <asp:Label ID="Label1" runat="server" style="font-size: x-large"></asp:Label>

    </div>
    </form>
    </body>
</html>
