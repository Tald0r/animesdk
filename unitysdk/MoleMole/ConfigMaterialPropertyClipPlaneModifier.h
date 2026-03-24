#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x9D17C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9D17B50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x9D19870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x9D179A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x9D17DB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x9D17CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x9D17E50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x9D18CA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x9D185F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x9D17FD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D19910)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x9D19920)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x9D19930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x9D19940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x9D199A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x9D19A00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x9D19A70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x9D19B20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyClipPlaneModifier_TypeDefinitionIndex = 49293;

	class ConfigMaterialPropertyClipPlaneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _HardLightWidth; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _PlaneClipReverse; // 0x50
		::MoleMole::MaterialPropertyModifierValueBool _HardLight; // 0x53
		::MoleMole::MaterialPropertyModifierValueBool _ReversePlaneXZ; // 0x56
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlane; // 0x59
		::MoleMole::MaterialPropertyModifierValueColor _SoftLightColor; // 0x5C
		::MoleMole::MaterialPropertyModifierValueColor _HardLightColor; // 0x70
		::MoleMole::MaterialPropertyModifierValueFloat _SoftLightWidth; // 0x84
		::MoleMole::MaterialPropertyModifierValueBool _SoftLight; // 0x8C
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlaneXZ; // 0x8F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
