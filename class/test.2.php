<?php
require_once 'test.1.php';
$x = new Car;
$x->marka = 'Toyota';
$x->color = 'Белый';

echo $x->marka.' '.$x->color.'<br>';
$x->go();
$x->turn();
$x->stop();
?>