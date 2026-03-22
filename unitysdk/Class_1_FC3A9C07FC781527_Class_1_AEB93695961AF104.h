#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_B096AF19DEA8BDD2.h"
#include "unitysdk/System/Object.h"

class Class_1_FC3A9C07FC781527;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FC3A9C07FC781527_CLASS_1_AEB93695961AF104_METHOD_1_E5B2CEF96CB775BF_OFFSET UNITYSDK_OFFSET(0x9EF2BE0)
#define CLASS_1_FC3A9C07FC781527_CLASS_1_AEB93695961AF104__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF2BD0)

inline static constexpr unsigned int Class_1_FC3A9C07FC781527_Class_1_AEB93695961AF104_TypeDefinitionIndex = 48206;

class Class_1_FC3A9C07FC781527_Class_1_AEB93695961AF104 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* Field_1_2; // 0x10
	::Class_1_FC3A9C07FC781527* Field_1_0; // 0x18
	::Class_1_FC3A9C07FC781527_Enum_3_B096AF19DEA8BDD2 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC3A9C07FC781527_CLASS_1_AEB93695961AF104__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5B2CEF96CB775BF(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_1_FC3A9C07FC781527_CLASS_1_AEB93695961AF104_METHOD_1_E5B2CEF96CB775BF_OFFSET))(this, a1);
	}
};
