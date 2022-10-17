/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

struct Typography
{
    static const touchgfx::FontId HEADLINE = 0;
    static const touchgfx::FontId VIDEOHEADLINE = 1;
    static const touchgfx::FontId VIDEOTEXT = 2;
    static const touchgfx::FontId RECIPELISTELEMENTHEADLINE = 3;
    static const touchgfx::FontId RECIPELISTELEMENTTEXT = 4;
    static const touchgfx::FontId INGREDIENTSTEXT = 5;
    static const touchgfx::FontId INGREDIENTSHEADLINE = 6;
    static const touchgfx::FontId STEPHEADLINE = 7;
    static const touchgfx::FontId NUTRITIONHEADLINE = 8;
    static const touchgfx::FontId NUTRITIONNAME = 9;
    static const touchgfx::FontId FANKNOB = 10;
    static const touchgfx::FontId TEMPERATUREWHEELCENTER = 11;
    static const touchgfx::FontId TEMPERATUREWHEEL = 12;
    static const touchgfx::FontId OVENMODE = 13;
    static const touchgfx::FontId OVENBOTTOMBAR = 14;
    static const touchgfx::FontId OVENTIMERWHEEL = 15;
    static const touchgfx::FontId OVENHEAT = 16;
    static const touchgfx::FontId OVENTEMPERATURESELECTED = 17;
    static const touchgfx::FontId OVENTIMERWHEELCENTER = 18;
    static const touchgfx::FontId HOMEUISPLASHTEMP = 19;
    static const touchgfx::FontId HOMEUISPLASHTEMPUNIT = 20;
    static const touchgfx::FontId HOMEUISPLASHROOM = 21;
    static const touchgfx::FontId HOMEUISPLASHHEAT = 22;
    static const touchgfx::FontId HOMEUISPLASHWAKEUP = 23;
    static const touchgfx::FontId HOMEUIWHEELHEADLINE = 24;
    static const touchgfx::FontId HOMEUIWHEELWILDCARD = 25;
    static const touchgfx::FontId HOMEUIWHEELBOTTOMLINE = 26;
    static const touchgfx::FontId HOMEUIWHEELHEADLINESELECTEDITEM = 27;
    static const touchgfx::FontId HOMEUIWHEELWILDCARDSELECTEDITEM = 28;
    static const touchgfx::FontId HOMEUIWHEELBOTTOMLINESELECTEDITEM = 29;
    static const touchgfx::FontId HOMEUIMENUHEADLINE = 30;
    static const touchgfx::FontId HOMEUIINFO = 31;
    static const touchgfx::FontId DEVICENAME = 32;
    static const touchgfx::FontId DEVICEINFO = 33;
    static const touchgfx::FontId OVENSPLASHCLOCK = 34;
    static const touchgfx::FontId OVENSPLASHAMPM = 35;
    static const touchgfx::FontId ABOUTTEXT = 36;
    static const touchgfx::FontId ABOUTHEADLINE = 37;
    static const touchgfx::FontId TEAMTEXT = 38;
    static const touchgfx::FontId ABOUTHYPERLINKS = 39;
    static const touchgfx::FontId ABOUTSMALLHEADLINE = 40;
    static const touchgfx::FontId ABOUTSCROLLWHEELSMALL = 41;
    static const touchgfx::FontId ABOUTSCROLLWHEELLARGE = 42;
    static const touchgfx::FontId ABOUTRIGHTS = 43;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId HEADLINE = 0;                          // SairaCondensed_Medium_22_4bpp
    static const touchgfx::FontId VIDEOHEADLINE = 1;                     // SairaCondensed_Medium_16_4bpp
    static const touchgfx::FontId VIDEOTEXT = 2;                         // SairaCondensed_Medium_14_4bpp
    static const touchgfx::FontId RECIPELISTELEMENTHEADLINE = 3;         // OpenSans_Semibold_20_4bpp
    static const touchgfx::FontId RECIPELISTELEMENTTEXT = 4;             // OpenSans_SemiboldItalic_13_4bpp
    static const touchgfx::FontId INGREDIENTSTEXT = 5;                   // OpenSans_Regular_16_4bpp
    static const touchgfx::FontId INGREDIENTSHEADLINE = 6;               // OpenSans_Italic_20_4bpp
    static const touchgfx::FontId STEPHEADLINE = 7;                      // OpenSans_Semibold_18_4bpp
    static const touchgfx::FontId NUTRITIONHEADLINE = 8;                 // OpenSans_Semibold_14_4bpp
    static const touchgfx::FontId NUTRITIONNAME = 9;                     // OpenSans_Regular_10_4bpp
    static const touchgfx::FontId FANKNOB = 10;                           // SairaSemiCondensed_Medium_34_4bpp
    static const touchgfx::FontId TEMPERATUREWHEELCENTER = 11;            // OpenSans_Semibold_26_4bpp
    static const touchgfx::FontId TEMPERATUREWHEEL = 12;                  // OpenSans_Semibold_23_4bpp
    static const touchgfx::FontId OVENMODE = 13;                          // Exo2_SemiBold_25_4bpp
    static const touchgfx::FontId OVENBOTTOMBAR = 14;                     // Exo2_Medium_34_4bpp
    static const touchgfx::FontId OVENTIMERWHEEL = 15;                    // Exo2_Medium_26_4bpp
    static const touchgfx::FontId OVENHEAT = 16;                          // Exo2_Medium_18_4bpp
    static const touchgfx::FontId OVENTEMPERATURESELECTED = 17;           // Exo2_Medium_40_4bpp
    static const touchgfx::FontId OVENTIMERWHEELCENTER = 18;              // Exo2_Medium_30_4bpp
    static const touchgfx::FontId HOMEUISPLASHTEMP = 19;                  // Asap_Bold_94_4bpp
    static const touchgfx::FontId HOMEUISPLASHTEMPUNIT = 20;              // Asap_Bold_25_4bpp
    static const touchgfx::FontId HOMEUISPLASHROOM = 21;                  // Asap_Bold_24_4bpp
    static const touchgfx::FontId HOMEUISPLASHHEAT = 22;                  // Asap_Bold_16_4bpp
    static const touchgfx::FontId HOMEUISPLASHWAKEUP = 23;                // Asap_Regular_26_4bpp
    static const touchgfx::FontId HOMEUIWHEELHEADLINE = 24;               // Asap_Bold_14_4bpp
    static const touchgfx::FontId HOMEUIWHEELWILDCARD = 25;               // Asap_Bold_40_4bpp
    static const touchgfx::FontId HOMEUIWHEELBOTTOMLINE = 26;             // Asap_Bold_10_4bpp
    static const touchgfx::FontId HOMEUIWHEELHEADLINESELECTEDITEM = 27;   // Asap_Bold_18_4bpp
    static const touchgfx::FontId HOMEUIWHEELWILDCARDSELECTEDITEM = 28;   // Asap_Bold_60_4bpp
    static const touchgfx::FontId HOMEUIWHEELBOTTOMLINESELECTEDITEM = 29; // Asap_Bold_12_4bpp
    static const touchgfx::FontId HOMEUIMENUHEADLINE = 30;                // Asap_Bold_26_4bpp
    static const touchgfx::FontId HOMEUIINFO = 31;                        // Asap_Bold_22_4bpp
    static const touchgfx::FontId DEVICENAME = 32;                        // Asap_Bold_20_4bpp
    static const touchgfx::FontId DEVICEINFO = 24;                        // Asap_Bold_14_4bpp
    static const touchgfx::FontId OVENSPLASHCLOCK = 33;                   // Exo2_Medium_80_4bpp
    static const touchgfx::FontId OVENSPLASHAMPM = 34;                    // Exo2_Medium_24_4bpp
    static const touchgfx::FontId ABOUTTEXT = 35;                         // SairaCondensed_Medium_20_4bpp
    static const touchgfx::FontId ABOUTHEADLINE = 36;                     // SairaCondensed_Medium_28_4bpp
    static const touchgfx::FontId TEAMTEXT = 37;                          // SairaCondensed_SemiBold_16_4bpp
    static const touchgfx::FontId ABOUTHYPERLINKS = 38;                   // SairaCondensed_SemiBold_14_4bpp
    static const touchgfx::FontId ABOUTSMALLHEADLINE = 39;                // SairaCondensed_SemiBold_20_4bpp
    static const touchgfx::FontId ABOUTSCROLLWHEELSMALL = 37;             // SairaCondensed_SemiBold_16_4bpp
    static const touchgfx::FontId ABOUTSCROLLWHEELLARGE = 39;             // SairaCondensed_SemiBold_20_4bpp
    static const touchgfx::FontId ABOUTRIGHTS = 40;                       // SairaCondensed_SemiBold_12_4bpp
    static const uint16_t NUMBER_OF_FONTS = 41;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);
};

#endif // APPLICATIONFONTPROVIDER_HPP
