//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTransaction<FBSynchronizedTransaction>, NSArray;

@protocol FBSynchronizedTransactionDelegate <NSObject>
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 didCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 willCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransactionReadyToCommit:(FBTransaction<FBSynchronizedTransaction> *)arg1;
@end

