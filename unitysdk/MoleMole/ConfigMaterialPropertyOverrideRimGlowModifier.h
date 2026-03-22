#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE44FBE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE44FAC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE4523D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE44F3E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE44FE60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE44FCA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE44FF40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xE4512B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xE4509E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xE4501D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4524F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE452520)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE452530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE452540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE4525A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE452600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE452670)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE452720)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_TypeDefinitionIndex = 59295;

	class ConfigMaterialPropertyOverrideRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::System::Single _OverrideRimGlowUseUV2Ref; // 0x78
		::UnityEngine::Color _FresnelColorDefault; // 0x7C
		::UnityEngine::Color _DetailColorRef; // 0x8C
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x9C
		::MoleMole::MaterialPropertyModifierValueColor _OverrideRimGlowColor; // 0xB0
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0xC4
		::UnityEngine::Color _FresnelColorRef; // 0xCC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0xDC
		::MoleMole::MaterialPropertyModifierValueVector _OverrideRimGlowSpeed; // 0xE4
		::System::Single _OverrideRimGlowUseUV2Default; // 0xFC
		::UnityEngine::Color _OverrideRimGlowColorDefault; // 0x100
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x110
		::UnityEngine::Color _OverrideRimGlowColorRef; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _OverrideRimGlowUseUV2; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x130
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x138
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _OverrideRimGlowMode; // 0x14C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode _PropertyMaskChannel; // 0x14F
		::MoleMole::MaterialPropertyModifierValueBool _OverrideRimGlow; // 0x152
		::UnityEngine::Color _DetailColorDefault; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
