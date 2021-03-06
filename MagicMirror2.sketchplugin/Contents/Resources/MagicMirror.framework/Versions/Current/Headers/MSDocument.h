//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "MSBasicDelegate.h"
#import "MSDocumentDataDelegate.h"
#import "MSPageDelegate.h"
#import "MSSidebarControllerDelegate.h"
#import "MSEventHandlerManager.h"

@class BCSideBarViewController, MSActionsController, MSContentDrawViewController, MSDocumentData, MSEventHandlerManager, MSFontList, MSIOSRefreshCollector, MSInspectorController, MSLayerArray, MSSharedObjectInstanceCollection, MSSplitViewDelegate, MSToolbarConstructor, NSMutableSet, NSSplitView, NSString, NSTimer, NSView, NSWindow;

@protocol MSDocument <MSSidebarControllerDelegate, NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSBasicDelegate, MSDocumentDataDelegate, MSPageDelegate>

+ (BOOL)autosavesInPlace;
+ (id)currentDocument;
+ (BOOL)isNativeType:(id)arg1;
+ (id)readableTypes;
+ (id)writableTypes;

- (id)actionWithName:(id)arg1;
- (id)actions;
@property(retain, nonatomic) MSActionsController *actionsController; // @synthesize actionsController=_actionsController;
- (id)addBlankPage;
- (id)addImageLayerFromPath:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (void)addLayer:(id)arg1;
- (void)addLayer:(id)arg1 changeName:(BOOL)arg2;
- (void)alertDocumentIsTooNew;
- (void)alertDocumentIsWrongSize;
- (id)allExportableLayers;
- (void)applicationDidChangeFocusWindow;
- (id)artboards;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (BOOL)askToOpenDocumentRepairingMetadata;
- (BOOL)askToOpenDocumentWithMissingFonts:(id)arg1;
- (void)awakeFromNib;
- (void)bindLayerSliceInteraction;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
@property(retain, nonatomic) NSView *canvasPlaceholderView; // @synthesize canvasPlaceholderView=_canvasPlaceholderView;
- (void)changeTextLayerFont:(id)arg1;
- (void)close;
- (void)closePath:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)coalescedSelectionDidChangeNotification:(id)arg1;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(id)arg2;
@property(retain, nonatomic) MSSharedObjectInstanceCollection *collectedSharedObjects; // @synthesize collectedSharedObjects=_collectedSharedObjects;
@property(retain, nonatomic) NSTimer *collectedSharedObjectsTimer; // @synthesize collectedSharedObjectsTimer=_collectedSharedObjectsTimer;
- (void)colorMagnifierAction:(id)arg1;
- (void)copyCSSAttributes:(id)arg1;
- (void)copyStyle:(id)arg1;
- (void)createActions;
- (void)currentArtboardDidChange;
@property(retain, nonatomic) MSContentDrawViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
- (id)currentHandler;
- (void)currentHandlerChanged;
- (id)currentHandlerKey;
- (id)currentHorizontalRulerData;
- (MSPage *)currentPage;
- (BOOL)currentPopoverHandlesColorMagnifier;
- (id)currentVerticalRulerData;
- (id)currentView;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)dealloc;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (void)debugStressTestRendering:(id)arg1;
- (id)defaultHandler;
- (void)deleteArtboards2:(id)arg1;
- (void)deleteArtboards:(id)arg1;
- (void)determineCurrentArtboard;
- (void)didAddArtboard:(id)arg1 toPage:(id)arg2;
- (void)didAddPage:(id)arg1;
- (void)didUpdateDetailsForArtboard:(id)arg1;
- (void)didUpdateDetailsForPage:(id)arg1;
- (void)displayMessage:(id)arg1;
- (void)displayMessage:(id)arg1 timeout:(double)arg2;
- (id)document;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
- (void)documentData:(id)arg1 didChangeToPage:(id)arg2;
- (void)documentData:(id)arg1 immediatelyShowSelectionForLayer:(id)arg2;
- (void)documentData:(id)arg1 syncSharedObject:(id)arg2;
- (void)documentData:(id)arg1 temporarilyHideSelectionForLayer:(id)arg2;
@property(retain, nonatomic) NSWindow *documentWindow; // @synthesize documentWindow=_documentWindow;
@property(retain, nonatomic) id <MSEventHandlerManager> eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
- (void)export:(id)arg1;
- (id)exportFramer;
- (void)exportPDFBook:(id)arg1;
- (void)exportSliceLayers:(id)arg1;
- (id)extensionForExportingLayer:(id)arg1;
- (id)findCurrentArtboardGroup;
- (void)findLayer:(id)arg1;
- (id)findSelectedLayers;
- (void)flagsChanged:(id)arg1;
- (void)flagsChangedNotification:(id)arg1;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
- (id)grid;
- (void)gridSettings:(id)arg1;
- (BOOL)hasArtboards;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
- (void)hideMessage;
- (void)hideMessage:(id)arg1;
- (id)imageFromPath:(id)arg1;
- (id)init;
@property(retain, nonatomic) MSInspectorController *inspectorController; // @synthesize inspectorController=_inspectorController;
- (BOOL)inspectorIsMain;
@property(retain, nonatomic) NSView *inspectorPlaceholderView; // @synthesize inspectorPlaceholderView=_inspectorPlaceholderView;
- (BOOL)isInPresentationMode;
- (BOOL)isRulersVisible;
@property(nonatomic) BOOL isSyncingSharedObjects; // @synthesize isSyncingSharedObjects=_isSyncingSharedObjects;
- (void)layerPositionPossiblyChanged;
- (void)layerSelectionDidChange;
- (id)layerStyles;
- (void)layerTreeLayoutDidChange;
- (BOOL)layerWouldOverlapExistingLayer:(id)arg1 inGroup:(id)arg2;
- (id)layersSharingStyle:(id)arg1;
@property(retain, nonatomic) NSMutableSet *layersWithHiddenSelectionHandles; // @synthesize layersWithHiddenSelectionHandles=_layersWithHiddenSelectionHandles;
- (void)layoutSettings:(id)arg1;
- (void)loadInspectorPanel;
- (void)loadLayerListPanel;
- (void)logBuggyBezierPaths;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
@property(retain, nonatomic) NSView *messageView; // @synthesize messageView=_messageView;
- (id)migrateWithXPCFromURL:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL nextReadFromURLIsReload; // @synthesize nextReadFromURLIsReload=_nextReadFromURLIsReload;
- (void)offsetLayerIfNecessary:(id)arg1 forInsertingInGroup:(id)arg2;
- (void)onAddPage:(id)arg1;
- (void)onFilterChanged:(id)arg1;
- (id)pages;
- (void)pasteStyle:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)processValidationCode:(unsigned long long)arg1 wrapper:(id)arg2 missingFonts:(id)arg3;
- (id)publisherFileName;
- (void)putSelectionBackInCanvasIfPossible;
- (BOOL)readDocumentFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1;
- (BOOL)readFromDocumentWrapper:(id)arg1 ofType:(id)arg2 wasMigrated:(BOOL)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)readPDFFromURL:(id)arg1;
- (BOOL)readSVGFromURL:(id)arg1;
- (void)redoAction:(id)arg1;
@property(readonly, nonatomic) MSIOSRefreshCollector *refreshCollector; // @synthesize refreshCollector=_refreshCollector;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)reloadInspector;
- (void)removePage:(id)arg1;
- (void)renameLayer:(id)arg1;
- (void)reportFileSizeAtURL:(id)arg1;
@property(retain, nonatomic) NSTimer *resetHiddenSelectionHandlesTimer; // @synthesize resetHiddenSelectionHandlesTimer=_resetHiddenSelectionHandlesTimer;
- (void)resetHiddenSelectionHandlesTimerAction:(id)arg1;
- (void)resetImportedDocument:(id)arg1;
- (void)returnToDefaultHandler:(id)arg1;
- (void)returnToNormalHandler;
- (void)reversePath:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)rootDelegate;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (void)saveSlice:(id)arg1 toFile:(id)arg2;
@property(nonatomic) struct CGPoint scrollOrigin; // @dynamic scrollOrigin;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)selectedLayers;
@property(copy, nonatomic) MSLayerArray *selectedLayersA; // @synthesize selectedLayersA=_selectedLayersA;
- (id)selectedLayersOfClass:(Class)arg1;
- (id)setCurrentHandlerKey:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (void)setDelegatesToNil;
- (void)setSelectedLayers:(id)arg1;
@property(retain, nonatomic) BCSideBarViewController *sidebarController; // @synthesize sidebarController=_sidebarController;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak MSSplitViewDelegate *splitViewController; // @synthesize splitViewController=_splitViewController;
- (void)setStyleAsDefault:(id)arg1;
@property(nonatomic) BOOL temporarilyDisableSelectionHiding; // @synthesize temporarilyDisableSelectionHiding=_temporarilyDisableSelectionHiding;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor=_toolbarConstructor;
@property(nonatomic) double zoomValue; // @dynamic zoomValue;
- (id)shadowViewForContentView:(id)arg1 cornerRadius:(double)arg2;
- (BOOL)shouldCreateToolbar;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (BOOL)shouldEnableLocalSharing;
- (void)showMessage:(id)arg1;
- (id)sidebarController:(id)arg1 exportLayers:(id)arg2;
- (void)sidebarController:(id)arg1 hoveredLayerDidChangeTo:(id)arg2;
- (id)sidebarControllerContextMenuItemsForCurrentSelection:(id)arg1;
- (void)sidebarControllerDidUpdate:(id)arg1;
- (void)sidebarControllerSelectionDidChange:(id)arg1;
- (void)sliceDidChangeVisibility:(id)arg1;
- (id)sliceForArtboardOrSlice:(id)arg1;
- (id)sliceForRect:(id)arg1;
- (id)startAccessingFolder:(id)arg1 tokenName:(id)arg2;
- (void)startBackgroundCaching;
- (void)stopAccessingFolderToken:(id)arg1;
- (void)syncSharedObjects:(id)arg1;
- (void)toggleAlignmentGuides:(id)arg1;
- (void)toggleArtboardShadow:(id)arg1;
- (void)toggleClickThrough:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (void)toggleInspectorVisibility:(id)arg1;
- (void)toggleLayerHighlight:(id)arg1;
- (void)toggleLayerInteraction:(id)arg1;
- (void)toggleLayerListVisibility:(id)arg1;
- (void)toggleLayersAndInspectorVisibility:(id)arg1;
- (void)toggleLocalSharing:(id)arg1;
- (void)togglePixelLines:(id)arg1;
- (void)toggleRulers;
- (void)toggleSelection:(id)arg1;
- (void)toggleSliceInteraction:(id)arg1;
- (id)toolbar;
- (void)unbindLayerSliceInteraction;
- (void)undoAction:(id)arg1;
- (void)updateCountDownButton;
- (void)updateFilterSettings;
- (void)updateSliceCount;
- (BOOL)validateLocallyWithWrapper:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)validateMenuItemTitleAndState:(id)arg1;
- (BOOL)validateWithXPCAtURL:(id)arg1 wrapper:(id)arg2;
- (void)warnAboutOldVersion;
- (void)willRemoveArtboard:(id)arg1 fromPage:(id)arg2;
- (void)willRemovePage:(id)arg1;
- (id)window;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (id)windowNibName;
- (void)windowWillBeginSheet:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)wireDocumentDataToUI;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (void)zoomValueDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

@interface MSDocument : NSDocument <MSDocument>

@end