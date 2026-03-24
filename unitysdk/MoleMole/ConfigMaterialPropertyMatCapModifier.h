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

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xD7CFB70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xD7CFAA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xD7D5900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xD7CF880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xD7CFD60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xD7CFC30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xD7CFE10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xD7D2D30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xD7D15F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xD7CFFF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D5B20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xD7D5B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0xD7D5B40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xD7D5B50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xD7D5BB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xD7D5C10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xD7D5C80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xD7D5D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 43023;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xA8
		::System::Single _MatCapAlphaBurstFxDefault; // 0xD8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0xDC
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0xF4
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0xF7
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0xFA
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x100
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x108
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0x110
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x13C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0x144
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x158
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x160
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x178
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x180
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x198
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0x1B0
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x1E0
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x1F4
		::System::Single _MatCapAlphaBurstFxRef; // 0x20C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0x210
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x228
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x230
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0x238
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0x240
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0x254
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x26C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x284
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0x298
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0x2B0
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x2C8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x2DC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x2F4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x2FC

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
