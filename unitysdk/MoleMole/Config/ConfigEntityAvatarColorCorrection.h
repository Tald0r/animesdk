#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENTGRADIENT_OFFSET UNITYSDK_OFFSET(0xEC3ED80)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENT_OFFSET UNITYSDK_OFFSET(0xEC3E3F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0xEC3F010)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETFRONTTINT_OFFSET UNITYSDK_OFFSET(0xEC3E570)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETOUTLINETINT_OFFSET UNITYSDK_OFFSET(0xEC3EEC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0xEC3EF70)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETREVERTSATURATION_OFFSET UNITYSDK_OFFSET(0xEC3F150)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0xEC3F0B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0xEC3ECD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWTINT_OFFSET UNITYSDK_OFFSET(0xEC3EB50)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0xEC3E9D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0xEC3E860)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINFRONTTINT_OFFSET UNITYSDK_OFFSET(0xEC3E4B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0xEC3EC10)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWTINT_OFFSET UNITYSDK_OFFSET(0xEC3EA90)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0xEC3E910)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0xEC3E7B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSSSTINT_OFFSET UNITYSDK_OFFSET(0xEC3E630)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSSSTINT_OFFSET UNITYSDK_OFFSET(0xEC3E6F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETUSESHADOWTINTASOUTLINE_OFFSET UNITYSDK_OFFSET(0xEC3EE30)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3F1F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAvatarColorCorrection_TypeDefinitionIndex = 67316;

	class ConfigEntityAvatarColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* revertSaturation; // 0x40
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x48
		::MoleMole::Config::ScreenEffectColor* shadowFadeTint; // 0x50
		::MoleMole::Config::ScreenEffectColor* outlineTint; // 0x58
		::MoleMole::Config::ScreenEffectColor* skinShallowTint; // 0x60
		::MoleMole::Config::ScreenEffectColor* shallowTint; // 0x68
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x70
		::MoleMole::Config::ScreenEffectColor* ambientGradient; // 0x78
		::MoleMole::Config::ScreenEffectColor* frontTint; // 0x80
		::MoleMole::Config::ScreenEffectColor* shallowFadeTint; // 0x88
		::MoleMole::Config::ScreenEffectColor* skinSssTint; // 0x90
		::MoleMole::Config::ScreenEffectColor* sssTint; // 0x98
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0xA0
		::MoleMole::Config::ScreenEffectColor* shadowTint; // 0xA8
		::MoleMole::Config::ScreenEffectColor* skinShadowFadeTint; // 0xB0
		::MoleMole::Config::ScreenEffectColor* skinFrontTint; // 0xB8
		::MoleMole::Config::ScreenEffectColor* skinShallowFadeTint; // 0xC0
		::MoleMole::Config::ScreenEffectColor* skinShadowTint; // 0xC8
		::MoleMole::Config::ScreenEffectColor* ambient; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowFadeTintHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType ambientHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType shallowTintHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType sssTintHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType shallowFadeTintHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType useShadowTintAsOutlineHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0xF4
		::System::Boolean useShadowTintAsOutline; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowTintHandleType; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType skinSssTintHandleType; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType frontTintHandleType; // 0x104
		::MoleMole::Config::ScreenEffectFieldHandleType skinFrontTintHandleType; // 0x108
		::MoleMole::Config::ScreenEffectFieldHandleType ambientGradientHandleType; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x110
		::MoleMole::Config::ScreenEffectFieldHandleType shadowFadeTintHandleType; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType outlineTintHandleType; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowTintHandleType; // 0x11C
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowFadeTintHandleType; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType shadowTintHandleType; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType revertSaturationHandleType; // 0x128

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

		::System::Boolean GetRevertSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETREVERTSATURATION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
