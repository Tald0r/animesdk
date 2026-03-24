#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_DB663931210BBC27_14.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_271E6243562E73F4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA89C490)
#define CLASS_3_271E6243562E73F4_METHOD_3_7B60648B85AB9CCA_OFFSET UNITYSDK_OFFSET(0xA89C6C0)
#define CLASS_3_271E6243562E73F4_METHOD_3_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0xA89C980)
#define CLASS_3_271E6243562E73F4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA89C920)
#define CLASS_3_271E6243562E73F4_METHOD_3_ACC57A349C853736_OFFSET UNITYSDK_OFFSET(0xA89C850)
#define CLASS_3_271E6243562E73F4_METHOD_3_BF6A40F21F41755D_OFFSET UNITYSDK_OFFSET(0xA89C630)
#define CLASS_3_271E6243562E73F4_METHOD_3_C5A8467866350560_OFFSET UNITYSDK_OFFSET(0xA89CA70)
#define CLASS_3_271E6243562E73F4_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xA89CA50)
#define CLASS_3_271E6243562E73F4_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA89C580)
#define CLASS_3_271E6243562E73F4_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA89CA60)
#define CLASS_3_271E6243562E73F4_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA89C620)
#define CLASS_3_271E6243562E73F4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA89C300)
#define CLASS_3_271E6243562E73F4_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA89C380)
#define CLASS_3_271E6243562E73F4__CCTOR_OFFSET UNITYSDK_OFFSET(0xA89C4F0)
#define CLASS_3_271E6243562E73F4__CTOR_OFFSET UNITYSDK_OFFSET(0xA89C570)

inline static constexpr unsigned int Class_3_271E6243562E73F4_TypeDefinitionIndex = 52373;

class Class_3_271E6243562E73F4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0x9; // 0x0
	::MoleMole::Battle::Entity* Field_3_0; // 0x48
	::System::Action_3<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*>* Field_3_8; // 0x50
	::System::Action_5<::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double>* Field_3_9; // 0x58
	::MoleMole::Battle::Entity* Field_3_2; // 0x60
	::System::Boolean Field_3_1; // 0x68
	::System::Boolean Field_3_3; // 0x69
	::System::Boolean Field_3_7; // 0x6A
	::System::UInt32 Field_3_6; // 0x6C
	::Enum_3_DB663931210BBC27_14 Field_3_4; // 0x70
	::MoleMole::Config::BuddyTeamType Field_3_5; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_ONCLEAN_OFFSET))(this);
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_271E6243562E73F4* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_271E6243562E73F4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_BF6A40F21F41755D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_BF6A40F21F41755D_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_7B60648B85AB9CCA()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_7B60648B85AB9CCA_OFFSET))(this);
	}

	::System::Void Method_3_ACC57A349C853736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_ACC57A349C853736_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C5A8467866350560(::Enum_3_DB663931210BBC27_14 a1, ::MoleMole::Config::BuddyTeamType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_14, ::MoleMole::Config::BuddyTeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_271E6243562E73F4_METHOD_3_C5A8467866350560_OFFSET))(this, a1, a2, a3);
	}
};
