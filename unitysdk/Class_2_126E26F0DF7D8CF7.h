#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xD073060)
#define CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xD073070)
#define CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD073050)
#define CLASS_2_126E26F0DF7D8CF7_ONATTACH_OFFSET UNITYSDK_OFFSET(0xD072D10)
#define CLASS_2_126E26F0DF7D8CF7_ONDETACH_OFFSET UNITYSDK_OFFSET(0xD072E60)
#define CLASS_2_126E26F0DF7D8CF7_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD072FB0)
#define CLASS_2_126E26F0DF7D8CF7__CTOR_OFFSET UNITYSDK_OFFSET(0xD073040)

inline static constexpr unsigned int Class_2_126E26F0DF7D8CF7_TypeDefinitionIndex = 56624;

class Class_2_126E26F0DF7D8CF7 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_126E26F0DF7D8CF7*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Boolean Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::Int32 Field_2_3; // 0x34
	::System::Int32 Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_126E26F0DF7D8CF7_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
