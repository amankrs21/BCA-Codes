<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Gridview.aspx.cs" Inherits="Default2" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" AllowPaging="True" 
            AllowSorting="True" AutoGenerateColumns="False" DataKeyNames="id" 
            DataSourceID="SqlDataSource1">
            <Columns>
                <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" 
                    ShowSelectButton="True" />
                <asp:BoundField DataField="id" HeaderText="id" InsertVisible="False" 
                    ReadOnly="True" SortExpression="id" />
                <asp:BoundField DataField="Name" HeaderText="Name" SortExpression="Name" />
                <asp:BoundField DataField="Email" HeaderText="Email" SortExpression="Email" />
                <asp:BoundField DataField="MobileNo" HeaderText="MobileNo" 
                    SortExpression="MobileNo" />
                <asp:BoundField DataField="Department" HeaderText="Department" 
                    SortExpression="Department" />
                <asp:BoundField DataField="College" HeaderText="College" 
                    SortExpression="College" />
            </Columns>
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConflictDetection="CompareAllValues" 
            ConnectionString="<%$ ConnectionStrings:Connection %>" 
            DeleteCommand="DELETE FROM [Register] WHERE [id] = @original_id AND (([Name] = @original_Name) OR ([Name] IS NULL AND @original_Name IS NULL)) AND (([Email] = @original_Email) OR ([Email] IS NULL AND @original_Email IS NULL)) AND (([MobileNo] = @original_MobileNo) OR ([MobileNo] IS NULL AND @original_MobileNo IS NULL)) AND (([Department] = @original_Department) OR ([Department] IS NULL AND @original_Department IS NULL)) AND (([College] = @original_College) OR ([College] IS NULL AND @original_College IS NULL))" 
            InsertCommand="INSERT INTO [Register] ([Name], [Email], [MobileNo], [Department], [College]) VALUES (@Name, @Email, @MobileNo, @Department, @College)" 
            OldValuesParameterFormatString="original_{0}" 
            SelectCommand="SELECT * FROM [Register]" 
            UpdateCommand="UPDATE [Register] SET [Name] = @Name, [Email] = @Email, [MobileNo] = @MobileNo, [Department] = @Department, [College] = @College WHERE [id] = @original_id AND (([Name] = @original_Name) OR ([Name] IS NULL AND @original_Name IS NULL)) AND (([Email] = @original_Email) OR ([Email] IS NULL AND @original_Email IS NULL)) AND (([MobileNo] = @original_MobileNo) OR ([MobileNo] IS NULL AND @original_MobileNo IS NULL)) AND (([Department] = @original_Department) OR ([Department] IS NULL AND @original_Department IS NULL)) AND (([College] = @original_College) OR ([College] IS NULL AND @original_College IS NULL))">
            <DeleteParameters>
                <asp:Parameter Name="original_id" Type="Int32" />
                <asp:Parameter Name="original_Name" Type="String" />
                <asp:Parameter Name="original_Email" Type="String" />
                <asp:Parameter Name="original_MobileNo" Type="Decimal" />
                <asp:Parameter Name="original_Department" Type="String" />
                <asp:Parameter Name="original_College" Type="String" />
            </DeleteParameters>
            <InsertParameters>
                <asp:Parameter Name="Name" Type="String" />
                <asp:Parameter Name="Email" Type="String" />
                <asp:Parameter Name="MobileNo" Type="Decimal" />
                <asp:Parameter Name="Department" Type="String" />
                <asp:Parameter Name="College" Type="String" />
            </InsertParameters>
            <UpdateParameters>
                <asp:Parameter Name="Name" Type="String" />
                <asp:Parameter Name="Email" Type="String" />
                <asp:Parameter Name="MobileNo" Type="Decimal" />
                <asp:Parameter Name="Department" Type="String" />
                <asp:Parameter Name="College" Type="String" />
                <asp:Parameter Name="original_id" Type="Int32" />
                <asp:Parameter Name="original_Name" Type="String" />
                <asp:Parameter Name="original_Email" Type="String" />
                <asp:Parameter Name="original_MobileNo" Type="Decimal" />
                <asp:Parameter Name="original_Department" Type="String" />
                <asp:Parameter Name="original_College" Type="String" />
            </UpdateParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
