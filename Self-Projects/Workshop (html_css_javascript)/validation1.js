function allnumericplusminus(imputtxt)
{
	var numbers = /^[-+]?[0-9]+$/;
	if(inputtxt.value.match(numbers))
	{
		alert('Correct...Try another');
		documnet.form1.text1.focus();
		return true;
	}
	else
	{
		alert('Please input correct format');
		documnet.form1.text1.focus();
		return false;
	}
}