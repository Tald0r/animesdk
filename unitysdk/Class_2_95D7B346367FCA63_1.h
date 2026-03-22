#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x673F1B0)
#define CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x673F1C0)
#define CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x673F1A0)
#define CLASS_2_95D7B346367FCA63_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x673EF80)
#define CLASS_2_95D7B346367FCA63_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x673EDE0)
#define CLASS_2_95D7B346367FCA63_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x673F120)
#define CLASS_2_95D7B346367FCA63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x673F190)

inline static constexpr unsigned int Class_2_95D7B346367FCA63_1_TypeDefinitionIndex = 56439;

class Class_2_95D7B346367FCA63_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_95D7B346367FCA63_1*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
