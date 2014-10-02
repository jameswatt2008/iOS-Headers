//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWindowContextManagerObserver.h"

@class NSDictionary, NSMutableSet, SBWindowContextHostWrapperView, SBWindowContextManager, UIScreen;

@interface SBWindowContextHostInfo : NSObject <SBWindowContextManagerObserver>
{
    SBWindowContextManager *_contextManager;
    UIScreen *_screen;
    SBWindowContextHostWrapperView *_wrapperView;
    NSMutableSet *_hiddenContexts;
    NSDictionary *_realContextHostViewChangedProperties;
    NSDictionary *_realContextHostViewOriginalProperties;
}

@property(retain, nonatomic) NSDictionary *realContextHostViewOriginalProperties; // @synthesize realContextHostViewOriginalProperties=_realContextHostViewOriginalProperties;
@property(retain, nonatomic) NSDictionary *realContextHostViewChangedProperties; // @synthesize realContextHostViewChangedProperties=_realContextHostViewChangedProperties;
@property(readonly, nonatomic) NSMutableSet *hiddenContexts; // @synthesize hiddenContexts=_hiddenContexts;
@property(readonly, nonatomic) SBWindowContextHostWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4 forScreen:(id)arg5;
- (void)dealloc;
- (id)initWithContextManager:(id)arg1 hostManager:(id)arg2 screen:(id)arg3;

@end
