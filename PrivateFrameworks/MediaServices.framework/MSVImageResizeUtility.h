/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSMutableDictionary;

@interface MSVImageResizeUtility : NSObject  {
    NSObject<OS_dispatch_queue> *_imageResizingAccessQueue;
    NSOperationQueue *_imageResizingOperationQueue;
    NSMutableDictionary *_imageResizingOperations;
}

@property long long maxConcurrentOperationCount;
@property(retain) NSObject<OS_dispatch_queue> * imageResizingAccessQueue;
@property(retain) NSOperationQueue * imageResizingOperationQueue;
@property(retain) NSMutableDictionary * imageResizingOperations;


- (void)cancelResizeImage:(id)arg1;
- (id)imageResizingOperations;
- (id)imageResizingAccessQueue;
- (void)setImageResizingOperations:(id)arg1;
- (id)imageResizingOperationQueue;
- (void)setImageResizingOperationQueue:(id)arg1;
- (void)setImageResizingAccessQueue:(id)arg1;
- (id)resizeImageAtSourceURL:(id)arg1 destinationSize:(struct CGSize { double x1; double x2; })arg2 destinationURL:(id)arg3 completionHandler:(id)arg4;
- (long long)maxConcurrentOperationCount;
- (id)init;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void).cxx_destruct;

@end