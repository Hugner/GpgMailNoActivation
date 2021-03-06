//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "ThreadSupportingMessageList.h"

@class ManagedList, NSArray, NSMutableIndexSet, NSString;

@interface ThreadedMessageList : NSObject <ThreadSupportingMessageList>
{
    NSMutableIndexSet *_openThreadIndexes;	// 8 = 0x8
    id <ThreadedMessageListDelegate> _delegate;	// 16 = 0x10
    ManagedList *_threadList;	// 24 = 0x18
    unsigned long long _totalMessageCount;	// 32 = 0x20
}

@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(readonly, nonatomic) ManagedList *threadList; // @synthesize threadList=_threadList;
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (void).cxx_destruct;	// IMP=0x000000010030c867
- (id)_indexesReversed:(id)arg1 acrossLength:(unsigned long long)arg2;	// IMP=0x000000010030c712
- (unsigned long long)_childCountForThread:(id)arg1;	// IMP=0x000000010030c6fd
- (id)_indexesAdjustedByOpenThreads:(id)arg1;	// IMP=0x000000010030c3ef
- (unsigned long long)_indexAdjustedByOpenThreads:(unsigned long long)arg1;	// IMP=0x000000010030c0df
- (unsigned long long)adjustedIndexOfMessage:(id)arg1;	// IMP=0x000000010030bf29
- (BOOL)_threadChildrenOrderedAscending;	// IMP=0x000000010030bd27
@property(readonly, copy, nonatomic) NSArray *unrolledObjects;
- (id)_deletedThreadsFromAdjustingThreads:(id)arg1 messageRemovals:(id)arg2 messageMoves:(id)arg3 animate:(BOOL)arg4;	// IMP=0x000000010030b13c
- (void)removeMessages:(id)arg1 andReplaceMessages:(id)arg2 animate:(BOOL)arg3;	// IMP=0x000000010030a7f6
- (void)_shiftOpenThreadIndexesByAddedIndexes:(id)arg1;	// IMP=0x000000010030a6a2
- (id)_mergeThreads:(id)arg1;	// IMP=0x000000010030a44e
- (unsigned long long)_mergeThread:(id)arg1;	// IMP=0x000000010030a36c
- (unsigned long long)_removeThread:(id)arg1;	// IMP=0x000000010030a2a4
- (id)_threadChangesFromAddingMessages:(id)arg1 primary:(BOOL)arg2 newThreads:(id)arg3 alteredThreads:(id)arg4;	// IMP=0x0000000100309bc9
- (void)addPrimaryMessages:(id)arg1 secondaryMessages:(id)arg2;	// IMP=0x0000000100309142
- (void)updateMessages:(id)arg1;	// IMP=0x0000000100308ef1
- (struct _NSRange)_closeThread:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100308e52
- (void)closeAllThreads;	// IMP=0x0000000100308bac
- (void)closeThreads:(id)arg1;	// IMP=0x0000000100308866
- (struct _NSRange)_openThread:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001003087bf
- (void)openAllThreads;	// IMP=0x000000010030854d
- (void)openThreads:(id)arg1;	// IMP=0x000000010030814b
- (void)invert;	// IMP=0x0000000100307f64
- (void)applyFilter;	// IMP=0x000000010030775b
- (void)resort;	// IMP=0x00000001003072f9
- (id)init;	// IMP=0x000000010030722a
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100307061

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

