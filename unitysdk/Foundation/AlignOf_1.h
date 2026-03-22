#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int AlignOf_1_TypeDefinitionIndex = 8817;

	template <typename T>
	class AlignOf_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Value()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlignOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
