//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSMessageActionSyncOperation.h>

@class MFEWSFlagChangeMessageAction;

@interface MFEWSFlagChangeSyncOperation : MFEWSMessageActionSyncOperation
{
}

- (BOOL)_batchedSetFlagsForItems:(id)arg1 inFolder:(id)arg2 messageType:(BOOL)arg3 flagChanges:(id)arg4 error:(id *)arg5;	// IMP=0x000000000008a718
- (void)main;	// IMP=0x0000000000089b7e
- (id)initWithMessageAction:(id)arg1;	// IMP=0x0000000000089a3c

// Remaining properties
@property(readonly, nonatomic) MFEWSFlagChangeMessageAction *messageAction; // @dynamic messageAction;

@end

