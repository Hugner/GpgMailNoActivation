//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSObject<MCNetworkTracker>;

@interface MCDiscretionaryWorkScheduler : NSObject
{
    id _schedulerLock;	// 8 = 0x8
    unsigned long long _conditions;	// 16 = 0x10
    unsigned long long _unsatisfiedConditions;	// 24 = 0x18
    BOOL _overrideConditions;	// 32 = 0x20
    NSObject<MCNetworkTracker> *_networkTracker;	// 40 = 0x28
    BOOL _hasDeferrableWork;	// 48 = 0x30
    BOOL _suspended;	// 49 = 0x31
}

+ (id)keyPathsForValuesAffectingDeferDiscretionaryWork;	// IMP=0x000000000002581b
@property BOOL suspended; // @synthesize suspended=_suspended;
@property BOOL hasDeferrableWork; // @synthesize hasDeferrableWork=_hasDeferrableWork;
- (void).cxx_destruct;	// IMP=0x0000000000025af6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000025894
@property(readonly) BOOL deferDiscretionaryWork;
@property BOOL overrideConditions; // @synthesize overrideConditions=_overrideConditions;
- (void)_conditions:(unsigned long long)arg1 becameSatified:(BOOL)arg2;	// IMP=0x0000000000025717
@property(readonly) unsigned long long unsatisfiedConditions;
- (void)_stopTrackingConditions:(unsigned long long)arg1;	// IMP=0x0000000000025606
- (void)_startTrackingConditions:(unsigned long long)arg1;	// IMP=0x000000000002553e
@property unsigned long long conditions;
@property(nonatomic) __weak NSObject<MCNetworkTracker> *networkTracker;
- (void)dealloc;	// IMP=0x00000000000252b6
- (id)init;	// IMP=0x0000000000025253

@end

