/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeConnectionResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    } _has;
    NSString *_peerId;
    unsigned int _result;
    NSString *_resultString;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property(readonly) BOOL hasPeerId;
@property BOOL hasResult;
@property(readonly) BOOL hasResultString;
@property(readonly) BOOL hasSessionId;
@property BOOL hasTimestamp;
@property(retain) NSString * peerId;
@property unsigned int result;
@property(retain) NSString * resultString;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPeerId;
- (BOOL)hasResult;
- (BOOL)hasResultString;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)result;
- (id)resultString;
- (id)sessionId;
- (void)setHasResult:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setResultString:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
