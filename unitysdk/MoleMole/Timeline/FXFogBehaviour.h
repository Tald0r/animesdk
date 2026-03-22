#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXFogBehaviour_Struct_2_52AD02145F5FCE36_13.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xD1A6C20)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD1AA7C0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xD1AA7F0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xD1A78B0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xD1AA7E0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xD1AA7D0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_D1EA460F8BB86D6E_OFFSET UNITYSDK_OFFSET(0xD1A7240)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD1A7600)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD1A9730)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD1A9A50)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AA6A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXFogBehaviour_TypeDefinitionIndex = 46468;

	class FXFogBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXFogBehaviour_Struct_2_52AD02145F5FCE36_13 _methodParm; // 0x18
		::System::Boolean enabled; // 0xD8
		::System::Boolean active_PPFogEnable; // 0xD9
		::System::Boolean use_PPFogEnable; // 0xDA
		::System::Boolean PPFogEnable; // 0xDB
		::System::Boolean active_PPFogStartDistance; // 0xDC
		::System::Boolean use_PPFogStartDistance; // 0xDD
		::System::Single PPFogStartDistance; // 0xE0
		::System::Boolean active_PPFogEndDistance; // 0xE4
		::System::Boolean use_PPFogEndDistance; // 0xE5
		::System::Single PPFogEndDistance; // 0xE8
		::System::Boolean active_PPFogEnd2Distance; // 0xEC
		::System::Boolean use_PPFogEnd2Distance; // 0xED
		::System::Single PPFogEnd2Distance; // 0xF0
		::System::Boolean active_PPFogColor; // 0xF4
		::System::Boolean use_PPFogColor; // 0xF5
		::UnityEngine::Color PPFogColor; // 0xF8
		::System::Boolean active_PPFogMaxDensity; // 0x108
		::System::Boolean use_PPFogMaxDensity; // 0x109
		::System::Single PPFogMaxDensity; // 0x10C
		::System::Boolean active_fxFogOverrideCustomData; // 0x110
		::System::Boolean use_fxFogOverrideCustomData; // 0x111
		::System::Boolean fxFogOverrideCustomData; // 0x112
		::System::Boolean active_fxFog; // 0x113
		::System::Boolean use_fxFog; // 0x114
		::System::Boolean fxFog; // 0x115
		::System::Boolean active_fxFogStart; // 0x116
		::System::Boolean use_fxFogStart; // 0x117
		::System::Single fxFogStart; // 0x118
		::System::Boolean active_fxFogStartColor; // 0x11C
		::System::Boolean use_fxFogStartColor; // 0x11D
		::UnityEngine::Color fxFogStartColor; // 0x120
		::System::Boolean active_fxFogDistance; // 0x130
		::System::Boolean use_fxFogDistance; // 0x131
		::System::Single fxFogDistance; // 0x134
		::System::Boolean active_fxFogEndColor; // 0x138
		::System::Boolean use_fxFogEndColor; // 0x139
		::UnityEngine::Color fxFogEndColor; // 0x13C
		::System::Boolean active_fxFogDistance2; // 0x14C
		::System::Boolean use_fxFogDistance2; // 0x14D
		::System::Single fxFogDistance2; // 0x150
		::System::Boolean active_fxFogFinalColor; // 0x154
		::System::Boolean use_fxFogFinalColor; // 0x155
		::UnityEngine::Color fxFogFinalColor; // 0x158
		::System::Boolean active_fxFogForCharacter; // 0x168
		::System::Boolean use_fxFogForCharacter; // 0x169
		::System::Boolean fxFogForCharacter; // 0x16A
		::System::Boolean active_fxFogStartForChar; // 0x16B
		::System::Boolean use_fxFogStartForChar; // 0x16C
		::System::Single fxFogStartForChar; // 0x170
		::System::Boolean active_fxFogDistanceForChar; // 0x174
		::System::Boolean use_fxFogDistanceForChar; // 0x175
		::System::Single fxFogDistanceForChar; // 0x178
		::System::Boolean active_fxFogIntensityForSky; // 0x17C
		::System::Boolean use_fxFogIntensityForSky; // 0x17D
		::System::Single fxFogIntensityForSky; // 0x180
		::System::Boolean active_fxVolumetricFogIntensity; // 0x184
		::System::Boolean use_fxVolumetricFogIntensity; // 0x185
		::System::Single fxVolumetricFogIntensity; // 0x188
		::System::Boolean active_fxFogIntensityForSceneAndChar; // 0x18C
		::System::Boolean use_fxFogIntensityForSceneAndChar; // 0x18D
		::System::Single fxFogIntensityForSceneAndChar; // 0x190
		::System::Boolean active_fxFogFixFxFogFinalColorANotWork; // 0x194
		::System::Boolean use_fxFogFixFxFogFinalColorANotWork; // 0x195
		::System::Boolean fxFogFixFxFogFinalColorANotWork; // 0x196
		::System::Boolean active_fxFogKeepCharFogSameAsScene; // 0x197
		::System::Boolean use_fxFogKeepCharFogSameAsScene; // 0x198
		::System::Boolean fxFogKeepCharFogSameAsScene; // 0x199
		::UnityEngine::Rendering::Universal::FXFog* _FXFog; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::FXFog* Method_4_D1EA460F8BB86D6E(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXFog*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_D1EA460F8BB86D6E_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
