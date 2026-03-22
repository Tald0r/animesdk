#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_2_4548F324FCF7744C_1_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x62E2470)
#define CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x62E2460)
#define CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x62E24E0)
#define CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x62E2450)
#define CLASS_2_4548F324FCF7744C_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x62E2210)
#define CLASS_2_4548F324FCF7744C_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x62E0540)
#define CLASS_2_4548F324FCF7744C_1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x62E23E0)
#define CLASS_2_4548F324FCF7744C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x62E2440)

inline static constexpr unsigned int Class_2_4548F324FCF7744C_1_TypeDefinitionIndex = 71582;

class Class_2_4548F324FCF7744C_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_4548F324FCF7744C_1*>
{
public:
	::MoleMole::EntityHandle Field_2_0; // 0x20
	::Class_3_07AAFA6F7F79BEB3* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_ONUPDATE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4548F324FCF7744C_1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
