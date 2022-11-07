<?php
function func ($name,$surname) {
    echo 'Привет'.$name,' '.$surname;
}
function summa ($a,$b) {
    return $a + $b;
}
function summ_arr($arr) {
    $sum = 0;
    foreach ($arr as $a) {
        $sum += $a;
    }
    return sum;
}
?>