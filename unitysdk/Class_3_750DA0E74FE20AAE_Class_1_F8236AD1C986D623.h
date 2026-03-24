#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_750DA0E74FE20AAE;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623_METHOD_1_18EBBC0616B3CD91_OFFSET UNITYSDK_OFFSET(0x7746790)
#define CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623_METHOD_1_D47D98058CFD0571_OFFSET UNITYSDK_OFFSET(0x7746620)
#define CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623__CTOR_OFFSET UNITYSDK_OFFSET(0x7746610)

inline static constexpr unsigned int Class_3_750DA0E74FE20AAE_Class_1_F8236AD1C986D623_TypeDefinitionIndex = 78769;

class Class_3_750DA0E74FE20AAE_Class_1_F8236AD1C986D623 : public ::System::Object
{
public:
	::Class_3_750DA0E74FE20AAE* Field_1_1; // 0x10
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x18
	::MoleMole::EntityHandle Field_1_2; // 0x20
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D98058CFD0571(::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623_METHOD_1_D47D98058CFD0571_OFFSET))(this, a1);
	}

	::System::Void Method_1_18EBBC0616B3CD91(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_CLASS_1_F8236AD1C986D623_METHOD_1_18EBBC0616B3CD91_OFFSET))(this, a1, a2);
	}
};
