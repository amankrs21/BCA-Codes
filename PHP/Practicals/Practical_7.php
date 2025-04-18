<!-- Write a PHP Script that will assign two integer values that will perform arithmetic operations 
and display it in tabular format. -->

<html>
    <body>
        <?php
        $num1 = 10;
        $num2 = 20;
        ?>
        <table border="5" cellspacing="3" cellpadding="2", align="center" style="border-color: red;">
            <tr>
                <th>Variable 1</th>
                <th>Variable 2</th>
                <th>Operation</th>
                <th>Output</th>
            </tr>
            <tr>
                <td><?php echo "$num1"?></td>
                <td><?php echo "$num2"?></td>
                <td>+</td>
                <td><?php echo $num1+$num2?></td>
            </tr>
            <tr>
                <td><?php echo "$num1"?></td>
                <td><?php echo "$num2"?></td>
                <td>-</td>
                <td><?php echo $num1-$num2?></td>
            </tr>
            <tr>
                <td><?php echo "$num1"?></td>
                <td><?php echo "$num2"?></td>
                <td>*</td>
                <td><?php echo $num1*$num2?></td>
            </tr>
            <tr>
                <td><?php echo "$num1"?></td>
                <td><?php echo "$num2"?></td>
                <td>/</td>
                <td><?php echo $num1/$num2?></td>
            </tr>
    </body>
</html>