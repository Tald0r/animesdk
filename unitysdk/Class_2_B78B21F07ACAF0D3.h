#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_611;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace MoleMole::Config { class ConfigTriggerControlTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_05007635340C6239_OFFSET UNITYSDK_OFFSET(0x6577F00)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x65770E0)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_6EA5794C5301E81E_OFFSET UNITYSDK_OFFSET(0x6578740)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x6578720)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6577D00)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_9C15DF1B5DB32691_OFFSET UNITYSDK_OFFSET(0x65774E0)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_A4B772292CEAD156_OFFSET UNITYSDK_OFFSET(0x6578730)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_B0C43CECDD765C65_OFFSET UNITYSDK_OFFSET(0x6577D10)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x6577F90)
#define CLASS_2_B78B21F07ACAF0D3_METHOD_2_FD2E49E2AD5698EE_OFFSET UNITYSDK_OFFSET(0x6577F10)
#define CLASS_2_B78B21F07ACAF0D3_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6576C40)
#define CLASS_2_B78B21F07ACAF0D3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x6576B00)
#define CLASS_2_B78B21F07ACAF0D3__CTOR_OFFSET UNITYSDK_OFFSET(0x6576FD0)

inline static constexpr unsigned int Class_2_B78B21F07ACAF0D3_TypeDefinitionIndex = 62421;

class Class_2_B78B21F07ACAF0D3 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_B78B21F07ACAF0D3*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoTriggerEventDispatcher*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_611*>* Field_2_1; // 0x28
	::MoleMole::Config::ConfigTriggerControlTrait* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Boolean Method_2_9C15DF1B5DB32691(::Foundation::ViewObject::CombineTriggerListenParam a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_9C15DF1B5DB32691_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_B0C43CECDD765C65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_B0C43CECDD765C65_OFFSET))(this, a1);
	}

	::System::Void Method_2_05007635340C6239(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_05007635340C6239_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD2E49E2AD5698EE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_FD2E49E2AD5698EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTriggerControlTrait* Method_2_A4B772292CEAD156()
	{
		return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_A4B772292CEAD156_OFFSET))(this);
	}

	::System::Void Method_2_6EA5794C5301E81E(::MoleMole::Config::ConfigTriggerControlTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_6EA5794C5301E81E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B78B21F07ACAF0D3_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}
};
