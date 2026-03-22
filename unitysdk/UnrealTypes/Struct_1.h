#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_1_TypeDefinitionIndex = 23984;

	template <typename T>
	class Struct_1 : public ::System::Object
	{
	public:
		static T* StaticGet_DefaultObject()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(Struct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
