//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCMessageSortingInterface.h"

@class MFMailbox, NSArray, NSString;

@interface MFMessageSortingValue : NSObject <MCMessageSortingInterface>
{
}

+ (void)removeEverythingExceptMessages:(id)arg1 fromSortData:(id)arg2;	// IMP=0x00000000001e1609
+ (void)addMessages:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;	// IMP=0x00000000001e114a
+ (void)addMessage:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;	// IMP=0x00000000001e0e15
+ (void)removeMessage:(id)arg1 fromSortData:(id)arg2;	// IMP=0x00000000001e0d7a
+ (id)_newSortOrderDictionary;	// IMP=0x00000000001e0c1e
+ (id)mutableCopyOfSortData:(id)arg1;	// IMP=0x00000000001e0b2b
+ (id)_automaticSecondarySortForPrimarySort:(id)arg1;	// IMP=0x00000000001e09ea
+ (id)copySortDataForMessages:(id)arg1 sortOrders:(id)arg2 includeDataForAutomaticSecondarySort:(BOOL)arg3 withDelegate:(id)arg4;	// IMP=0x00000000001e045b
+ (void)addSortData:(id)arg1 forMessages:(id)arg2 sortOrder:(id)arg3 withDelegate:(id)arg4;	// IMP=0x00000000001deaa7
+ (id)equivalentSortsForSort:(id)arg1;	// IMP=0x00000000001de9ea
@property(readonly, nonatomic) long long libraryID;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly) double dateSentAsTimeIntervalSince1970;
@property(readonly) double dateReceivedAsTimeIntervalSince1970;
@property(readonly, copy) NSArray *to;
@property(readonly) unsigned long long subjectPrefixLength;
@property(readonly, copy) NSString *subject;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) unsigned long long messageSize;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) long long messageFlags;
@property(readonly) double dateLastViewedAsTimeIntervalSince1970;
@property(readonly, nonatomic) int colorForSort;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
