#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_37.h"

class Class_1_F89DFA8F8CC59AF0;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_08BAC98BE0E6B868_METHOD_2_5765DD035F62EED8_OFFSET UNITYSDK_OFFSET(0xA15F200)
#define CLASS_2_08BAC98BE0E6B868__CTOR_OFFSET UNITYSDK_OFFSET(0xA15FB40)

inline static constexpr unsigned int Class_2_08BAC98BE0E6B868_TypeDefinitionIndex = 39381;

class Class_2_08BAC98BE0E6B868 : public ::Class_1_43BD383C98B4C0C5_37
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08BAC98BE0E6B868__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5765DD035F62EED8(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_F89DFA8F8CC59AF0*>*))((::PBYTE)hIl2Cpp + CLASS_2_08BAC98BE0E6B868_METHOD_2_5765DD035F62EED8_OFFSET))(this, a1, a2);
	}
};
