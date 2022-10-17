/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/settingsContainerBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

settingsContainerBase::settingsContainerBase() :
    buttonCallback(this, &settingsContainerBase::buttonCallbackHandler),
    flexButtonCallback(this, &settingsContainerBase::flexButtonCallbackHandler),
    clockModeButtonClickedCallback(0),
    temperatureUnitButtonClickedCallback(0),
    backButonClickedCallback(0),
    changeCityCallback(0),
    wifiMenuSelectedCallback(0)
{
    setWidth(480);
    setHeight(272);

    bgGradient.setXY(30, 54);
    bgGradient.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_BOX_BG_ID));

    bgGradient_1.setXY(259, 54);
    bgGradient_1.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_BOX_BG_ID));

    preferencesHeadline.setXY(265, 59);
    preferencesHeadline.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    preferencesHeadline.setLinespacing(0);
    preferencesHeadline.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));

    units.setXY(265, 91);
    units.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    units.setLinespacing(0);
    units.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));

    CelFah.setXY(265, 107);
    CelFah.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    CelFah.setLinespacing(0);
    CelFah.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));

    temperatureUnitButton.setXY(380, 99);
    temperatureUnitButton.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_F_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_C_ID));
    temperatureUnitButton.forceState(true);
    temperatureUnitButton.setAction(buttonCallback);

    clockModeButton.setXY(380, 140);
    clockModeButton.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_12_ID), touchgfx::Bitmap(BITMAP_SETTINGS_SLIDER_24_ID));
    clockModeButton.forceState(true);
    clockModeButton.setAction(buttonCallback);

    wifiList.setDirection(touchgfx::SOUTH);
    wifiList.setPosition(30, 91, 296, 54);

    timeSettings.setXY(265, 136);
    timeSettings.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    timeSettings.setLinespacing(0);
    timeSettings.setTypedText(touchgfx::TypedText(T_SINGLEUSEID180));

    timeSettingsSmall.setXY(265, 152);
    timeSettingsSmall.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    timeSettingsSmall.setLinespacing(0);
    timeSettingsSmall.setTypedText(touchgfx::TypedText(T_SINGLEUSEID181));

    wifiHeadline.setXY(40, 66);
    wifiHeadline.setColor(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    wifiHeadline.setLinespacing(0);
    wifiHeadline.setTypedText(touchgfx::TypedText(T_SINGLEUSEID182));

    moreNetworksButton.setText(TypedText(T_SINGLEUSEID183));
    moreNetworksButton.setTextPosition(0, 9, 195, 38);
    moreNetworksButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(235, 235, 235), touchgfx::Color::getColorFrom24BitRGB(235, 235, 235));
    moreNetworksButton.setPosition(30, 214, 195, 38);
    moreNetworksButton.setAction(flexButtonCallback);

    add(bgGradient);
    add(bgGradient_1);
    add(preferencesHeadline);
    add(units);
    add(CelFah);
    add(temperatureUnitButton);
    add(clockModeButton);
    add(wifiList);
    add(timeSettings);
    add(timeSettingsSmall);
    add(wifiHeadline);
    add(moreNetworksButton);
}

void settingsContainerBase::initialize()
{
	
}

void settingsContainerBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &temperatureUnitButton)
    {
        //temperatureUnitButtonClicked
        //When temperatureUnitButton clicked emit temperatureUnitButtonClicked callback
        //Emit callback
        emitTemperatureUnitButtonClickedCallback(temperatureUnitButton.getState());
    }
    else if (&src == &clockModeButton)
    {
        //clockModeButtonClicked
        //When clockModeButton clicked emit clockModeButtonClicked callback
        //Emit callback
        emitClockModeButtonClickedCallback(clockModeButton.getState());
    }
}

void settingsContainerBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &moreNetworksButton)
    {
        //moreNetwotksClicked
        //When moreNetworksButton clicked emit wifiMenuSelected callback
        //Emit callback
        emitWifiMenuSelectedCallback();
    }
}
