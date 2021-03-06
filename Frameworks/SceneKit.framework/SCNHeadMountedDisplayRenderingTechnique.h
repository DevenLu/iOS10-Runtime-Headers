/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNHeadMountedDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique>

@property (nonatomic) double barrelDistortionInputScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } barrelDistortionLensCenter;
@property (nonatomic) double barrelDistortionOutputScale;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } barrelDistortionWarpCoefficients;
@property (nonatomic) double interaxialDistance;

- (double)barrelDistortionInputScale;
- (struct CGPoint { double x1; double x2; })barrelDistortionLensCenter;
- (double)barrelDistortionOutputScale;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })barrelDistortionWarpCoefficients;
- (id)init;
- (double)interaxialDistance;
- (void)setBarrelDistortionInputScale:(double)arg1;
- (void)setBarrelDistortionLensCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBarrelDistortionOutputScale:(double)arg1;
- (void)setBarrelDistortionWarpCoefficients:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setInteraxialDistance:(double)arg1;

@end
