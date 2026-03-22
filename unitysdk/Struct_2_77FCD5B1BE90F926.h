#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_77FCD5B1BE90F926_DISPOSE_OFFSET UNITYSDK_OFFSET(0x36D210)
#define STRUCT_2_77FCD5B1BE90F926_METHOD_2_ACEF84ADA5B430E3_OFFSET UNITYSDK_OFFSET(0x99CAFC0)
#define STRUCT_2_77FCD5B1BE90F926__CTOR_OFFSET UNITYSDK_OFFSET(0x36D200)

inline static constexpr unsigned int Struct_2_77FCD5B1BE90F926_TypeDefinitionIndex = 39802;

struct alignas(1) Struct_2_77FCD5B1BE90F926
{
	::System::Boolean Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_77FCD5B1BE90F926__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_77FCD5B1BE90F926_DISPOSE_OFFSET))(this);
	}

	/*
	static ::Struct_2_AACEDD85A6FDFBDD Method_2_ACEF84ADA5B430E3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_AACEDD85A6FDFBDD(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_77FCD5B1BE90F926_METHOD_2_ACEF84ADA5B430E3_OFFSET))(a1, a2);
	}
	*/
};
