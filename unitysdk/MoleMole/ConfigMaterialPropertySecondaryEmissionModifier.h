#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE0CF960)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE0CF880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE0D2340)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE0CF2E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE0CFB80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE0CFA20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE0CFC40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xE0D10A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xE0D0720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xE0CFE60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D24E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE0D2500)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE0D2510)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE0D2520)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE0D2580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE0D25E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE0D2650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE0D2700)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryEmissionModifier_TypeDefinitionIndex = 42688;

	class ConfigMaterialPropertySecondaryEmissionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryEmissionTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryEmissionMaskTex; // 0x78
		::UnityEngine::Color _SecondaryEmissionColorDefault; // 0xA8
		::UnityEngine::Color _MatCapColorTintFxDefault; // 0xB8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0xC8
		::UnityEngine::Color _MatCapColorTintFxRef; // 0xD0
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0xE0
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmissionMultiplyAlbedo; // 0xE8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode _MatCapFX; // 0xEB
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmissionUseUV2; // 0xEE
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmission; // 0xF1
		::MoleMole::MaterialPropertyModifierValueColor _SecondaryEmissionColor; // 0xF4
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x108
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryEmissionTexSpeed; // 0x110
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType _SecondaryEmissionChannel; // 0x128
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _SecondaryEmissionMaskChannel; // 0x12B
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x130
		::UnityEngine::Color _SecondaryEmissionColorRef; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
