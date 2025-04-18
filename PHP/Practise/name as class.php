
<?php
	class msg
	{
		public $m = "Hello All, I am";
		
		public function self($name)
		{
			return $this->m.$name;
		}
	}
	$o = new msg();
    echo "<h1><br><center>";
	echo  $o->self('Aman');
?>