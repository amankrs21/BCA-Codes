
Partial Class SessionStateExample
    Inherits System.Web.UI.Page
    Protected Sub Page_Load(ByVal sender As Object, ByVal e As EventArgs)

    End Sub
    ' Set Session values during button click
    Protected Sub btnSubmit_Click(ByVal sender As Object, ByVal e As EventArgs)
        Session("FirstName") = txtfName.Text
        Session("LastName") = txtlName.Text
        Response.Redirect("VBDefault2.aspx")
    End Sub

End Class
