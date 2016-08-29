/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnaylticsDelegate> * _analyticsDelegate;
    NSArray * _completeHours;
    MKPlaceSectionHeaderView * _headerView;
    bool  _isExpanded;
    MKMapItem * _mapItem;
    bool  _resizableViewsDisabled;
}

@property (nonatomic) <_MKInfoCardAnaylticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setExpanded:(bool)arg1;
- (bool)_shouldOnlyShowExpanded;
- (void)_toggleShowAllHours;
- (void)_updateHoursAnimated:(bool)arg1;
- (id)analyticsDelegate;
- (void)dealloc;
- (double)extraHeightToReserveInLayout;
- (id)infoCardChildPossibleActions;
- (id)mapItem;
- (bool)resizableViewsDisabled;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end