/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerSpec : NSObject {
    PUFontManager * __fontManager;
    UIImage * _addSharedAlbumPlaceholderImage;
    long long  _albumDeletionConfirmationStyle;
    PUPhotosAlbumViewControllerSpec * _albumViewControllerSpec;
    long long  _cellContentViewLayout;
    long long  _collageImageContentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _collageImageSize;
    double  _collageSpacing;
    UIImage * _emptyAlbumPlaceholderImage;
    UIImage * _emptySharedAlbumPlaceholderImage;
    PUPhotoDecoration * _emptyStackPhotoDecoration;
    PUFeedViewControllerSpec * _feedViewControllerSpec;
    unsigned long long  _folderStackViewStyle;
    PUPhotosGridViewControllerSpec * _gridViewControllerSpec;
    UIImage * _hiddenAlbumPlaceholderImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _maxSearchBarWidth;
    PUPhotosPanoramaViewControllerSpec * _panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec * _photosPickerViewControllerSpec;
    double  _posterSquareCornerRadius;
    double  _posterSubitemCornerRadius;
    UIImage * _recentlyDeletedAlbumPlaceholderImage;
    double  _sectionFooterHeight;
    double  _sectionHeaderHeight;
    bool  _shouldUseCollageForCloudFeedPlaceholder;
    bool  _shouldUseShortTitleForStandInAlbumList;
    bool  _shouldUseTableView;
    bool  _showsDeleteButtonOnCellContentView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackPerspectiveOffset;
    PUPhotoDecoration * _stackPhotoDecoration;
    struct CGSize { 
        double width; 
        double height; 
    }  _stackSize;
    unsigned long long  _stackViewStyle;
    bool  _usesStackTransitionToGrid;
}

@property (nonatomic, readonly) PUFontManager *_fontManager;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_insetsInterpolator;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property (nonatomic, readonly) UIImage *addSharedAlbumPlaceholderImage;
@property (nonatomic, readonly) long long albumDeletionConfirmationStyle;
@property (nonatomic, readonly) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec;
@property (nonatomic, readonly) bool canDisplaySearchActionInNavigationBar;
@property (nonatomic, readonly) bool canShowVirtualCollections;
@property (nonatomic, readonly) long long cellContentViewLayout;
@property (readonly) long long collageImageContentMode;
@property (readonly) struct CGSize { double x1; double x2; } collageImageSize;
@property (nonatomic, readonly) double collageSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSizeForViewInPopover;
@property (nonatomic, readonly) bool displaysSearchInPopover;
@property (nonatomic, readonly) UIImage *emptyAlbumPlaceholderImage;
@property (nonatomic, readonly) UIImage *emptySharedAlbumPlaceholderImage;
@property (nonatomic, readonly) PUPhotoDecoration *emptyStackPhotoDecoration;
@property (nonatomic, readonly) PUFeedViewControllerSpec *feedViewControllerSpec;
@property (nonatomic, readonly) unsigned long long folderStackViewStyle;
@property (nonatomic, readonly) PUPhotosGridViewControllerSpec *gridViewControllerSpec;
@property (nonatomic, readonly) UIImage *hiddenAlbumPlaceholderImage;
@property (readonly) long long imageContentMode;
@property (readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) double maxSearchBarWidth;
@property (nonatomic, readonly) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (nonatomic, readonly) double posterSquareCornerRadius;
@property (nonatomic, readonly) double posterSubitemCornerRadius;
@property (nonatomic, readonly) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property (nonatomic, readonly) double sectionFooterHeight;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) bool shouldShowSectionHeaders;
@property (nonatomic, readonly) bool shouldUseCollageForCloudFeedPlaceholder;
@property (nonatomic, readonly) bool shouldUseShortTitleForStandInAlbumList;
@property (readonly) bool shouldUseTableView;
@property (nonatomic, readonly) bool showsDeleteButtonOnCellContentView;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property (nonatomic, readonly) PUPhotoDecoration *stackPhotoDecoration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } stackSize;
@property (nonatomic, readonly) unsigned long long stackViewStyle;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
@property (nonatomic, readonly) bool usesStackTransitionToGrid;

- (void).cxx_destruct;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 imageAlpha:(double)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_fontManager;
- (id)_insetsInterpolator;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (id)_nameOfRecentlyDeletedAlbumPlaceholderImage;
- (struct CGPoint { double x1; double x2; })_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_stackWidthInterpolator;
- (id)addSharedAlbumPlaceholderImage;
- (long long)albumDeletionConfirmationStyle;
- (id)albumViewControllerSpec;
- (bool)canDisplaySearchActionInNavigationBar;
- (bool)canShowVirtualCollections;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)collageImageContentMode;
- (struct CGSize { double x1; double x2; })collageImageSize;
- (double)collageSpacing;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (bool)displaysSearchInPopover;
- (id)emptyAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (unsigned long long)folderStackViewStyle;
- (id)gridViewControllerSpec;
- (id)hiddenAlbumPlaceholderImage;
- (long long)imageContentMode;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGSize { double x1; double x2; })imageSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (double)maxSearchBarWidth;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (id)recentlyDeletedAlbumPlaceholderImage;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldShowSectionHeaders;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)shouldUseShortTitleForStandInAlbumList;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;
- (struct CGSize { double x1; double x2; })stackSize;
- (struct CGSize { double x1; double x2; })stackSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)stackViewStyle;
- (id)standInAlbumListViewControllerSpec;
- (struct CGSize { double x1; double x2; })tileSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 stackViewStyle:(unsigned long long)arg2;
- (bool)usesStackTransitionToGrid;

@end
