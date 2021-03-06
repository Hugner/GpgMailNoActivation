//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCConnection.h"

@class EWSExchangeServiceBinding, MFEWSAccount;

@interface MFEWSConnection : MCConnection
{
    EWSExchangeServiceBinding *_binding;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00000000000744cc
@property(retain) EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;	// IMP=0x0000000000077f32
- (void)disconnectWithError:(id)arg1;	// IMP=0x0000000000077d48
- (id)sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077c5d
- (void)_handleServerBusyError:(id)arg1;	// IMP=0x0000000000077c10
- (id)sendMessage:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000077414
- (void)disconnect;	// IMP=0x00000000000773ba
- (void)quit;	// IMP=0x00000000000773a8
- (BOOL)isValidAllowNetworking:(BOOL)arg1;	// IMP=0x0000000000077360
- (void)_setupConnectionErrorForMonitorWithPort:(long long)arg1 usingSSL:(BOOL)arg2 serverTrust:(struct __SecTrust *)arg3;	// IMP=0x0000000000075fab
- (id)_fetchRootFolderId:(id *)arg1;	// IMP=0x00000000000758f8
- (id)_connectAndAuthenticateDiscoveringBestSettings:(BOOL)arg1;	// IMP=0x0000000000074f31
- (BOOL)connectAndAuthenticate;	// IMP=0x0000000000074b01
- (BOOL)authenticate;	// IMP=0x0000000000074aef
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;	// IMP=0x000000000007480c
@property __weak MFEWSAccount *account;
- (void)dealloc;	// IMP=0x000000000007452b

@end

