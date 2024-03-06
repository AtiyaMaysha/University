<?php
$name = $_REQUEST['name'];
$visitor_email = $_REQUEST['email'];
$subject = $_REQUEST['subject'];
$message = $_REQUEST['message'];

$email_from = 'arafthome@gmail.com';

$email_subject = 'New form Submission';

$email_body = "User Name: $name.\n".
              "User Email: $visitor_email.\n".
              "Subject: $subject.\n".
              "User Message: $message.\n".

$to = 'atiqcse2018@gmail.com';

$headers = "From: $email_from \r\n";

//$headers .= "Reply-to: $visitor_email \r\n";

if(mail($to, $email_subject, $email_body, $headers)){
    echo "succes";
}
else echo "Failed";

//header("Location: contact.html");

?>