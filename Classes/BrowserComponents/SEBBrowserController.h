//
//  SEBBrowserController.h
//  SafeExamBrowser
//
//  Created by Daniel R. Schneider on 06/10/14.
//
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "SEBBrowserWindow.h"
#import "SEBDockController.h"
#import "SEBDockItemButton.h"
#import "SEBDockItemMenu.h"

@class SEBBrowserWindow;

@interface SEBBrowserController : NSObject

@property (strong) WebView *webView;
@property (strong) SEBBrowserWindow *mainBrowserWindow;
@property (strong) SEBDockController *dockController;
@property (strong) SEBDockItemButton *sebDockItemButton;
@property (strong) NSString *currentMainHost;
@property (strong) NSMutableArray *openBrowserWindowsWebViews;
@property (strong) SEBDockItemMenu *openBrowserWindowsWebViewsMenu;
@property(readwrite) BOOL reinforceKioskModeRequested;

- (WebView *) openWebView;
- (WebView *) openAndShowWebView;
- (void) closeWebView:(WebView *) webViewToClose;
- (void) webViewShow:(WebView *)sender;
- (void) openMainBrowserWindow;
- (void) adjustMainBrowserWindow;
- (void) allBrowserWindowsChangeLevel:(BOOL)allowApps;

- (void) openResourceWithURL:(NSString *)URL andTitle:(NSString *)title;
- (void) downloadAndOpenSebConfigFromURL:(NSURL *)url;

- (void) setTitle:(NSString *)title forWindow:(SEBBrowserWindow *)browserWindow withWebView:(WebView *)webView;
- (void) setStateForWindow:(SEBBrowserWindow *)browserWindow withWebView:(WebView *)webView;

@end
