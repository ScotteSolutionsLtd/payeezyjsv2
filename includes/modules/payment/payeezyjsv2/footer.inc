<?php
/**
 * @file footer.inc
 * Include this file on the template/page where the credit card capture form will go.
 *
 * @copyright Copyright 2003-2019 Zen Cart Development Team
 * @copyright Portions Copyright 2003 osCommerce
 * @package paymentMethod
 * @license http://www.zen-cart.com/license/2_0.txt GNU Public License V2.0
 * @version $Id: Scott Morrison June 9, 2020 v157-payeezyjs-2.1-dev $
 *
 */
?>
<script src="https://docs.paymentjs.firstdata.com/lib/<?php echo MODULE_PAYMENT_PAYEEZYJSV2_STATUS === 'Production' ? 'prod' : 'uat'; ?>/client-2.0.0.js"></script>
<?php
if (MODULE_PAYMENT_PAYEEZYJSV2_FORM_STEP === 'Payment (checkout_payment)') {
  $cct = 'checkout_payment';
  $cs = 'checkout_confirmation';
}
else {
  $cct = 'checkout_confirmation';
  $cs = 'checkout_process';
}
$js = file_get_contents(DIR_WS_MODULES . 'payment/payeezyjsv2/client.js');
$js = str_replace('CARD_CAPTURE_TEMPLATE', $cct, $js);
$js = str_replace('CHECKOUT_STEP', $cs, $js);
echo '<script>' . str_replace('CHECKOUT_STEP', $cs, $js) . '</script>';
