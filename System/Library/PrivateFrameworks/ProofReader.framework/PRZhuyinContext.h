/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	char* _buffer;
	unsigned long long* _syllableLengthArray;
	void* _connection;
	unsigned long long _length;
	unsigned long long _lengthBeforeApostrophes;
	unsigned long long _startingPoint;
	unsigned long long _lastIndexes[4];
	unsigned long long _nextIndexes[2];
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	BOOL _lastSyllableIsPartial;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned long long)arg1 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
@end
