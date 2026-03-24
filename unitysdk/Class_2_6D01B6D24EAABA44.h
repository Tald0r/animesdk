#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D01B6D24EAABA44_METHOD_2_950708B9269E54C1_OFFSET UNITYSDK_OFFSET(0x73A39F0)
#define CLASS_2_6D01B6D24EAABA44_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x73A3940)
#define CLASS_2_6D01B6D24EAABA44_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x73A3A90)
#define CLASS_2_6D01B6D24EAABA44__CCTOR_OFFSET UNITYSDK_OFFSET(0x73A38C0)
#define CLASS_2_6D01B6D24EAABA44__CTOR_OFFSET UNITYSDK_OFFSET(0x73A3930)

inline static constexpr unsigned int Class_2_6D01B6D24EAABA44_TypeDefinitionIndex = 76620;

class Class_2_6D01B6D24EAABA44 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x17; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D01B6D24EAABA44__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D01B6D24EAABA44__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D01B6D24EAABA44_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_950708B9269E54C1(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_2_6D01B6D24EAABA44_METHOD_2_950708B9269E54C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D01B6D24EAABA44_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
