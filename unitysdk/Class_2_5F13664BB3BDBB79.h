#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x948DF20)
#define CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x948DF30)
#define CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x948DF10)
#define CLASS_2_5F13664BB3BDBB79_ONATTACH_OFFSET UNITYSDK_OFFSET(0x948DB60)
#define CLASS_2_5F13664BB3BDBB79_ONDETACH_OFFSET UNITYSDK_OFFSET(0x948DD50)
#define CLASS_2_5F13664BB3BDBB79_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x948DE90)
#define CLASS_2_5F13664BB3BDBB79__CTOR_OFFSET UNITYSDK_OFFSET(0x948DF00)

inline static constexpr unsigned int Class_2_5F13664BB3BDBB79_TypeDefinitionIndex = 49566;

class Class_2_5F13664BB3BDBB79 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_5F13664BB3BDBB79*>
{
public:
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F13664BB3BDBB79_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
