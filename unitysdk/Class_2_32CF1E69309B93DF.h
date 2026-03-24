#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x961D060)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x961D070)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x961CFD0)
#define CLASS_2_32CF1E69309B93DF_METHOD_2_E224AE88466E0A6C_OFFSET UNITYSDK_OFFSET(0x961CFE0)
#define CLASS_2_32CF1E69309B93DF_ONATTACH_OFFSET UNITYSDK_OFFSET(0x961CA80)
#define CLASS_2_32CF1E69309B93DF_ONDETACH_OFFSET UNITYSDK_OFFSET(0x961CF60)
#define CLASS_2_32CF1E69309B93DF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x961CCD0)
#define CLASS_2_32CF1E69309B93DF__CTOR_OFFSET UNITYSDK_OFFSET(0x961CFC0)

inline static constexpr unsigned int Class_2_32CF1E69309B93DF_TypeDefinitionIndex = 70668;

class Class_2_32CF1E69309B93DF : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_32CF1E69309B93DF*>
{
public:
	::MoleMole::EntityHandle Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_E224AE88466E0A6C()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_E224AE88466E0A6C_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF1E69309B93DF_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
