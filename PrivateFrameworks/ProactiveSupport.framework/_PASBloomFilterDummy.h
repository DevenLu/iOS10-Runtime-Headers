/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASBloomFilterDummy : _PASBloomFilter {
    bool  _result;
}

+ (id)instanceThatAlwaysReturns:(bool)arg1;

- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (bool)getWithHashes:(id)arg1;
- (id)initWithResult:(bool)arg1;
- (id)newHashesArray;

@end
