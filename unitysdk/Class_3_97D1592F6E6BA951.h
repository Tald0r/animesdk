#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_97D1592F6E6BA951_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x80EE310)
#define CLASS_3_97D1592F6E6BA951_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x80EE4A0)
#define CLASS_3_97D1592F6E6BA951_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x80EE400)
#define CLASS_3_97D1592F6E6BA951_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x80EE2B0)
#define CLASS_3_97D1592F6E6BA951__CCTOR_OFFSET UNITYSDK_OFFSET(0x80EE370)
#define CLASS_3_97D1592F6E6BA951__CTOR_OFFSET UNITYSDK_OFFSET(0x80EE3F0)

inline static constexpr unsigned int Class_3_97D1592F6E6BA951_TypeDefinitionIndex = 75186;

class Class_3_97D1592F6E6BA951 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x33; // 0x0
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_0; // 0x48
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_4; // 0x50
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_1; // 0x58
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_3; // 0x60
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_2; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_97D1592F6E6BA951* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_97D1592F6E6BA951*(*)())((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97D1592F6E6BA951_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
