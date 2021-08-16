<?php
date_default_timezone_set("Europe/Kiev");
$d = date('H');
if ($d >= 7 && $d <= 11) {
    $day_time = "Доброго ранку";
} elseif ($d >= 12 && $d <= 17) {
    $day_time = "Добрий день";
} elseif ($d >= 18 && $d <= 24) {
    $day_time = "Добрий вечір";
} elseif ($d >= 0 && $d <= 6) {
    $day_time = "Доброї ночі";
}
?>