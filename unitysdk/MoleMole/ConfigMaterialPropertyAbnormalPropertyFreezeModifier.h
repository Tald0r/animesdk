#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE0C8FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE0C8E80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE0CD2A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE0C87A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE0C9220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE0C9060)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE0C9300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xE0CB300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xE0CA3B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xE0C95A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CD540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE0CD580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE0CD590)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE0CD5A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE0CD600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE0CD660)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE0CD6D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE0CD780)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyFreezeModifier_TypeDefinitionIndex = 60319;

	class ConfigMaterialPropertyAbnormalPropertyFreezeModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xD8
		::System::Single _FresnelFlashingRef; // 0x108
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x10C
		::UnityEngine::Color _PropertyColorRef; // 0x124
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x134
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x13C
		::UnityEngine::Color _DetailColorRef; // 0x150
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x160
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x168
		::UnityEngine::Color _FresnelColorRef; // 0x180
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x190
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x198
		::UnityEngine::Color _DetailColorDefault; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x1BC
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x1FC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x204
		::UnityEngine::Color _PropertyColorDefault; // 0x20C
		::System::Single _FresnelFlashingDefault; // 0x21C
		::UnityEngine::Color _FresnelColorDefault; // 0x220
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyFreeze; // 0x230
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x233
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x236
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x23C
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x244
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
