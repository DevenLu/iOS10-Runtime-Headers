/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSMSReceivedMessage : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _ctError;
    int _fzError;
    NSString *_guid;
    unsigned int _hasAttachments;
    unsigned int _isFromEmail;
    unsigned int _isFromPhoneNumber;
    unsigned int _isGroupMessage;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ctError : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasFzError;
@property int fzError;
@property bool hasCtError;
@property int ctError;
@property bool hasIsGroupMessage;
@property unsigned int isGroupMessage;
@property bool hasIsFromPhoneNumber;
@property unsigned int isFromPhoneNumber;
@property bool hasIsFromEmail;
@property unsigned int isFromEmail;
@property bool hasHasAttachments;
@property unsigned int hasAttachments;


- (int)ctError;
- (bool)hasCtError;
- (void)setHasCtError:(bool)arg1;
- (void)setCtError:(int)arg1;
- (unsigned int)isFromEmail;
- (unsigned int)isFromPhoneNumber;
- (bool)hasIsFromEmail;
- (void)setHasIsFromEmail:(bool)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (bool)hasIsFromPhoneNumber;
- (void)setHasIsFromPhoneNumber:(bool)arg1;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (unsigned int)isGroupMessage;
- (int)fzError;
- (bool)hasHasAttachments;
- (void)setHasHasAttachments:(bool)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (bool)hasIsGroupMessage;
- (void)setHasIsGroupMessage:(bool)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (bool)hasFzError;
- (void)setHasFzError:(bool)arg1;
- (void)setFzError:(int)arg1;
- (bool)hasGuid;
- (unsigned int)hasAttachments;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end