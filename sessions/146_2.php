<?php
	session_start();
	echo $result['test2'] = $_SESSION['test'] + $_SESSION['test1'];
?>