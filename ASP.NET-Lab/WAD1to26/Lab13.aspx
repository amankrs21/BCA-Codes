<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab13.aspx.cs" Inherits="Lab12" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style3 {
            height: 46px;
            width: 124px;
        }
        .auto-style4 {
            width: 124px;
            height: 74px;
        }
        .auto-style5 {
            height: 74px;
            width: 307px;
        }
        .auto-style7 {
            height: 39px;
        }
        .auto-style8 {
            height: 39px;
            width: 307px;
        }
        .auto-style9 {
            width: 124px;
            height: 47px;
        }
        .auto-style10 {
            width: 307px;
            height: 47px;
        }
        .auto-style11 {
            height: 46px;
            width: 307px;
        }
        .auto-style12 {
            width: 124px;
            height: 49px;
        }
        .auto-style13 {
            width: 307px;
            height: 49px;
        }
        .auto-style14 {
            width: 124px;
            height: 48px;
        }
        .auto-style15 {
            width: 307px;
            height: 48px;
        }
        .auto-style16 {
            height: 49px;
        }
    </style>
</head>
<body bgcolor="cyan" style="height: 479px"><center>
    <form id="form1" runat="server">
    <div>
        <br />
        <h1>Parul University</h1>
        <h2>Exam Form</h2>
        <br />
        <table border="0" style="width: 32%; height: 501px;">
            <tr>
                <td class="auto-style9">Full Name :</td>
                <td class="auto-style10">
                    <asp:TextBox ID="TextBox1" runat="server" Height="26px" Width="242px"></asp:TextBox>
                </td>
            </tr>
            <tr>
                <td class="auto-style3">Exam Type :</td>
                <td class="auto-style11">
                    <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" Width="143px" style="margin-left: 0px" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged" Height="28px">
                        <asp:ListItem>SELECT</asp:ListItem>
                        <asp:ListItem>REGULAR</asp:ListItem>
                        <asp:ListItem>SUPLEMENTRY</asp:ListItem>
                    </asp:DropDownList>
                </td>
            </tr>
            <tr>
                <td class="auto-style12">Year :</td>
                <td class="auto-style13">
                    <asp:DropDownList ID="DropDownList2" runat="server" AutoPostBack="True" Width="146px" OnSelectedIndexChanged="DropDownList2_SelectedIndexChanged">
                        <asp:ListItem>SELECT</asp:ListItem>
                        <asp:ListItem>FYBCA</asp:ListItem>
                        <asp:ListItem>SYBCA</asp:ListItem>
                        <asp:ListItem>TYBCA</asp:ListItem>
                    </asp:DropDownList>
                </td>
            </tr>
            <tr>
                <td class="auto-style14">Semester :</td>
                <td class="auto-style15">
                    <asp:DropDownList ID="DropDownList3" runat="server" AutoPostBack="True" Width="146px" OnSelectedIndexChanged="DropDownList3_SelectedIndexChanged">
                    </asp:DropDownList>
                </td>
            </tr>
            <tr>
                <td class="auto-style4">Subjects : </td>
                <td class="auto-style5">
                    <asp:CheckBox ID="CheckBox1" runat="server" AutoPostBack="True" ForeColor="Blue" Text="Select All" OnCheckedChanged="CheckBox1_CheckedChanged" />
                    <br />
                    <asp:CheckBoxList ID="CheckBoxList1" runat="server" AutoPostBack="True" Height="180px" Width="150px" TextAlign="Left">
                    </asp:CheckBoxList>
                </td>
            </tr>
            <tr>
                <td class="auto-style16">&nbsp;</td>
                <td class="auto-style16">
                    <asp:Button ID="Button1" runat="server" BackColor="#3399FF" BorderStyle="Dashed" Height="37px" OnClick="Button1_Click" Text="Calculate Fee" Width="155px" />
                </td>
            </tr>
            <tr>
                <td class="auto-style7">Fee : </td>
                <td class="auto-style8">
                    <asp:Label ID="Label1" runat="server"></asp:Label>
                </td>
            </tr>
        </table>
        <br />
        <br />
        <asp:Button ID="Button2" runat="server" BackColor="#99FF33" BorderColor="Black" BorderStyle="Solid" Height="43px" Text="Submit" Width="116px" OnClick="Button2_Click" />
        <br />
        <br />
        <br />

    </div>
    <div id="rec" runat="server" width="100%"></div>
    </form>
    </center>
    <br><br><br>
</body>
</html>
