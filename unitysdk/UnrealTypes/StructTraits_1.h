#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int StructTraits_1_TypeDefinitionIndex = 23982;

	template <typename T>
	class StructTraits_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StructTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_Alignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StructTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
