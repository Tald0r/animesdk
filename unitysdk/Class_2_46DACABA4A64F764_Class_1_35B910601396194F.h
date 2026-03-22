#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_11E43C7F4F662EE8_Class_1_C96FBF56FD167AC4_Struct_2_318F939E5295DF93.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_46DACABA4A64F764;

#define CLASS_2_46DACABA4A64F764_CLASS_1_35B910601396194F_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x89CE0C0)
#define CLASS_2_46DACABA4A64F764_CLASS_1_35B910601396194F__CTOR_OFFSET UNITYSDK_OFFSET(0x89CE0B0)

inline static constexpr unsigned int Class_2_46DACABA4A64F764_Class_1_35B910601396194F_TypeDefinitionIndex = 72574;

class Class_2_46DACABA4A64F764_Class_1_35B910601396194F : public ::System::Object
{
public:
	::Class_2_11E43C7F4F662EE8_Class_1_C96FBF56FD167AC4_Struct_2_318F939E5295DF93 Field_1_1; // 0x10
	::Class_2_46DACABA4A64F764* Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_CLASS_1_35B910601396194F__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_CLASS_1_35B910601396194F_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
