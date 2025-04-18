<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        Enter DoB =&nbsp;
        <asp:TextBox ID="TextBox1" runat="server" TextMode="Date">DD/MM/YYYY</asp:TextBox>
        <asp:RangeValidator id="rngDate" ControlToValidate="TextBox1" 
        type="Date" minimumvalue="01/01/1955"
        maximumvalue="01/01/2003" 
        ErrorMessage="The Date range should be between 1/1/1955 and 01/01/2003"
        display="Dynamic" runat="server" ForeColor="Red"></asp:RangeValidator>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
    </form>
</body>
</html>
