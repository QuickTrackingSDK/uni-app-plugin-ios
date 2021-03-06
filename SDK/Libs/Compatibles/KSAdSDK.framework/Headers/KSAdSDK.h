//
//  KSAdSDK.h
//  KSAdSDK
//
//  Created by 徐志军 on 2019/9/5.
//  Copyright © 2019 KuaiShou. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<KSAdSDK/KSAdPos.h>)
#import <KSAdSDK/KSAdPos.h>
#endif

#if __has_include(<KSAdSDK/KSAdSDKError.h>)
#import <KSAdSDK/KSAdSDKError.h>
#endif

#if __has_include(<KSAdSDK/KSMaterialMeta.h>)
#import <KSAdSDK/KSMaterialMeta.h>
#endif

#if __has_include(<KSAdSDK/KSAdImage.h>)
#import <KSAdSDK/KSAdImage.h>
#endif

#if __has_include(<KSAdSDK/KSAdUserInfo.h>)
#import <KSAdSDK/KSAdUserInfo.h>
#endif

#if __has_include(<KSUAdSDKManager/KSAdSDKManager.h>)
#import <KSUAdSDKManager/KSAdSDKManager.h>
#else
#import "KSAdSDKManager.h"
#endif

#if __has_include(<KSUExportLog/KSAdExportManager.h>)
#import <KSUExportLog/KSAdExportManager.h>
#else
#import "KSAdExportManager.h"
#endif

#import <KSAdSDK/KSFullscreenVideoAd.h>
#import <KSAdSDK/KSRewardedVideoAd.h>
#import <KSAdSDK/KSRewardedVideoModel.h>
#import <KSAdSDK/KSNativeAd.h>
#import <KSAdSDK/KSNativeAdsManager.h>
#import <KSAdSDK/KSNativeAdRelatedView.h>
#import <KSAdSDK/KSVideoAdView.h>
#import <KSAdSDK/KSFeedAd.h>
#import <KSAdSDK/KSFeedAdsManager.h>
#import <KSAdSDK/KSDrawAd.h>
#import <KSAdSDK/KSDrawAdsManager.h>
/// 闪屏广告
#import <KSAdSDK/KSAdSplashManager.h>
#import <KSAdSDK/KSSplashAdView.h>
/// 插屏广告
#import <KSAdSDK/KSInterstitialAd.h>
#if __has_include(<KSUPermission/KSAdPermission.h>)
    #import <KSUPermission/KSAdPermission.h>
#elif __has_include(<KSAdSDK/KSAdPermission.h>)
    #import <KSAdSDK/KSAdPermission.h>
#endif
