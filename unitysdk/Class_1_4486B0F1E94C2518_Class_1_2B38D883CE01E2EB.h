#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB_METHOD_1_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x95EB470)
#define CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB_METHOD_1_EB092EAC5D07B77E_OFFSET UNITYSDK_OFFSET(0x95EB4D0)
#define CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB__CTOR_OFFSET UNITYSDK_OFFSET(0x95EB460)

inline static constexpr unsigned int Class_1_4486B0F1E94C2518_Class_1_2B38D883CE01E2EB_TypeDefinitionIndex = 44405;

class Class_1_4486B0F1E94C2518_Class_1_2B38D883CE01E2EB : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::System::Action*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_34566E7905D6C48F(::Class_1_44EFB945CAE441A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB_METHOD_1_34566E7905D6C48F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB092EAC5D07B77E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4486B0F1E94C2518_CLASS_1_2B38D883CE01E2EB_METHOD_1_EB092EAC5D07B77E_OFFSET))(this, a1);
	}
};
