/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString;

@interface MFMailSignatureController : NSObject {
    NSString *_currentSignatureString;
    BOOL _firstSignaturePassComplete;
    BOOL _hasSignature;
}

+ (id)_arrayNOT:(id)arg1 notArray:(id)arg2;
+ (id)_htmlConvertToWhitespace:(id)arg1;
+ (id)_lineWiseRegexStringForSignature:(id)arg1 usingContentWords:(id)arg2;
+ (id)_regexEscape:(id)arg1;
+ (id)_regexStringFromArray:(id)arg1;
+ (id)_wordsAndNewlinesArrayFromContents:(id)arg1;

- (id)_createSignatureElement:(id)arg1 prepend:(BOOL)arg2 node:(id)arg3;
- (id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(BOOL)arg3 node:(id)arg4 usingMarkup:(BOOL)arg5;
- (id)_domDocumentForComposeBodyField:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_fuzzySearchForSignature:(id)arg1 inContents:(id)arg2;
- (BOOL)_isDraftRestore:(id)arg1;
- (BOOL)_isEmptyHTMLElement:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_locateLeadingMarkupForContents:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_locateSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 inContents:(id)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_locateTrailingMarkupForContents:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_preciseSearchForDefaultSignatureInContents:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_preciseSearchForSignature:(id)arg1 inContents:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_preciseSearchForSignatureForSender:(id)arg1 inContents:(id)arg2;
- (id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3 includeMarkup:(BOOL)arg4;
- (id)_regexForSignature:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_replaceSignatureForSender:(id)arg1 oldSignature:(id)arg2 withSignature:(id)arg3 document:(id)arg4 backwardsFromNode:(id)arg5 maxParagraphs:(unsigned int)arg6;
- (id)_signatureMarkupStringForSender:(id)arg1;
- (id)_signatureStringForSender:(id)arg1;
- (id)_stripSignatureMarkup:(id)arg1;
- (id)_updateSignatureElement:(id)arg1 withSignature:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3;
- (void)clearSignatureState;
- (void)dealloc;
- (id)init;
- (BOOL)isDefaultSignatureForSender:(id)arg1;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;

@end
