#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENTGRADIENT_OFFSET UNITYSDK_OFFSET(0xC345690)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENT_OFFSET UNITYSDK_OFFSET(0xC344D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0xC345920)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETFRONTTINT_OFFSET UNITYSDK_OFFSET(0xC344E90)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETOUTLINETINT_OFFSET UNITYSDK_OFFSET(0xC3457D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0xC345880)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0xC3459C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0xC3455D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWTINT_OFFSET UNITYSDK_OFFSET(0xC345470)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0xC3452F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0xC345180)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINFRONTTINT_OFFSET UNITYSDK_OFFSET(0xC344DE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0xC345520)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWTINT_OFFSET UNITYSDK_OFFSET(0xC3453B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0xC345230)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0xC3450C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSSSTINT_OFFSET UNITYSDK_OFFSET(0xC344F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSSSTINT_OFFSET UNITYSDK_OFFSET(0xC345000)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETUSESHADOWTINTASOUTLINE_OFFSET UNITYSDK_OFFSET(0xC345740)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC345A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAvatarColorCorrection_TypeDefinitionIndex = 48879;

	class ConfigEntityAvatarColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* ambientGradient; // 0x40
		::MoleMole::Config::ScreenEffectColor* outlineTint; // 0x48
		::MoleMole::Config::ScreenEffectColor* shallowTint; // 0x50
		::MoleMole::Config::ScreenEffectColor* skinShadowFadeTint; // 0x58
		::MoleMole::Config::ScreenEffectColor* skinFrontTint; // 0x60
		::MoleMole::Config::ScreenEffectColor* skinSssTint; // 0x68
		::MoleMole::Config::ScreenEffectColor* shadowTint; // 0x70
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x78
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x80
		::MoleMole::Config::ScreenEffectColor* shadowFadeTint; // 0x88
		::MoleMole::Config::ScreenEffectColor* ambient; // 0x90
		::MoleMole::Config::ScreenEffectColor* frontTint; // 0x98
		::MoleMole::Config::ScreenEffectColor* skinShallowFadeTint; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0xA8
		::MoleMole::Config::ScreenEffectColor* skinShadowTint; // 0xB0
		::MoleMole::Config::ScreenEffectColor* sssTint; // 0xB8
		::MoleMole::Config::ScreenEffectColor* skinShallowTint; // 0xC0
		::MoleMole::Config::ScreenEffectColor* shallowFadeTint; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType sssTintHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType frontTintHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType shadowFadeTintHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType shadowTintHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType ambientHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowFadeTintHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineTintHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType skinSssTintHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType shallowFadeTintHandleType; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType useShadowTintAsOutlineHandleType; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType shallowTintHandleType; // 0x104
		::MoleMole::Config::ScreenEffectFieldHandleType skinFrontTintHandleType; // 0x108
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowTintHandleType; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowFadeTintHandleType; // 0x110
		::MoleMole::Config::ScreenEffectFieldHandleType ambientGradientHandleType; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowTintHandleType; // 0x118
		::System::Boolean useShadowTintAsOutline; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetAmbient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinFrontTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINFRONTTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFrontTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETFRONTTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinSssTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSSSTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSssTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSSSTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShallowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShallowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShallowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShallowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShadowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShadowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShadowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShadowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetAmbientGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENTGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseShadowTintAsOutline(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETUSESHADOWTINTASOUTLINE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETOUTLINETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
