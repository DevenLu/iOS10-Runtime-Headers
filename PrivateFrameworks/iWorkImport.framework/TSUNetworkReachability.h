/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNetworkReachability : NSObject {
    int _enableCount;
    BOOL _localWiFi;
    BOOL _notifierActive;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property (nonatomic, readonly) BOOL connectionRequired;
@property (nonatomic) BOOL notifierActive;
@property (nonatomic, readonly) int status;

+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityForInternetConnection;
+ (id)networkReachabilityForLocalWiFi;
+ (int)networkReachabilityStatusForDocumentResources;
+ (int)networkReachabilityStatusForInternetConnection;
+ (int)networkReachabilityStatusForLocalWiFi;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)networkReachabilityWithHostName:(id)arg1;

- (BOOL)connectionRequired;
- (void)dealloc;
- (void)disableNotifier;
- (BOOL)enableNotifier;
- (id)init;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { }*)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)notifierActive;
- (void)setNotifierActive:(BOOL)arg1;
- (BOOL)startNotifier;
- (int)status;
- (void)stopNotifier;

@end