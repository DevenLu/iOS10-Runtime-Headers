/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <UINavigationControllerDelegate>, SKUIClientContext, NSOperationQueue, SKUIPassbookLoader, <SKUIURLResolverDelegate>;

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIURLResolverDelegate> *_delegate;
    <UINavigationControllerDelegate> *_navigationControllerDelegate;
    NSOperationQueue *_operationQueue;
    SKUIPassbookLoader *_passbookLoader;
}

@property <SKUIURLResolverDelegate> * delegate;
@property <UINavigationControllerDelegate> * navigationControllerDelegate;
@property(retain) NSOperationQueue * operationQueue;

+ (id)tabIdentifierForURL:(id)arg1;

- (id)navigationControllerDelegate;
- (void)setNavigationControllerDelegate:(id)arg1;
- (void)resolveURL:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (id)_newHTMLViewControllerWithSection:(id)arg1;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;
- (void)_showPlaceholderViewController;
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;
- (void)_selectTabWithIdentifier:(id)arg1;
- (void)_showSearchWithURL:(id)arg1;
- (void)_showRedeemViewControllerWithURL:(id)arg1;
- (void)_performLookupWithURL:(id)arg1;
- (void)_showGiftViewControllerWithURL:(id)arg1;
- (void)_showDonationViewControllerWithURL:(id)arg1;
- (void)_addPassbookPassWithURL:(id)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_showBagURLWithURL:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_sendDidFinishWithResult:(bool)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end