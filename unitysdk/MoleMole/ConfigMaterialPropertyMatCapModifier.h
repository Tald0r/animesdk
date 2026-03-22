#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE448FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE448EB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE44EEF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE448B40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE4491D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE449060)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE449290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xE44C320)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xE44AB40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xE4494B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xE44F110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xE44F130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xE44F140)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xE44F150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xE44F1B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xE44F210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xE44F280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xE44F330)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 41998;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0xE0
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0xE8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0xF0
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x104
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0x11C
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x134
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x13C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x144
		::System::Single _MatCapAlphaBurstFxDefault; // 0x15C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0x160
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0x178
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0x17B
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0x17E
		::UnityEngine::Color _ColorOverrideAlbedoDefault; // 0x184
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0x194
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x1C0
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x208
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0x210
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x228
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x23C
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x254
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x26C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0x284
		::MoleMole::MaterialPropertyModifierValueColor _ColorOverrideAlbedo; // 0x29C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x2B0
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0x2C4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0x2CC
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x2E4
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x2FC
		::UnityEngine::Color _ColorOverrideAlbedoRef; // 0x304
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x314
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0x32C
		::System::Single _MatCapAlphaBurstFxRef; // 0x344

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
