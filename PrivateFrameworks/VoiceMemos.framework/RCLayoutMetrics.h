/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCLayoutMetrics : NSObject <NSCopying> {
    float _hPresentedRecordMemoHeight;
    NSString *_label;
    struct { 
        float scale; 
        float vDeltaWaveformToTimeBaseline; 
        float vDeltaTimeBaselineToTitleBaseline; 
        float vDeltaTitleBaselineToDateBaseline; 
        float vDeltaDateBaselineToControlsTop; 
        float vDeltaControlsBottomToBottom; 
        float vDeltaControlsTopToNavigationBottom; 
        BOOL hIsWaveformFlushToEdges; 
        float hDeltaAdditionalInsetFromWaveformEdge; 
        float hDeltaControlButtonsSpacing; 
        float hDeltaTrimProgressInset; 
        float hDeltaAcousticAnnotationLabelToWaveformRight; 
        float hTrimModeInset; 
        float hDetailNavigationBarInset; 
        float hPresentedRecordMemoHeight; 
        float vDeltaLockNotificationListTop; 
        float vDeltaLockNotificationListTopToRecordingTextBaseline; 
        float vDeltaLockAbsoluteTopToWaveformTop; 
        float vDeltaLockNotificationListBottom; 
        float vDeltaLockNotificationListBottomToRecordingTimeBaseline; 
    } _metricInfo;
}

@property (nonatomic, readonly) float hDeltaAcousticAnnotationLabelToWaveformRight;
@property (nonatomic, readonly) float hDeltaAdditionalInsetFromWaveformEdge;
@property (nonatomic, readonly) float hDeltaControlButtonsSpacing;
@property (nonatomic, readonly) float hDeltaTrimProgressInset;
@property (nonatomic, readonly) float hDetailNavigationBarInset;
@property (nonatomic, readonly) BOOL hIsWaveformFlushToEdges;
@property (nonatomic) float hPresentedRecordMemoHeight;
@property (nonatomic, readonly) float hTrimModeInset;
@property (nonatomic, readonly) float vDeltaControlsBottomToBottom;
@property (nonatomic, readonly) float vDeltaControlsTopToNavigationBottom;
@property (nonatomic, readonly) float vDeltaDateBaselineToControlsTop;
@property (nonatomic, readonly) float vDeltaLockAbsoluteTopToWaveformTop;
@property (nonatomic, readonly) float vDeltaLockNotificationListBottom;
@property (nonatomic, readonly) float vDeltaLockNotificationListBottomToRecordingTimeBaseline;
@property (nonatomic, readonly) float vDeltaTimeBaselineToTitleBaseline;
@property (nonatomic, readonly) float vDeltaTitleBaselineToDateBaseline;
@property (nonatomic, readonly) float vDeltaWaveformToTimeBaseline;

+ (id)defaultMetrics;
+ (id)largeHorizontalMetrics;
+ (id)largeVerticalMetrics;
+ (id)normalVerticalMetrcis;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)hDeltaAcousticAnnotationLabelToWaveformRight;
- (float)hDeltaAdditionalInsetFromWaveformEdge;
- (float)hDeltaControlButtonsSpacing;
- (float)hDeltaTrimProgressInset;
- (float)hDetailNavigationBarInset;
- (BOOL)hIsWaveformFlushToEdges;
- (float)hPresentedRecordMemoHeight;
- (float)hTrimModeInset;
- (id)initWithLabel:(id)arg1;
- (void)setHPresentedRecordMemoHeight:(float)arg1;
- (void)setMetricInfo:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; BOOL x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
- (float)vDeltaControlsBottomToBottom;
- (float)vDeltaControlsTopToNavigationBottom;
- (float)vDeltaDateBaselineToControlsTop;
- (float)vDeltaLockAbsoluteTopToWaveformTop;
- (float)vDeltaLockNotificationListBottom;
- (float)vDeltaLockNotificationListBottomToRecordingTimeBaseline;
- (float)vDeltaLockNotificationListTop;
- (float)vDeltaLockNotificationListTopToRecordingTextBaseline;
- (float)vDeltaTimeBaselineToTitleBaseline;
- (float)vDeltaTitleBaselineToDateBaseline;
- (float)vDeltaWaveformToTimeBaseline;

@end