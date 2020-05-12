# Payeezy JS (Version 2) Payment Module For Zen Cart

## About

The Payeezy JS payment service is a PCI Compliant payment solution which provides credit card fields on your store to accept credit card payments. All processing happens using background javascript and ajax processing so that no card data can be saved on your server.

The payment gateway is powered by First Data, and is available to all First Data and Global Gateway E-Commerce merchants.

## Compatibility

This module was written for Zen Cart v1.5.7; however should be easily adapted to other versions. No Zen Cart core files need to be edited, only adjustments to your template.

This module requires PHP > 7 and has not been tested on versions prior to 1.5.5f.

### External Accounts

Developer portal: https://developer.payeezy.com/user

Merchant Demo: https://demo.globalgatewaye4.firstdata.com/login

This module requires configuration settings from your Payeezy Developer and Merchant account logins:

* `API Key`:         From your Payeezy account 
* `API Secret`:      From your Payeezy account
* `Payment.JS Secret`From your Payeezy account
* `JS Security Key`: From your Payeezy account
* `Merchant Token`:  From your Payeezy account
* `TA Token`:        From your Merchant account


## Installation


### PHP Files
Upload the packaged folder and files into the corresponding locations in your own store's filesystem:

`auth.php`

`webhook.php`

`/includes/modules/payment/payeezyjsv2/`

`/includes/modules/payment/payeezyjsv2.php`

`/includes/languages/english/modules/payment/payeezyjsv2.php`


## 1. Developer Portal Registration

Create an account on the [developer portal](https://developer.payeezy.com/user). Portal registration requires a valid e-mail address. The email address cannot be changed after registration. An email will be sent with further instructions and to verify and activate your account. You may also need to email payeezyboarding@firstdata.com with the Merchant ID (or storeID), DBA name, and developer account email address. 

More details can be found on the [Payeezy FAQs](https://developer.payeezy.com/faq-page).


## 2. Get Certified

Payeezy developer accounts need to be certified before being able to perform transactions.

To get certified:

* Log into the developer portal

* Navigate to CERTS in the main menu

* Click ADD and enter the necessary profile information

* Click on “Certify”

* Save.

You will be certified after submitting the form. This is basically immediate.


## 3. Create an API

A registered API gives you credentials to allow processing transactions.

* Login to your Payeezy developer account and navigate to the "APIs" page.   

* Click the “+ ADD A NEW API” button.

* On the next screen add a name for your application. Call it what you want it to appear as in the Merchant reports.  

* Choose "Sandbox” or "Live".

* Click on “Create your API”. You will be taken back to the APIs page.

* Click on the API you just created. You will see the `API key`, `API secret`, `Payment.JS Secret`, and `Merchant Auth Token`. Use these values later in the module configuration.


## 4. Request PaymentJS Integration / Add Merchant(s)

Once certification is complete, you will need to add a Merchant. To add a merchant you will need to request integration using this form:
https://docs.firstdata.com/req/paymentjs
This step can take 2 business days. Also it is recommended to call or email Payeezy Support to ensure your request was received. Once you receive notice your merchant account has been connected:

* Log into the developer portal

* Navigate to MERCHANTS in the main menu

* Click on "Sandbox" or "Live" to review your settings.
 
If you are unable to add your merchant account, email payeezyboarding@firstdata.com with the Merchant ID (or storeID), DBA name, and developer account email address. The integration team at First Data will have to add the merchant account to your developer account.

After your merchant account is added, you will also have access to login to it. Login there to access the `Transarmor Token`. This value is required for processing payments.

Demo merchant login: https://demo.globalgatewaye4.firstdata.com/login

Live Merchant login: https://globalgatewaye4.firstdata.com/login

If the Transarmor token is blank, it means that your account has not been enabled for Transarmor yet. To enable Transarmor for your account, you will need to talk to your account representative or call 1-855-799-0790.


## 5. Go Live In Zen Cart

After all of the above is complete, login to the Zen Cart admin to enable and configure the module.

Add the following line in your template's footer for pages that will have the credit card form:

`require DIR_WS_MODULES . 'payment/payeezyjsv2/footer.inc';`

This will include the javascript necessary for the Firstdata credit card form.

# Payeezy Support

For Payeezy Support related queries, send an email to the support team at support.payeezy@firstdata.com or call 1.855.799.0790 for personal support.

# Comments

Calling the technical support phone number is much more fruitful than emailing support.
