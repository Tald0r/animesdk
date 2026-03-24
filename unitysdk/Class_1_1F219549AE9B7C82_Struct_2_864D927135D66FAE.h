#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9E3E3CDA608A4F58;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_1D199A94CC6F8475_OFFSET UNITYSDK_OFFSET(0x35F5A0)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x35F5E0)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_36D0A72CA6457C76_OFFSET UNITYSDK_OFFSET(0x35F6A0)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_FDD74C4056250941_OFFSET UNITYSDK_OFFSET(0x35F5C0)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x31E200)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_TypeDefinitionIndex = 62803;

struct alignas(8) Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE
{
	::System::Threading::CancellationToken Field_2_0; // 0x10
	::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B Field_2_1; // 0x18

	::System::Void _ctor(::System::Threading::CancellationToken a1, ::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Method_2_1D199A94CC6F8475(::UnityEngine::Animation* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_1D199A94CC6F8475_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Method_2_FDD74C4056250941(::Class_2_9E3E3CDA608A4F58* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_FDD74C4056250941_OFFSET))(this, a1, a2);
	}
	*/

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_36D0A72CA6457C76(::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F219549AE9B7C82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_864D927135D66FAE_METHOD_2_36D0A72CA6457C76_OFFSET))(this, a1);
	}
};
