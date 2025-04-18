<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical21.aspx.cs" Inherits="Practical21" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Start Date :-
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
&nbsp;<asp:CompareValidator ID="CompareValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="Date Must Be In Correct Format " ForeColor="Red" Operator="DataTypeCheck" Type="Date"></asp:CompareValidator>
        <asp:CompareValidator ID="CompareValidator2" runat="server" ControlToValidate="TextBox1" ErrorMessage="Date Must Be Greater Than Today" ForeColor="Red" Operator="GreaterThan" Type="Date"></asp:CompareValidator>
        <br />
        <br />
        End Date :-
        <asp:TextBox ID="TextBox2" runat="server" TextMode="Date"></asp:TextBox>
&nbsp;<asp:CompareValidator ID="CompareValidator3" runat="server" ControlToCompare="TextBox1" ControlToValidate="TextBox2" ErrorMessage="Date Must Be Greater Than Start Date" ForeColor="Red" Operator="GreaterThan" Type="Date"></asp:CompareValidator>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
    
    </div>
    </form>
</body>
</html>
