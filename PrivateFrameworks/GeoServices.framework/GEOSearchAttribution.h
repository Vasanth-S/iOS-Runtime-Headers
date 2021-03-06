/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain) NSMutableArray * attributionURLs;
@property(retain) NSString * sourceIdentifier;
@property unsigned int sourceVersion;

- (void)addAttributionURLs:(id)arg1;
- (id)attributionURLs;
- (id)attributionURLsAtIndex:(unsigned int)arg1;
- (unsigned int)attributionURLsCount;
- (void)clearAttributionURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)sourceIdentifier;
- (unsigned int)sourceVersion;
- (void)writeTo:(id)arg1;

@end
