#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4.h"
#include "unitysdk/System/Object.h"

class Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_0EAE014B01761E44_OFFSET UNITYSDK_OFFSET(0xD6D9B60)
#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD6D9C70)
#define CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D9B50)

inline static constexpr unsigned int Class_1_9166BD0F741825C9_Class_1_ED9989545D894FAC_TypeDefinitionIndex = 68970;

class Class_1_9166BD0F741825C9_Class_1_ED9989545D894FAC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0*>* Field_1_4; // 0x10
	::UnityEngine::GameObject* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EAE014B01761E44(::UnityEngine::GameObject* a1, ::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::Class_1_9166BD0F741825C9_Enum_3_E8EEFC25995A90B4, ::Class_1_9166BD0F741825C9_Class_1_80B72DC469819FF0*>*))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_0EAE014B01761E44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9166BD0F741825C9_CLASS_1_ED9989545D894FAC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
