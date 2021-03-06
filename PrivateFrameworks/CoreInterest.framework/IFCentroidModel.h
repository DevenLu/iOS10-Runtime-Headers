/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidModel : NSObject <IFCentroidModel> {
    IFCentroidModelParameters * _parameters;
    <IFCentroidStore><IFCentroidStoreInternal> * _store;
}

@property (readonly) NSArray *centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) IFCentroidModelParameters *parameters;
@property (retain) <IFCentroidStore><IFCentroidStoreInternal> *store;
@property (readonly) Class superclass;

+ (id)modelWithStore:(id)arg1 parameters:(id)arg2;

- (void).cxx_destruct;
- (id)_centroidVectorFromFeatureVector:(id)arg1 withScaling:(id)arg2;
- (id)_vectorFromFeatureVector:(id)arg1;
- (id)centroid;
- (id)initWithStore:(id)arg1 parameters:(id)arg2;
- (id)parameters;
- (double)scoreForFeatureVector:(id)arg1 scoringParameters:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (bool)update;

@end
