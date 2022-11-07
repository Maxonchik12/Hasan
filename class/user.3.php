<?php
require_once 'user.1.php';
class Student extends User {
    public $rate;
    public function __construct($n,$s,$a,$r)
    {
        $this->setInfo($n,$s,$a);
        $this->rate = $r;
    }
    public function showRate() {
        parent::show();
        echo 'Рейтинг: '.$this->rate.'<br>';
    }
}
?>