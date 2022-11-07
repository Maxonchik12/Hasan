<?php
require_once 'user.2.php';
require_once 'user.3.php';
require_once 'user.4.php';
$i04 = new Group('И-04');
$x1 = new Student('Гор','Аветисян',17,4.0);
$x2 = new Student('Анна','Андрианова',18,5.0);
$i04->addStudent($x1);
$i04->addStudent($x2);
$i04->display();
?>