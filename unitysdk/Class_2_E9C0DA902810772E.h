#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80.h"
#include "unitysdk/Class_2_E9C0DA902810772E_Enum_3_5D9BA47FC9988B40.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E9C0DA902810772E_METHOD_2_0B140FE6A6E67173_OFFSET UNITYSDK_OFFSET(0xBF75270)
#define CLASS_2_E9C0DA902810772E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBF74FB0)
#define CLASS_2_E9C0DA902810772E_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xBF75160)
#define CLASS_2_E9C0DA902810772E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBF755B0)
#define CLASS_2_E9C0DA902810772E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBF75210)
#define CLASS_2_E9C0DA902810772E__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF750D0)
#define CLASS_2_E9C0DA902810772E__CTOR_OFFSET UNITYSDK_OFFSET(0xBF75140)

inline static constexpr unsigned int Class_2_E9C0DA902810772E_TypeDefinitionIndex = 42972;

class Class_2_E9C0DA902810772E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_9 = 0x1A; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_6; // 0x20
	::Enum_3_C2761E57EE0B71AF Field_2_2; // 0x28
	::Enum_3_B7E66D8760FABD1A Field_2_4; // 0x2C
	::Enum_3_1003E4A6E5149B9E Field_2_1; // 0x30
	::Enum_3_3DFF974943A619B7 Field_2_5; // 0x34
	::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 Field_2_8; // 0x38
	::MoleMole::Config::AidAttackType Field_2_3; // 0x3C
	::Class_2_E9C0DA902810772E_Enum_3_5D9BA47FC9988B40 Field_2_0; // 0x40
	::System::Boolean Field_2_7; // 0x44

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0B140FE6A6E67173(::Class_2_E9C0DA902810772E_Enum_3_5D9BA47FC9988B40 a1, ::Enum_3_1003E4A6E5149B9E a2, ::Enum_3_C2761E57EE0B71AF a3, ::MoleMole::Config::AidAttackType a4, ::Enum_3_B7E66D8760FABD1A a5, ::Enum_3_3DFF974943A619B7 a6, ::System::Collections::Generic::HashSet_1<::System::String*>* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C0DA902810772E_Enum_3_5D9BA47FC9988B40, ::Enum_3_1003E4A6E5149B9E, ::Enum_3_C2761E57EE0B71AF, ::MoleMole::Config::AidAttackType, ::Enum_3_B7E66D8760FABD1A, ::Enum_3_3DFF974943A619B7, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E_METHOD_2_0B140FE6A6E67173_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C0DA902810772E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
