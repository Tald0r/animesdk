#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_074C7A4BFE9E4CF4_Enum_3_F25456077B59DF83.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_074C7A4BFE9E4CF4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC49DCE0)
#define CLASS_2_074C7A4BFE9E4CF4_METHOD_2_92FDB3FAFF4D4596_OFFSET UNITYSDK_OFFSET(0xC49DF40)
#define CLASS_2_074C7A4BFE9E4CF4_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xC49DE90)
#define CLASS_2_074C7A4BFE9E4CF4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC49E270)
#define CLASS_2_074C7A4BFE9E4CF4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC49E210)
#define CLASS_2_074C7A4BFE9E4CF4__CCTOR_OFFSET UNITYSDK_OFFSET(0xC49DE10)
#define CLASS_2_074C7A4BFE9E4CF4__CTOR_OFFSET UNITYSDK_OFFSET(0xC49DE80)

inline static constexpr unsigned int Class_2_074C7A4BFE9E4CF4_TypeDefinitionIndex = 48042;

class Class_2_074C7A4BFE9E4CF4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xB; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x20
	::Class_2_074C7A4BFE9E4CF4_Enum_3_F25456077B59DF83 Field_2_0; // 0x28
	::MoleMole::Config::AidAttackType Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_92FDB3FAFF4D4596(::Class_2_074C7A4BFE9E4CF4_Enum_3_F25456077B59DF83 a1, ::MoleMole::Config::AidAttackType a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_074C7A4BFE9E4CF4_Enum_3_F25456077B59DF83, ::MoleMole::Config::AidAttackType, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4_METHOD_2_92FDB3FAFF4D4596_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074C7A4BFE9E4CF4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
