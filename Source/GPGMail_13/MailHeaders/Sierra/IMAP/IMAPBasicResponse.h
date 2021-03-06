//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSData, NSString;

@interface IMAPBasicResponse : IMAPResponse
{
    NSData *_userData;	// 8 = 0x8
    long long _responseCode;	// 16 = 0x10
    id _responseInfo;	// 24 = 0x18
}

@property(retain, nonatomic) id responseInfo; // @synthesize responseInfo=_responseInfo;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void).cxx_destruct;	// IMP=0x000000000000519b
@property(readonly, nonatomic) BOOL descriptionIncludesUserString;
- (id)description;	// IMP=0x0000000000004d60
- (id)debugDescription;	// IMP=0x0000000000004cad
@property(readonly, copy, nonatomic) NSString *userString;
@property(copy, nonatomic) NSData *userData;
- (const char *)_responseName;	// IMP=0x0000000000004a54

@end

