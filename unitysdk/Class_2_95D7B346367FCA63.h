#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_95D7B346367FCA63_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x9689C10)
#define CLASS_2_95D7B346367FCA63_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9689C00)
#define CLASS_2_95D7B346367FCA63_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9689B90)
#define CLASS_2_95D7B346367FCA63_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9689B30)
#define CLASS_2_95D7B346367FCA63__CTOR_OFFSET UNITYSDK_OFFSET(0x9689BF0)

inline static constexpr unsigned int Class_2_95D7B346367FCA63_TypeDefinitionIndex = 43904;

class Class_2_95D7B346367FCA63 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_95D7B346367FCA63*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95D7B346367FCA63_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}
};
