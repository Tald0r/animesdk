#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_05A54A90AB3DB6AB_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x93E58A0)
#define CLASS_2_05A54A90AB3DB6AB_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x93E5A90)
#define CLASS_2_05A54A90AB3DB6AB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x93E5CF0)
#define CLASS_2_05A54A90AB3DB6AB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x93E5B40)
#define CLASS_2_05A54A90AB3DB6AB_METHOD_2_D1CAB6766E623E4E_OFFSET UNITYSDK_OFFSET(0x93E5BB0)
#define CLASS_2_05A54A90AB3DB6AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x93E5A10)
#define CLASS_2_05A54A90AB3DB6AB__CTOR_OFFSET UNITYSDK_OFFSET(0x93E5A80)

inline static constexpr unsigned int Class_2_05A54A90AB3DB6AB_TypeDefinitionIndex = 40746;

class Class_2_05A54A90AB3DB6AB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x19; // 0x0
	::MoleMole::EntityHandle Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D1CAB6766E623E4E(::MoleMole::EntityHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB_METHOD_2_D1CAB6766E623E4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05A54A90AB3DB6AB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
