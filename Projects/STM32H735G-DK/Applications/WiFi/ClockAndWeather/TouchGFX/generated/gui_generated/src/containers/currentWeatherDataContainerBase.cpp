/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/currentWeatherDataContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

currentWeatherDataContainerBase::currentWeatherDataContainerBase()
{
    setWidth(252);
    setHeight(143);

    windSpeed.setPosition(52, 0, 100, 26);
    windSpeed.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    windSpeed.setLinespacing(0);
    windSpeed.setTypedText(touchgfx::TypedText(T_SINGLEUSEID162));

    windDirection.setPosition(52, 21, 100, 26);
    windDirection.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    windDirection.setLinespacing(0);
    windDirection.setTypedText(touchgfx::TypedText(T_SINGLEUSEID163));

    pressure.setPosition(52, 51, 100, 26);
    pressure.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    pressure.setLinespacing(0);
    pressure.setTypedText(touchgfx::TypedText(T_SINGLEUSEID164));

    humidity.setPosition(52, 72, 100, 26);
    humidity.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    humidity.setLinespacing(0);
    humidity.setTypedText(touchgfx::TypedText(T_SINGLEUSEID165));

    rain.setPosition(52, 114, 100, 26);
    rain.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rain.setLinespacing(0);
    rain.setTypedText(touchgfx::TypedText(T_SINGLEUSEID166));

    windSpeedValue.setPosition(180, 0, 72, 26);
    windSpeedValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    windSpeedValue.setLinespacing(0);
    Unicode::snprintf(windSpeedValueBuffer, WINDSPEEDVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID168).getText());
    windSpeedValue.setWildcard(windSpeedValueBuffer);
    windSpeedValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID167));

    windDirectionValue.setPosition(180, 21, 72, 26);
    windDirectionValue.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    windDirectionValue.setLinespacing(0);
    Unicode::snprintf(windDirectionValueBuffer, WINDDIRECTIONVALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID170).getText());
    windDirectionValue.setWildcard(windDirectionValueBuffer);
    windDirectionValue.setTypedText(touchgfx::TypedText(T_SINGLEUSEID169));

    pressureVal.setPosition(180, 54, 72, 26);
    pressureVal.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    pressureVal.setLinespacing(0);
    Unicode::snprintf(pressureValBuffer, PRESSUREVAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID172).getText());
    pressureVal.setWildcard(pressureValBuffer);
    pressureVal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID171));

    humidityVal.setPosition(180, 75, 72, 26);
    humidityVal.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    humidityVal.setLinespacing(0);
    Unicode::snprintf(humidityValBuffer, HUMIDITYVAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID174).getText());
    humidityVal.setWildcard(humidityValBuffer);
    humidityVal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID173));

    rainVal.setPosition(153, 114, 99, 26);
    rainVal.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    rainVal.setLinespacing(0);
    Unicode::snprintf(rainValBuffer, RAINVAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID176).getText());
    rainVal.setWildcard(rainValBuffer);
    rainVal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID175));

    rainIcon.setXY(0, 111);
    rainIcon.setBitmap(touchgfx::Bitmap(BITMAP_RAIN_VOLUME_ID));

    windSpeedIcon.setXY(0, 7);
    windSpeedIcon.setBitmap(touchgfx::Bitmap(BITMAP_WIND_ID));

    pressureIcon.setXY(0, 59);
    pressureIcon.setBitmap(touchgfx::Bitmap(BITMAP_PRESSURE_ID));

    add(windSpeed);
    add(windDirection);
    add(pressure);
    add(humidity);
    add(rain);
    add(windSpeedValue);
    add(windDirectionValue);
    add(pressureVal);
    add(humidityVal);
    add(rainVal);
    add(rainIcon);
    add(windSpeedIcon);
    add(pressureIcon);
}

void currentWeatherDataContainerBase::initialize()
{
	
}
