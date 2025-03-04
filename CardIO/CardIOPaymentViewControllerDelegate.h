//
//  CardIOPaymentViewControllerDelegate.h
//  Version 3.8.7
//
//  Copyright (c) 2011-2014 PayPal. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CardIOPaymentViewController;
@class CardIOCreditCardInfo;

/// The receiver will be notified when the CardIOPaymentViewController flow completes, due to either success or user-cancellation.
///
/// Exactly one of these delegate methods will be called.
///
/// Each of them MUST dismiss the CardIOPaymentViewController.
@protocol CardIOPaymentViewControllerDelegate<NSObject>

@required

/// This method will be called if the user cancels the scan. You MUST dismiss paymentViewController.
/// @param paymentViewController The active CardIOPaymentViewController.
- (void)userDidCancelPaymentViewController:(CardIOPaymentViewController *)paymentViewController;

/// This method will be called when there is a successful scan (or manual entry). You MUST dismiss paymentViewController.
/// @param cardInfo The results of the scan.
/// @param paymentViewController The active CardIOPaymentViewController.
- (void)userDidProvideCreditCardInfo:(CardIOCreditCardInfo *)cardInfo inPaymentViewController:(CardIOPaymentViewController *)paymentViewController;

@end