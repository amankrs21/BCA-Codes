﻿<%@ Page Language="C#" AutoEventWireup="true" CodeFile="DataReader.aspx.cs" Inherits="Default3" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
		<asp:Button ID="Button1" runat="server" Text="Button" onclick="Button1_Click" />
		<br />
		<asp:ListBox ID="ListBox1" runat="server" Width="281px"></asp:ListBox>
		<br />
		<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
	</div>
    </form>
</body>
</html>
