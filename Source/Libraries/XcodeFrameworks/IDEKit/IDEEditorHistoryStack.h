/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEEditorHistoryItem, NSArray;

@interface IDEEditorHistoryStack : NSObject
{
    NSArray *_previousHistoryItems;
    NSArray *_nextHistoryItems;
    IDEEditorHistoryItem *currentHistoryItem;
}

@property(readonly) IDEEditorHistoryItem *currentEditorHistoryItem; // @synthesize currentEditorHistoryItem=currentHistoryItem;
- (id)description;
- (id)initWithCurrentEditorHistoryItem:(id)arg1;
- (id)initWithCurrentEditorHistoryItem:(id)arg1 previousHistoryItems:(id)arg2 nextHistoryItems:(id)arg3;
@property(readonly) NSArray *nextHistoryItems; // @synthesize nextHistoryItems=_nextHistoryItems;
@property(readonly) NSArray *previousHistoryItems; // @synthesize previousHistoryItems=_previousHistoryItems;

@end

