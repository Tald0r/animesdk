#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EDF96A54E64038DA_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6F19610)
#define CLASS_2_EDF96A54E64038DA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F19790)
#define CLASS_2_EDF96A54E64038DA_METHOD_2_DD43AB0600B8D3A0_OFFSET UNITYSDK_OFFSET(0x6F196C0)
#define CLASS_2_EDF96A54E64038DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6F19590)
#define CLASS_2_EDF96A54E64038DA__CTOR_OFFSET UNITYSDK_OFFSET(0x6F19600)

inline static constexpr unsigned int Class_2_EDF96A54E64038DA_TypeDefinitionIndex = 56181;

class Class_2_EDF96A54E64038DA : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x33; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x20
	::Class_1_B7E341C5F1A6F199* Field_2_3; // 0x28
	::System::Int32 Field_2_1; // 0x30
	::System::UInt32 Field_2_0; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EDF96A54E64038DA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDF96A54E64038DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDF96A54E64038DA_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_DD43AB0600B8D3A0(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_EDF96A54E64038DA_METHOD_2_DD43AB0600B8D3A0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDF96A54E64038DA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
