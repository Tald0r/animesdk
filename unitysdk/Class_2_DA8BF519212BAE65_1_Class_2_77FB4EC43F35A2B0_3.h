#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_DA8BF519212BAE65_1_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x5FBC000)
#define CLASS_2_DA8BF519212BAE65_1_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x5FBC0B0)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_1_Class_2_77FB4EC43F35A2B0_3_TypeDefinitionIndex = 54468;

class Class_2_DA8BF519212BAE65_1_Class_2_77FB4EC43F35A2B0_3 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET))(this);
	}
};
