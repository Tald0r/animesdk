#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x7024AF0)
#define CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x7024B00)
#define CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7024AE0)
#define CLASS_2_9833817670A413B2_ONATTACH_OFFSET UNITYSDK_OFFSET(0x70244E0)
#define CLASS_2_9833817670A413B2_ONDETACH_OFFSET UNITYSDK_OFFSET(0x70248B0)
#define CLASS_2_9833817670A413B2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x7024A60)
#define CLASS_2_9833817670A413B2__CTOR_OFFSET UNITYSDK_OFFSET(0x7024AD0)

inline static constexpr unsigned int Class_2_9833817670A413B2_TypeDefinitionIndex = 48005;

class Class_2_9833817670A413B2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_9833817670A413B2*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x20
	::System::Int32 Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x2C
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9833817670A413B2_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
