#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTTween_EasingMethod.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F1C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_OFFSET UNITYSDK_OFFSET(0x1A23DC10)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F100)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_OFFSET UNITYSDK_OFFSET(0x1A23DB20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F270)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23DCD0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F160)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_OFFSET UNITYSDK_OFFSET(0x1A23DB90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F680)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_OFFSET UNITYSDK_OFFSET(0x1A23E1E0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F630)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_OFFSET UNITYSDK_OFFSET(0x1A23E150)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F6F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23E260)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F650)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_OFFSET UNITYSDK_OFFSET(0x1A23E180)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_1_OFFSET UNITYSDK_OFFSET(0x1A23E6C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_OFFSET UNITYSDK_OFFSET(0x1A23CDA0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23EFB0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_OFFSET UNITYSDK_OFFSET(0x1A23D990)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_1_OFFSET UNITYSDK_OFFSET(0x1A23EEF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_OFFSET UNITYSDK_OFFSET(0x1A23D8A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F050)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23DA40)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23EF50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_OFFSET UNITYSDK_OFFSET(0x1A23D910)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x1A23F9F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_OFFSET UNITYSDK_OFFSET(0x1A23E6A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F380)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_OFFSET UNITYSDK_OFFSET(0x1A23DE30)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F340)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_OFFSET UNITYSDK_OFFSET(0x1A23DDC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F3F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23DEA0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F360)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_OFFSET UNITYSDK_OFFSET(0x1A23DDF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F7B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_OFFSET UNITYSDK_OFFSET(0x1A23E390)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F760)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_OFFSET UNITYSDK_OFFSET(0x1A23E310)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F820)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23E410)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F780)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_OFFSET UNITYSDK_OFFSET(0x1A23E340)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F8F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_OFFSET UNITYSDK_OFFSET(0x1A23E550)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F8A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_OFFSET UNITYSDK_OFFSET(0x1A23E4C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F970)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23E5E0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F8C0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_OFFSET UNITYSDK_OFFSET(0x1A23E4F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F4F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_OFFSET UNITYSDK_OFFSET(0x1A23DFE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F460)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_OFFSET UNITYSDK_OFFSET(0x1A23DF30)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_1_OFFSET UNITYSDK_OFFSET(0x1A23F5A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A23E0A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_1_OFFSET UNITYSDK_OFFSET(0x1A23F4B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_OFFSET UNITYSDK_OFFSET(0x1A23DF90)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTTween_TypeDefinitionIndex = 24499;

	class DTTween : public ::System::Object
	{
	public:
		static ::System::Single Ease(::FluffyUnderware::DevTools::DTTween_EasingMethod method, ::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::FluffyUnderware::DevTools::DTTween_EasingMethod, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_OFFSET))(method, t, b, c);
		}

		static ::System::Single Ease_1(::FluffyUnderware::DevTools::DTTween_EasingMethod method, ::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::FluffyUnderware::DevTools::DTTween_EasingMethod, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EASE_1_OFFSET))(method, t, b, c, d);
		}

		static ::System::Single Linear(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_OFFSET))(t, b, c);
		}

		static ::System::Single Linear_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_LINEAR_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single ExpoOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single ExpoOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_EXPOOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CircOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_OFFSET))(t, b, c);
		}

		static ::System::Single CircIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CircInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CircOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single CircOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CIRCOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuadOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuadIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuadInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuadOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuadOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUADOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_OFFSET))(t, b, c);
		}

		static ::System::Single SineOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_OFFSET))(t, b, c);
		}

		static ::System::Single SineIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single SineInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single SineOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single SineOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_SINEOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CubicOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_OFFSET))(t, b, c);
		}

		static ::System::Single CubicIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single CubicInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single CubicOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single CubicOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_CUBICOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuartOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuartIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuartInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuartOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuartOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUARTOUTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuintOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuintIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTIN_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintInOut(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_OFFSET))(t, b, c);
		}

		static ::System::Single QuintInOut_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTINOUT_1_OFFSET))(t, b, c, d);
		}

		static ::System::Single QuintOutIn(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_OFFSET))(t, b, c);
		}

		static ::System::Single QuintOutIn_1(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTTWEEN_QUINTOUTIN_1_OFFSET))(t, b, c, d);
		}
	};
}
