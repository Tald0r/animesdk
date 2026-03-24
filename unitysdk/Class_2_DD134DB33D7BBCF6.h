#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DD134DB33D7BBCF6_METHOD_2_0903930C3497DAF5_OFFSET UNITYSDK_OFFSET(0xB009130)
#define CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xB0095F0)
#define CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xB009600)
#define CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0xB009610)
#define CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB0095E0)
#define CLASS_2_DD134DB33D7BBCF6_ONATTACH_OFFSET UNITYSDK_OFFSET(0xB009060)
#define CLASS_2_DD134DB33D7BBCF6_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB0094F0)
#define CLASS_2_DD134DB33D7BBCF6_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB0090C0)
#define CLASS_2_DD134DB33D7BBCF6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB009560)
#define CLASS_2_DD134DB33D7BBCF6__CTOR_OFFSET UNITYSDK_OFFSET(0xB0095D0)

inline static constexpr unsigned int Class_2_DD134DB33D7BBCF6_TypeDefinitionIndex = 49999;

class Class_2_DD134DB33D7BBCF6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_DD134DB33D7BBCF6*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_0903930C3497DAF5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_METHOD_2_0903930C3497DAF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD134DB33D7BBCF6_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}
};
