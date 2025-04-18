<?php 
extract($_POST);
if(isset($save))
{
	switch($ch)
	{
		case 'Add':
		    $res = $fn + $sn;
		    break;
		case 'Substract':
		    $res = $fn - $sn;
		    break;
		case 'Multiply':
		    $res = $fn * $sn;
		    break;
        case 'Divide':
            $res = $fn / $sn;
            break;
        case 'Modulo':
            $res = $fn % $sn;
            break;
	}
}
?>

<!DOCTYP html>
<html lang='eng'>
	<head>
		<title>Calculator- switch</title>
		
	</head>
	<body><h1>
		<form method="post">
		<table border="1" align="center">
			<tr>
				<th>Your Result</th>
				<th><input type="number" readonly="readonly" disabled="disabled" value="<?php  echo @$res;?>"/></th>
			</tr> 
			
			<tr>
				<th>Enter your First num</th>
				<th><input type="number" name="fn" value="<?php  echo @$fn;?>"/></th>
			</tr> 
			<tr>
				<th>Enter your Second num</th>
				<th><input type="number" name="sn" value="<?php  echo @$sn;?>"/></th>
			</tr>
			<tr>
				<th>Select Your Choice</th>
				<th>
				<select name="ch">
					<option>Add</option>
					<option>Substract</option>
					<option>Multiply</option>
                    <option>Divide</option>
                    <option>Modulo</option>
				</select>
				</th>
			</tr>
			<tr>
				
				<th colspan="2">
				<input type="submit" 
				name="save" value="Show Result"/>
				</th>
			</tr>
		</table>
		</form></h1>
	</body>
</html>