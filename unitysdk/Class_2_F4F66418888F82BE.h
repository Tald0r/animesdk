#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x70C3CC0)
#define CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x70C3CD0)
#define CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x70C3CB0)
#define CLASS_2_F4F66418888F82BE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x70C38E0)
#define CLASS_2_F4F66418888F82BE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x70C3B30)
#define CLASS_2_F4F66418888F82BE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x70C3940)
#define CLASS_2_F4F66418888F82BE__CTOR_OFFSET UNITYSDK_OFFSET(0x70C3CA0)

inline static constexpr unsigned int Class_2_F4F66418888F82BE_TypeDefinitionIndex = 52041;

class Class_2_F4F66418888F82BE : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_F4F66418888F82BE*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F66418888F82BE_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
