#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_4E5C94CC0A8DDC98_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x84FA640)
#define CLASS_2_4E5C94CC0A8DDC98_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x84FA7F0)
#define CLASS_2_4E5C94CC0A8DDC98_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x84FABE0)
#define CLASS_2_4E5C94CC0A8DDC98_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x84FAB70)
#define CLASS_2_4E5C94CC0A8DDC98_METHOD_2_D336B58A8419F839_OFFSET UNITYSDK_OFFSET(0x84FA8A0)
#define CLASS_2_4E5C94CC0A8DDC98__CCTOR_OFFSET UNITYSDK_OFFSET(0x84FA770)
#define CLASS_2_4E5C94CC0A8DDC98__CTOR_OFFSET UNITYSDK_OFFSET(0x84FA7E0)

inline static constexpr unsigned int Class_2_4E5C94CC0A8DDC98_TypeDefinitionIndex = 49209;

class Class_2_4E5C94CC0A8DDC98 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xC5; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x20
	::MoleMole::Config::RelayAttackType Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_D336B58A8419F839(::MoleMole::Config::RelayAttackType a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RelayAttackType, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98_METHOD_2_D336B58A8419F839_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E5C94CC0A8DDC98_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
