#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_A8AD4ABAE49686E5_CLASS_1_C8796570AB31A369_METHOD_1_450C916AAF86E53D_OFFSET UNITYSDK_OFFSET(0x6FD49C0)
#define CLASS_3_A8AD4ABAE49686E5_CLASS_1_C8796570AB31A369__CTOR_OFFSET UNITYSDK_OFFSET(0x6FD49B0)

inline static constexpr unsigned int Class_3_A8AD4ABAE49686E5_Class_1_C8796570AB31A369_TypeDefinitionIndex = 59287;

class Class_3_A8AD4ABAE49686E5_Class_1_C8796570AB31A369 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_1; // 0x10
	::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CLASS_1_C8796570AB31A369__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_450C916AAF86E53D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CLASS_1_C8796570AB31A369_METHOD_1_450C916AAF86E53D_OFFSET))(this, a1, a2);
	}
};
