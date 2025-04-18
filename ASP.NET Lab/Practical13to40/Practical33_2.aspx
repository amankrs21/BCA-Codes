<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical33_2.aspx.cs" Inherits="Practical33_2" %>
<%@ OutputCache Duration="10" VaryByParam="id" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    <a href="Practical33_1.aspx?id=1">Click Here id=1</a>
        <a href="Practical33_2.aspx?id=2">Click Here id=2</a>
    </div>
    </form>
</body>
</html>
